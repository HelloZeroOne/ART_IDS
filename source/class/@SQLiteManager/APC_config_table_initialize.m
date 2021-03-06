% 应用协议编解码配置表格初始化
function [obj] = APC_config_table_initialize(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 导出查询表内容
config_parameter_list_table = obj.Database_query_export('查询配置参数列表');
receive_CAN_message_list_table = obj.Database_query_export('查询接收CAN消息列表');
send_CAN_message_list_table = obj.Database_query_export('查询发送CAN消息列表');
receive_TRDP_process_data_list_table = obj.Database_query_export('查询接收TRDP过程数据列表');
send_TRDP_process_data_list_table = obj.Database_query_export('查询发送TRDP过程数据列表');
digital_input_list_table = obj.Database_query_export('查询数字量输入列表');
digital_output_list_table = obj.Database_query_export('查询数字量输出列表');
receive_TCP_ASCII_list_table = obj.Database_query_export('查询接收TCP连接ASCII码列表');
port_data_variable_list_table = obj.Database_query_export('查询端口临时数据变量列表');
receive_CAN_variable_list_table = obj.Database_query_export('查询接收CAN变量列表');
send_CAN_variable_list_table = obj.Database_query_export('查询发送CAN变量列表');
receive_TRDP_variable_list_table = obj.Database_query_export('查询接收TRDP变量列表');
send_TRDP_variable_list_table = obj.Database_query_export('查询发送TRDP变量列表');
digital_input_variable_list_table = obj.Database_query_export('查询数字量输入变量列表');
digital_output_variable_list_table = obj.Database_query_export('查询数字量输出变量列表');
receive_TCP_ASCII_variable_list_table = obj.Database_query_export('查询接收TCP连接ASCII码变量列表');

%% 根据指定的车型、车厢筛选表格内容
sifted_config_parameter_list = config_parameter_list_table(matches(...
    config_parameter_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(config_parameter_list_table.('carriage'), obj.specified_carriage), :);
sifted_receive_CAN_message_list = receive_CAN_message_list_table(matches(...
    receive_CAN_message_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(receive_CAN_message_list_table.('carriage'), obj.specified_carriage), :);
sifted_send_CAN_message_list = send_CAN_message_list_table(matches(...
    send_CAN_message_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(send_CAN_message_list_table.('carriage'), obj.specified_carriage), :);
sifted_receive_TRDP_process_data_list = receive_TRDP_process_data_list_table(matches(...
    receive_TRDP_process_data_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(receive_TRDP_process_data_list_table.('carriage'), obj.specified_carriage), :);
sifted_send_TRDP_process_data_list = send_TRDP_process_data_list_table(matches(...
    send_TRDP_process_data_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(send_TRDP_process_data_list_table.('carriage'), obj.specified_carriage), :);
sifted_digital_input_list_table = digital_input_list_table(matches(...
    digital_input_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(digital_input_list_table.('carriage'), obj.specified_carriage), :);
sifted_digital_output_list_table = digital_output_list_table(matches(...
    digital_output_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(digital_output_list_table.('carriage'), obj.specified_carriage), :);
sifted_receive_TCP_ASCII_list_table = receive_TCP_ASCII_list_table(matches(...
    receive_TCP_ASCII_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(receive_TCP_ASCII_list_table.('carriage'), obj.specified_carriage), :);
sifted_port_data_variable_list = port_data_variable_list_table(matches(...
    port_data_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(port_data_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_receive_CAN_variable_list = receive_CAN_variable_list_table(matches(...
    receive_CAN_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(receive_CAN_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_send_CAN_variable_list = send_CAN_variable_list_table(matches(...
    send_CAN_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(send_CAN_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_receive_TRDP_variable_list = receive_TRDP_variable_list_table(matches(...
    receive_TRDP_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(receive_TRDP_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_send_TRDP_variable_list = send_TRDP_variable_list_table(matches(...
    send_TRDP_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(send_TRDP_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_digital_input_variable_list_table = digital_input_variable_list_table(matches(...
    digital_input_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(digital_input_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_digital_output_variable_list_table = digital_output_variable_list_table(matches(...
    digital_output_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(digital_output_variable_list_table.('carriage'), obj.specified_carriage), :);
sifted_receive_TCP_ASCII_variable_list_table = receive_TCP_ASCII_variable_list_table(matches(...
    receive_TCP_ASCII_variable_list_table.('tram_type'), obj.specified_tram_type) & ...
    matches(receive_TCP_ASCII_variable_list_table.('carriage'), obj.specified_carriage), :);

%% 对筛选后的表格排序
obj.sorted_config_parameter_list = sortrows(sifted_config_parameter_list, ...
    'parameter_name');
obj.sorted_receive_CAN_message_list = sortrows(sifted_receive_CAN_message_list, ...
    'CAN_message_name');
obj.sorted_send_CAN_message_list = sortrows(sifted_send_CAN_message_list, ...
    'CAN_message_name');
obj.sorted_receive_TRDP_process_data_list = sortrows(sifted_receive_TRDP_process_data_list, ...
    'TRDP_process_data_name');
obj.sorted_send_TRDP_process_data_list = sortrows(sifted_send_TRDP_process_data_list, ...
    'TRDP_process_data_name');
obj.sorted_digital_input_list = sortrows(sifted_digital_input_list_table, 'DIO_name');
obj.sorted_digital_output_list = sortrows(sifted_digital_output_list_table, 'DIO_name');
obj.sorted_receive_TCP_ASCII_list = sortrows(sifted_receive_TCP_ASCII_list_table, ...
    'TCP_ASCII_head_name');
obj.sorted_port_data_variable_list = sortrows(sifted_port_data_variable_list, ...
    'variable_name');
obj.sorted_receive_CAN_variable_list = sortrows(sifted_receive_CAN_variable_list, ...
    {'variable_name', 'CAN_message_name', 'start_bit'});
obj.sorted_send_CAN_variable_list = sortrows(sifted_send_CAN_variable_list, ...
    {'variable_name', 'CAN_message_name', 'start_bit'});
obj.sorted_receive_TRDP_variable_list = sortrows(sifted_receive_TRDP_variable_list, ...
    {'variable_name', 'TRDP_process_data_name', 'start_byte'});
obj.sorted_send_TRDP_variable_list = sortrows(sifted_send_TRDP_variable_list, ...
    {'variable_name', 'TRDP_process_data_name', 'start_byte'});
obj.sorted_digital_input_variable_list = sortrows(sifted_digital_input_variable_list_table, ...
    {'variable_name', 'DIO_name', 'channel'});
obj.sorted_digital_output_variable_list = sortrows(sifted_digital_output_variable_list_table, ...
    {'variable_name', 'DIO_name', 'channel'});
obj.sorted_receive_TCP_ASCII_variable_list = sortrows(sifted_receive_TCP_ASCII_variable_list_table, ...
    {'variable_name', 'TCP_ASCII_head_name', 'signal_order_index'});

end

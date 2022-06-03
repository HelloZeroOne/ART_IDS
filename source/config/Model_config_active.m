% 激活模型的指定配置
function [] = Model_config_active(model_name, config_name)
%   1.输入参数：
%       (1)model_name     模型名称
%       (2)config_name    主模型的配置名称

%   2.输出参数：无
%% 载入模型和配置名称
%载入模型
load_system(model_name);
%接收主模型的配置名称
config_source_name =  config_name;
%设置配置引用的名称，设置为与主模型的配置名称一致
config_reference_name = config_name;

%% 创建配置引用
config_reference = Simulink.ConfigSetRef;
%将引用指向主模型的配置，SourceName属性设置为config_source_name
set_param(config_reference,'SourceName',config_source_name);
%配置引用命名为config_reference_name
set_param(config_reference,'Name',config_reference_name);
%获取模型当前的配置
current_config = getConfigSets(model_name);
%计算模型中配置引用的数量
config_num = length(current_config);
%按顺序查找模型中的配置引用，判断是否已经存在与期望名称一致的命名，利用duplicated_flag记录结果
duplicated_flag = 0;
for index = 1 : 1 : config_num 
    if strcmp(current_config(index,1), config_reference_name)
        duplicated_flag = 1;
    end
end
%如果没有出现过与期望的配置引用名称一致的命名，则设置
if ~duplicated_flag
 attachConfigSet(model_name,config_reference);
end

%% 激活配置引用
% 获取模型当前激活的配置
actived_config = getActiveConfigSet(model_name);
% 若已激活的配置引用不同，则修改配置
if ~strcmp(actived_config.Name, config_reference_name)
    setActiveConfigSet(model_name,config_reference_name);
    save_system(model_name);
end
% 关闭模型
close_system(model_name);
end


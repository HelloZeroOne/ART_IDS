% 将组合惯导给出的“WGS84坐标系”（纬度，经度，高度）转换成“地心大地坐标系”（X, Y, Z)
function [XYZ] = WGS84_BLH_to_earth_xyz_m(B, L, H)
%   1.输入参数：
%       (1)B      纬度，实数，deg
%       (2)L      经度，实数，deg
%       (3)H      高度，实数，m
%   2.输出参数：
%       (1)XYZ    地心大地坐标，n×3矩阵
%          ->第1列，地心大地x坐标，实数，m
%          ->第2列，地心大地y坐标，实数，m
%          ->第3列，地心大地z坐标，实数，m

%% 初始化
% WGS-84坐标系使用的地球椭球参数
a = 6378137;         % 长半轴，正实数，m
b = 6356752.31414;   % 短半轴，正实数，m
e = 0.0818191910428; % 偏心率，正实数，无量纲

%% 将经度纬度转换成弧度值方便使用三角函数
B_rad = deg2rad(B); % 纬度转换成弧度
L_rad = deg2rad(L); % 经度转换成弧度

%% 分别计算x、y、z坐标
% 由该点的纬度B计算地球椭球卯酉圈曲率半径Rn
Rn = a^2 / sqrt(a^2 * (cos(B_rad))^2 + b^2 * (sin(B_rad))^2);

% 计算地心大地坐标X
X = (Rn + H) * cos(B_rad) * cos(L_rad);

% 计算地心大地坐标Y
Y = (Rn + H) * cos(B_rad) * sin(L_rad);

% 计算地心大地坐标Z
Z = (Rn + H - e^2 * Rn) * sin(B_rad);

%% 合成输出矩阵
XYZ = [X, Y, Z];

end

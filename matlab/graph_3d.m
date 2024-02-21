% Exemplo de gráfico 3D

% Dados para plot
[X,Y] = meshgrid(-2:0.1:2); % Cria grelha de valores
Z = sin(sqrt(X.^2 + Y.^2)); % Calcula os valores de Z

% Cria o gráfico de superfície
figure;
surf(X, Y, Z);

% Adiciona título e rótulos aos eixos
title('Gráfico 3D de sin(sqrt(X^2 + Y^2))');
xlabel('Eixo X');
ylabel('Eixo Y');
zlabel('sin(sqrt(X^2 + Y^2))');

% Adiciona barra de cores
colorbar;

% Adiciona detalhes de formatação
% Interpolação de cores para superfície suave
shading interp;
% Esquema de cores Jet
colormap(jet);

% Ajusta o ângulo de visualização
view(-30, 30);

% Adiciona grelha
grid on;
% Exemplo de gráfico 2D

% Dados para plot
x = linspace(0, 2*pi, 100);
y1 = sin(x);
y2 = cos(x);

% Cria o gráfico
figure;
% Linha azul com largura de linha 2
plot(x, y1, 'b-', 'LineWidth', 2);
% Mantém o gráfico atual enquanto adiciona novas linhas
hold on;
% Linha vermelha tracejada com largura de linha 2
plot(x, y2, 'r--', 'LineWidth', 5);

% Adiciona título e rótulos aos eixos
title('Gráfico de Seno e Cosseno');
xlabel('Eixo X');
ylabel('Eixo Y');

plot()

% Adiciona legenda
legend('sin(x)', 'cos(x)', 'Location', 'northwest');

% Adiciona grelha
grid on;

% Altera limites dos eixos
xlim([0, 2 * pi]);
ylim([-1.5, 1.5]);

% Finaliza o gráfico
hold off;
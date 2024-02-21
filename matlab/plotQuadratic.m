function [f]=plotQuadratic(a, b, c)
% PLOTQUADRATIC Plota uma função quadrática y = ax^2 + bx + c.

% Gerar valores de x
x = linspace(-10, 10, 1000);

% Calcular valores de y
y = a * x.^2 + b * x + c;

% Plotar a função quadrática
f = figure;
plot(x, y, 'LineWidth', 2);
xlabel('x');
ylabel('y');
title('Gráfico da Função Quadrática');
grid on;

% Mostrar a equação quadrática
eqn = sprintf('y = %dx^2 + %dx + %d', a, b, c);
text(0, max(y), eqn, 'FontSize', 12, 'HorizontalAlignment', 'center');

end
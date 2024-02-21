% Solicitar ao utilizador os coeficientes
disp('Bem-vindo ao Gráfico da Função Quadrática!');

a = input('Introduza o coeficiente de x^2: ');
b = input('Introduza o coeficiente de x: ');
c = input('Introduza o termo constante: ');

% Chamar a função para plotar a função quadrática
[f] = plotQuadratic(a, b, c);

% Salvar o gráfico em formato PNG
saveas(f, "quadratic_eq", "png");
% Gerar uma matriz mágica
A = magic(3);
[nrows, ncols] = size(A);

% Iterar sobre as linhas e colunas da matriz
for i = 1:nrows
    for j = 1:ncols
        a = A(i, j);
        % Verificar se o elemento é par ou ímpar
        if rem(a, 2) == 0
            fprintf("A(%d, %d): %d é par\n", i, j, a)
        else
            fprintf("A(%d, %d): %d é ímpar\n", i, j, a)
        end
    end
end
% 'The Rainbow Connection'

%This code will create a graphical representation of the rainbow colors

x = 0:pi/100:2*pi;
y = 0:pi/100:2*pi;
[X,Y] = meshgrid(x,y);

R = sin(X);
G = sin(Y);
B = sin(X+Y);

C = cat(3,R,G,B);

figure;
image(C);

axis off
title('The Rainbow Connection')

% end of code
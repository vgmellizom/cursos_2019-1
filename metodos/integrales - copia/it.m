function yit=it(x,w)
  format long
  h=w/4;
  i=((2*h)/45)*((7*f(x))+(32*f(x+h))+(12*f(x+(2*h)))+(32*f(x+(3*h)))+(7*f(x+(4*h))));
  yit=i;
endfunction

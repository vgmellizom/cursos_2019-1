function yit=it(x,w)
  format long
  h=w;
  i=(h/2)*(f(x)+f(x+h));
  yit=i;
endfunction

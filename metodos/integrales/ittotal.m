function yttotal=ittotal(xi,xf,M)
  format long;
  w=(xf-xi)/M;
  suma=0;
  for x=xi:w:(xf-w)
    suma=suma+it(x,w);
  end
  i_real=sin(xf)-sin(xi)
  errorr=i_real-suma
  yttotal=suma;
endfunction

function y_fin = runge( x0, y0, x, m )
  format long;
  xi = x0;
  yi = y0;
  h = ( x - x0 ) / m;
  contador = x;
  while ( xi <= x )
    yi_next = runge1( xi, yi, h );
    xi_next = xi + h;
    xi = xi_next;
    yi = yi_next;
  endwhile
  real = ((x^4.7) + 10)
  errorr = real - yi_next;
  fprintf( 'x final = %15.11f \ny final = %15.11f \nx real = %15.11f \nerror = %15.11f \n',x,yi_next, real, errorr);
  y_fin = yi_next;
  
endfunction

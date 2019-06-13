function y_next = runge1( x, y, h )
  
  format long;
  k1 = f( x, y );
  k2 = f( x + ( h / 2 ), y + ( k1 * ( h / 2 ) ) );
  k3 = f( x + ( h / 2 ), y + ( k2 * ( h / 2 ) ) );
  k4 = f( x +  h , y + ( k3 *  h  ) );
  
  k = ( k1 + ( 2 * k2 ) + ( 2 * k3 ) + k4) / 6;
  
  y_next = y + ( h * k );
  
endfunction

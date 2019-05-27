// Reverse Filter 1
for ($i = 0; $i < $s; $i++)
   $p[$i+3] = ($p[$i+3] + $p[$i]) % 256;
// Reverse Filter 3
for ($i = 0; $i < $s; $i++)
   $p[$i+3] = ($p[$i+3] + floor($p[$i] / 2)) % 256;
//https://www.idontplaydarts.com/2012/06/encoding-web-shells-in-png-idat-chunks/

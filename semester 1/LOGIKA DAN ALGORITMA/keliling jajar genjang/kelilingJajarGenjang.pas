program kelilingJajarGenjang;
uses crt;
var 
    a,b,keliling: Integer;
begin
  clrscr;
  writeln ('Nama: ');
  writeln ('Kelas: ');
  writeln ('Masukan nilai a: ');readln(a);
  writeln ('Masukan nilai b: ');readln(b);
  keliling :=  2*(a+b);
  writeln ('Keliling jajar genjang diatas: ', keliling);
end.


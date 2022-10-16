program luas_segitiga;
uses crt;
var 
    alas,tinggi,luas: real;
begin
clrscr;
writeln ('Nama: Fraza Aditya Wiguna');
writeln ('Kelas: B (malam)');
writeln ('---------------------------');
writeln ('Masukan alas: ');
readln(alas);
writeln('Masukan tinggi');
readln(tinggi);
luas :=  (alas * tinggi) / 2;
writeln('Luas segitiga adalah ', luas:2:2);
readln;
end.

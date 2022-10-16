program menghitung_nilai;
uses crt;
var 
    user_value: integer;
begin
clrscr;
writeln ('Nama: Fraza Aditya Wiguna');
writeln ('Kelas: B (malam)');
writeln ('---------------------------');
writeln('Masukan Nilai: ');
readln(user_value);
if user_value >= 90 then
    writeln('Anda mendapatkan Grade A')
else if (user_value < 90) and (user_value >= 80) then
    writeln('Anda mendapatkan Grade A-')
else if (user_value < 80) and (user_value >= 75) then
    writeln('Anda mendapatkan Grade B')
else if (user_value < 75) and (user_value >= 70) then
    writeln('Anda mendapatkan Grade B-')
else if (user_value < 70) and (user_value >= 60) then
    writeln('Anda mendapatkan Grade C')
else if (user_value < 60) and (user_value >= 40) then
    writeln('Anda mendapatkan Grade D')
else
    writeln('Anda mendapatkan Grade E')
end.


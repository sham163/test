#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{

int count = 0;
int i = 0, s = 0;
va_list sham;
char *string;

va_start(sham, format);

if (format && format[i])
{
for (; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch(format[i])
{
case 'c':
{
putchar(va_arg(sham, int));
count += 1;
}
break;

case 's':
{
string = va_arg(sham, char *);
if (string == NULL)
{
string = "(nill)";
}
else
{
for (s = 0; string[s] != '\0'; s++)
{
putchar(string[s]);
count += 1;
}
}
}
break;
case '%':
{
putchar('%');
count += 1;
}
break;
default:
{
putchar(format[i]);
count += 1;
}
break;
}
}
else
{
putchar(format[i]);
count += 1;
}
}
}
va_end(sham);

return (count);


}



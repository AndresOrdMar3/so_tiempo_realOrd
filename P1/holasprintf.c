#include <stdio.h> /*printf();sprintf()*/
#define LENGTH 128
#define FILE_NAME "Operacion_"
int funcion_stub(int intA);
long main(){
	char str[LENGTH];
	int intA=LENGTH;
	sprintf(str,"%s%d",FILE_NAME,funcion_stub(LENGTH));
	printf("%s",str);
	return funcion_stub(LENGTH);
}

#include "../httpd.h"
/**************************************
*author: Jone.Chen  <yuhua8688@tom.com>
*License:LGPL
***************************************/
/*
  name--�ļ�����offset--ƫ����,length--��ǰ���������ȣ�size--ʣ�����������ȡ�
  offset=0:�ļ���ʼ
  size=0:�ļ�����
*/
//#ifdef RT_HTTP_USE_UPLOAD
void processUpload(int sock,char *name,char * value,unsigned long offset,unsigned long length,unsigned long size)
{
	 if(offset==0)
	 {
	 	send(sock,"<p>Filename:",12,0);
		send(sock,name,rt_strlen(name),0);
		send(sock,"</p> <p>Data</p> <p>",20,0);
	 }
	 send(sock,value,length,0);
	 if(size==0)
	 {
	   send(sock,"</p>",4,0);
	 }
}
//#endif


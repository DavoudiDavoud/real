#ifndef ADCREADER
#define ADCREADER

#include <QThread>
 
class ADCreader : public QThread
{
public:
	ADCreader();
	void quit();
	void run();
	int dat = 500;
	
	
	int ret;
	int fd;
	int sysfs_fd;
	bool running; 
	int no_tty;
	


};

#endif

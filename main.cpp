#include"packet.h"

int main(void) {
	//unsigned char txdate[9];
	unsigned char date=0x00 & 0x00;
	unsigned char torque_off = 0x00;
	unsigned char torque_on  = 0x01;

	packet packet2(1);//Pin_number
	//packet2.check_sum(txdate,9);
	packet2.torque_on_off(1,torque_on);
}


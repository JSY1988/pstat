#ifndef __PACKET_H__
#define __PACKET_H__


#define NETPACKET_HEAD (sizeof(NETPACKET)-8)
#define PACKET_TCP 1
#define PACKET_UDP 2
typedef struct _NetPacket{
	long    tv_sec;         /* seconds */
    u_int8_t ip_proto;      /* datagram protocol */
	u_int8_t  reserve;
	union{
    u_int32_t ip_src;  /* source IP */
	u_int8_t  src_b[4];
	};
	union{
    u_int32_t ip_dst;  /* dest IP */
	u_int8_t  dst_b[4];
	};
    u_int16_t th_sport;     /* source port */
    u_int16_t th_dport;     /* destination port */
	int    length; // ip���ܳ��ȣ�����IPͷ��Э��ͷ�����ݶ�
	u_int16_t off_app;//Э��ͷƫ�ƣ�Ҳ��IPͷ����
	u_int16_t off_data; // ���ݶ�ƫ��
	const u_int8_t * package; // ip��
	u_int32_t len_pack;
	const u_int8_t * data;// ���ݶ�
	u_int32_t len_data;
} NetPacket;

#endif

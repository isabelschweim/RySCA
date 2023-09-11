#ifndef _ARP_H
#define _ARP_H

#include <stdint.h>

 // int arp_resolve (eth_iface_t * iface, ipv4_addr, mac_addr_t mac_addr);
// Esta funcion dada una direccion ipv4 debe mandar un broadcast arp por la interfaz ethX, y debe devolver 
//relleno  la direccion mac, del dispositivo. 

//esta funcion arp_resolve se llamara desde arp_client y estara definida en arp.c, en la que abriremos la interfaz
// que necesitemos por ethernet y luego la cerraremos. 


// esta funcion tiene variables de tipo, interfaz, de variable ip, y de mac addr que ya estan definidas. 



#endif /* _ARP_H*/


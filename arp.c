#include "eth.h"
#include "arp.h"
#include "ipv4.h"
#include <rawnet.h>
#include <timerms.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <netinet/in.h>



  int arp_resolve (eth_iface_t * iface, ipv4_addr_t ip_addr, mac_addr_t mac_addr) {

   uint16_t type = 0x0806; // defino el tipo de paquete ethernet que voy a enviar, que siempre va a ser de tipo   arp.
   mac_addr_t dst;  // declaro la variable del tipo mac con la direccion de broadcast que voy a enviar. 
   
   char* server_addr_str = "FF:FF:FF:FF:FF:FF";  // para todos y este texto lo paso a direccion. 
   
     mac_str_addr(server_addr_str, dst);
   
   
   
   
   // esta funcion debe de resolver apartir de una ip, la direccion MAC, en un tiempo determinado, 
   // si no recibe nada en X tiempo debe de devolver un -1. 
   // si hay un error tambien debe de decirlo. 
   
   
   
   // arbimos la iterfaz que pasamos, ya sea eth X, etc.
 eth_iface_t * eth_open ( char* iface )
{
  struct eth_iface * eth_iface;

  /* Reservar memoria para el manejador del interfaz Ethernet */
  eth_iface = malloc(sizeof(struct eth_iface));
  if (eth_iface == NULL) {
    fprintf(stderr, "eth_open(): ERROR en malloc()\n");
    return NULL;
  }
  
  /* Abrir el interfaz "en crudo" subyacente */
  rawiface_t * raw_iface = rawiface_open(iface);
  if (raw_iface == NULL) {
    fprintf(stderr, "eth_open(): ERROR en rawiface_open(): %s\n",
            rawnet_strerror());
    return NULL;
  }  
  eth_iface->raw_iface = raw_iface;

  /* Copiar la dirección MAC en el manejador */
  rawiface_getaddr(raw_iface, eth_iface->mac_address);

  return eth_iface;
}

   

// tenemos que enviar el tipo de trama que queremos. 
// Como queremos enviar el tipo de trama ARP, que tiene que tenere un TYPE que sera, 0x0806, y un dest, que demomento, sera broadcast, en ese caso sera FF:FF:FF:FF:FF



   // int eth_send ( eth_iface_t * iface,  mac_addr_t dst, uint16_t type, unsigned char * payload, int payload_len );

    // payload??
    




 // tendremos que recibir el tipo de trama especifico que queremos en este caso un ARP RESPONSE. 
 
   
  // int eth_recv ( eth_iface_t * iface, mac_addr_t src, uint16_t type, unsigned char buffer[], 
 //  int buf_len, long int timeout );
 
 // debe de recibir en la interfaz ethx direccion destino debe de ser la direccion de la maquina, el type debe de ser ARP, y el buffer debe de contener la direccion MAC del otro equipo. 
 
 // src, es la direccion MAC del que envio la trama entocnes es la mac que queremos. 
 
 //'src': Dirección MAC del equipo que envió la trama Ethernet recibida.
 //*             Este es un parámetro de salida. La dirección se copiará en la
 //*             memoria indicada, que debe estar reservada previamente.
 
 
 
 
 
 
 
   // una vez recibido cerramos la interfaz. 
 
   
 

 int  eth_close(eth_iface_t * iface)






}









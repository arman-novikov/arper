#include "arper.h"

std::string ifname = "enp3s0";
std::string dest_ip = "192.168.1.169";

int main(int, const char **)
{
    int code;
    ARPer arper;
    ARP_res_t res {
        dest_ip,
        std::string(""),
    };

    std::cout <<"VERSION: "<< 1.81F << std::endl;
    if (arper.set_ifname(ifname))
        return -1;

    code = arper.probe(res);
    std::cout << "\nIP: " << res.ip
              << "\nMAC: " << res.mac << std::endl;
    return code;
}

# Referências --- Projeto TechStore

Este arquivo reúne as principais fontes técnicas utilizadas como apoio
ao planejamento da infraestrutura de TI da TechStore Solutions Ltda.

> **Observação:** a TechStore, suas unidades e a quantidade de
> colaboradores são premissas fictícias do projeto acadêmico. As fontes
> abaixo servem para consulta e validação de características técnicas,
> não para comprovar a existência da empresa.

## Fabricantes e documentação técnica

### Processadores e placas-mãe

-   AMD --- Ryzen 5 5600G:
    https://www.amd.com/en/support/downloads/drivers.html/processors/ryzen/ryzen-5000-series/amd-ryzen-5-5600g.html
-   AMD --- Ryzen 7 7700:
    https://www.amd.com/pt/products/processors/desktops/ryzen/7000-series/amd-ryzen-7-7700.html
-   ASUS --- PRIME B550M-A:
    https://www.asus.com/br/motherboards-components/motherboards/prime/prime-b550m-a/techspec/
-   ASUS --- TUF GAMING B650M-PLUS:
    https://www.asus.com/br/motherboards-components/motherboards/tuf-gaming/tuf-gaming-b650m-plus/techspec/
-   Intel --- Xeon Silver 4410Y:
    https://www.intel.com/content/www/us/en/products/sku/232376/intel-xeon-silver-4410y-processor-30m-cache-2-00-ghz/specifications.html
-   NVIDIA --- GeForce RTX 4060:
    https://www.nvidia.com/pt-br/geforce/graphics-cards/40-series/rtx-4060-4060ti/

### Servidores, armazenamento e energia

-   Dell --- PowerEdge T560 Technical Guide:
    https://www.delltechnologies.com/asset/en-in/products/servers/technical-support/poweredge-t560-technical-guide.pdf
-   Dell --- PowerEdge T350 ficha técnica:
    https://i.dell.com/sites/csdocuments/Product_Docs/en/dell-emc-poweredge-t350-spec-sheet.pdf
-   Western Digital --- Calculadora de capacidade RAID:
    https://www.westerndigital.com/pt-br/tools/raid-capacity-calculator
-   Schneider Electric / APC --- Smart-UPS SMT3000I2U-BR:
    https://www.se.com/br/pt/product/SMT3000I2U-BR/apc-smartups-line-interactive-3kva-rackmount-2u-230v-7-tomadas-nbr-14136-smartslot-avr-lcd/

### Redes, sistemas e monitoramento

-   Cisco --- Configuração de roteamento entre VLANs com IEEE 802.1Q:
    https://www.cisco.com/c/en/us/td/docs/routers/ios-xe/lan-wan/lan-wan/m_lnsw-conf-vlan-ieee.html
-   Microsoft Learn --- DNS e Active Directory Domain Services:
    https://learn.microsoft.com/pt-br/windows-server/identity/ad-ds/plan/dns-and-ad-ds
-   Zabbix --- Documentação oficial:
    https://www.zabbix.com/documentation/current/en/manual/introduction
-   Grafana --- Documentação oficial:
    https://grafana.com/docs/grafana/latest/introduction/
-   VMware --- Workstation Pro e Fusion:
    https://www.vmware.com/products/desktop-hypervisor/workstation-and-fusion

## Arquivos e evidências internas do projeto

As decisões e configurações do projeto também são documentadas nos
seguintes arquivos:

-   `Infraestrutura_TechStore_Profissional.xlsx` --- perfis,
    configurações, compatibilidade, servidores, RAID, energia,
    inventário e comparação.
-   `2parteF4.xlsx` --- dimensionamento dos postos, componentes e
    justificativas.
-   `Vlans - 1.xlsx` --- segmentação lógica, VLANs, endereçamento e
    finalidade das redes.
-   `servidores-raid-energia.xlsx` --- dimensionamento dos servidores,
    cálculos RAID e nobreak.
-   `inventario-e-orcamento.xlsx` --- itens, quantidades, valores de
    referência e fornecedores.
-   `comparacao-e-decisao.md` --- comparação das alternativas e
    justificativas das escolhas.
-   Plantas e diagramas conceituais --- distribuição dos ambientes e
    representação visual da infraestrutura.

## Critérios de utilização

-   Consultar as páginas dos fabricantes para confirmar especificações e
    compatibilidade dos modelos.
-   Registrar a data de consulta e o link da oferta em cada pesquisa de
    preço.
-   Tratar preços como referências sujeitas a alteração, disponibilidade
    e condições comerciais.
-   Confirmar o modelo/SKU completo, garantia, memória, discos,
    controladoras e fontes antes da aquisição.
-   RAID não substitui backup; realizar e documentar testes de
    restauração.
-   Anexar capturas do Packet Tracer e resultados de testes somente
    quando a configuração e os testes tiverem sido efetivamente
    realizados.

**Data de organização das referências:** 26/11/2026.

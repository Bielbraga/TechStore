# TECHSTORE SOLUTIONS — ETAPA 6: COMPARAÇÃO E DECISÃO

**Data da pesquisa:** 25/11/2026  
**Escopo:** comparação de duas alternativas para o Perfil Especializado (TI/Infraestrutura/NOC) e duas alternativas de servidor corporativo.  
**Critérios:** desempenho, compatibilidade, custo, consumo, garantia, manutenção e expansão.

> **Nota metodológica:** preços são referências públicas encontradas na pesquisa, não propostas comerciais vinculantes. Quando a oferta não informa todos os componentes, garantia ou configuração, isso é tratado como pendência. As notas de 1 a 5 são avaliação técnica qualitativa para este projeto, não benchmark universal.

---

## 1. Perfil Especializado — workstation para TI, Infraestrutura e NOC

### Necessidade do projeto

- **Quantidade:** 17 unidades.
- **Uso:** VMware Workstation, Zabbix, Grafana, Wireshark, ferramentas de diagnóstico, acesso remoto e múltiplas sessões/VMs.
- **Configuração-base aprovada anteriormente:** AMD Ryzen 7 7700, 32 GB DDR5, SSD NVMe 1 TB e NVIDIA RTX 4060 8 GB.
- **Observação:** a configuração do projeto prevê 32 GB. Ofertas encontradas com 16 GB não atendem integralmente ao requisito sem upgrade.

### Alternativas comparadas

| Critério | Opção A — AMD Ryzen 7 7700 | Opção B — Intel Core i7-14700F |
|---|---|---|
| CPU | 8 núcleos / 16 threads; boost até 5,3 GHz; TDP padrão 65 W | 20 núcleos (8 P + 12 E) / 28 threads; turbo até 5,4 GHz; potência turbo máxima 219 W |
| GPU | NVIDIA RTX 4060 8 GB (manter a GPU do projeto) | NVIDIA RTX 4060 8 GB (mesma classe de GPU) |
| Memória-alvo | 32 GB DDR5 (2×16 GB) | 32 GB DDR5 (2×16 GB) |
| SSD-alvo | NVMe 1 TB | NVMe 1 TB |
| Plataforma | AM5 + B650; ASUS TUF GAMING B650M-PLUS é compatível com Ryzen série 7000 e DDR5 | LGA1700 + placa-mãe B760/Z790 DDR5; validar modelo exato, BIOS, QVL e limites de potência |
| Desempenho | Bom desempenho multithread para VMs e ferramentas; menor contagem de núcleos | Maior capacidade de paralelismo; PassMark publicado indica cerca de 17% a mais em CPU Mark multithread que o Ryzen 7 7700, com single-thread próximo |
| Consumo / refrigeração | CPU de 65 W padrão; solução térmica mais simples | CPU pode atingir 219 W de potência turbo máxima; exige dimensionar cooler, VRM, fonte e airflow com mais cuidado |
| Expansão | Plataforma AM5; placa ASUS citada oferece 4 DIMMs DDR5, até 192 GB na página técnica consultada, e slots M.2 | Depende da placa LGA1700 selecionada; a plataforma e o modelo da placa devem ser congelados antes da compra |
| Preço público localizado | Oferta de PC Ryzen 7 7700 + RTX 4060 + 16 GB DDR5 + SSD 1 TB: **R$ 10.215,80** | Oferta de PC i7-14700F + RTX 4060 + 32 GB + SSD 1 TB: **R$ 12.470,00** |
| Limitação da oferta | Anúncio encontrado tem 16 GB, abaixo dos 32 GB exigidos; confirmar placa-mãe, fonte, gabinete, cooler e garantia | Anúncio não detalha marca/modelo de placa-mãe, fonte, gabinete, cooler ou garantia; confirmar se a RAM é DDR5 e a configuração completa |

### Avaliação qualitativa

| Critério | Opção A — Ryzen 7 7700 | Opção B — Core i7-14700F |
|---|---:|---:|
| Desempenho em multitarefa/VMs | 4/5 | 5/5 |
| Compatibilidade com a configuração documentada | 5/5 | 3/5 — exige nova validação de placa e plataforma |
| Custo de aquisição observado | 4/5* | 3/5* |
| Consumo e refrigeração | 5/5 | 3/5 |
| Garantia e manutenção | 3/5 — confirmar com o integrador | 3/5 — confirmar com o integrador |
| Expansão | 5/5 | 3/5 — depende da placa LGA1700 |
| **Total indicativo** | **26/30** | **20/30** |

\* A comparação de preço não é perfeitamente equivalente: a oferta AMD observada traz 16 GB, enquanto a Intel anuncia 32 GB. O custo final deve ser recalculado com 32 GB e componentes equivalentes nas duas opções.

### Decisão recomendada — Perfil Especializado

**Escolher a Opção A: AMD Ryzen 7 7700 + RTX 4060, com 32 GB DDR5 e SSD NVMe de 1 TB.**

Justificativa:
1. Preserva a plataforma AM5/B650 já documentada e validada no projeto.
2. O TDP padrão de 65 W favorece consumo e refrigeração mais simples que o limite turbo de 219 W do i7-14700.
3. O desempenho é suficiente como baseline para as ferramentas de monitoramento, diagnóstico e virtualização previstas, desde que o número e a memória das VMs sejam dimensionados.
4. A oferta pública identificada para Ryzen não atende aos 32 GB: exigir upgrade para 32 GB (preferencialmente 2×16 GB em kit validado) ou cotação equivalente antes da compra.

**Quando escolher a Opção B:** se testes de carga mostrarem que a quantidade de VMs simultâneas e o processamento paralelo justificam o ganho de CPU, e se o fornecedor entregar cooler, placa-mãe, fonte e garantia dimensionados para a potência máxima do i7.

---

## 2. Servidor corporativo — plataforma para Xeon Silver 4410Y

### Necessidade do projeto

Três servidores físicos, com papéis separados:
- **Principal:** Active Directory, DNS, DHCP, File Server, impressão e controle de usuários; 64 GB ECC; 4× SSD 2 TB em RAID 10.
- **Aplicações:** ERP, CRM, chamados e banco de dados; 128 GB ECC; 4× SSD 2 TB em RAID 10.
- **Backup:** backup diário/semanal, retenção e recuperação de desastres; 64 GB ECC; 8× HDD 4 TB em RAID 6.

O processador definido é Intel Xeon Silver 4410Y: 12 núcleos/24 threads, TDP 150 W, soquete FCLGA4677, DDR5 até 4000 MT/s e suporte a ECC. A configuração original Dell PowerEdge T350 não é adequada a esse processador; a plataforma deve ser compatível com Xeon Scalable de 4ª geração e DDR5 RDIMM.

### Alternativas comparadas

| Critério | Opção A — Dell PowerEdge T560 | Opção B — HPE ProLiant ML350 Gen11 |
|---|---|---|
| Formato | Torre | Torre 4U |
| CPU | A página de venda brasileira consultada anuncia Xeon Silver 4509Y; o T560 é a plataforma proposta para configurar o 4410Y, mas o SKU público encontrado não é o 4410Y | SKU HPE P53566-001 encontrado já anuncia Xeon Silver 4410Y |
| Memória no anúncio | 16 GB DDR5-5600 na oferta pública encontrada | 32 GB DDR5 Registered (1×32 GB) no SKU consultado |
| Armazenamento no anúncio | 2 TB HDD SATA hot-plug | O SKU consultado suporta 8 SFF; nenhum disco acompanha a configuração descrita |
| Controladora | Depende da configuração Dell cotada | HPE MR408i-o Gen11, 4 GB de cache, no SKU consultado |
| Energia | Configuração pública não permite confirmar redundância da fonte pretendida | SKU P53566-001: 800 W Flex Slot Platinum Hot Plug; ficha de outra variante 4410Y mostra opção 1000 W. Confirmar o SKU final |
| Gerenciamento | Confirmar pacote/licenças e configuração de gerenciamento no orçamento Dell | iLO 6; recursos avançados podem exigir licença |
| Garantia | Página brasileira anuncia 3 anos de assistência básica no local | HPE Store Brasil indica cobertura 3/3/3 no SKU consultado: 3 anos peças, mão de obra e atendimento no local |
| Preço público localizado | **R$ 44.999,00** para T560 com Xeon Silver 4509Y, 16 GB e HDD 2 TB — não é a configuração 4410Y/64–128 GB/RAID do projeto | **Sob consulta** na HPE Store Brasil para o SKU com 4410Y |
| Pendências | Cotar 4410Y, RDIMM DDR5, PERC, backplane, discos, fontes e garantia necessários | Cotar 64/128 GB RDIMM, discos, configuração de baias, RAID, fontes e licenças de gerenciamento |

### Avaliação qualitativa

| Critério | Opção A — Dell T560 | Opção B — HPE ML350 Gen11 |
|---|---:|---:|
| Desempenho / adequação ao Xeon 4410Y | 4/5 — plataforma adequada, SKU público localizado usa outro Xeon | 5/5 — SKU localizado já lista o 4410Y |
| Compatibilidade com o projeto | 4/5 — depende de configuração sob medida | 5/5 — CPU e memória DDR5 RDIMM aparecem no SKU |
| Custo de aquisição | 4/5 — preço público de entrada conhecido, mas não comparável à configuração final | 3/5 — preço depende de cotação |
| Consumo / eficiência | 4/5 — dimensionar conforme fontes e discos escolhidos | 4/5 — fonte 800 W Platinum no SKU consultado |
| Garantia e suporte | 4/5 — 3 anos assistência básica no local anunciados | 5/5 — 3/3/3 no SKU consultado |
| Manutenção e gerenciamento | 4/5 — validar controladora, iDRAC e suporte contratado | 5/5 — iLO 6 e controladora MR408i-o no SKU consultado |
| Expansão | 5/5 — opções de chassis e expansão dependem da configuração selecionada | 5/5 — opções de expansão Gen11; validar backplane e baias |
| **Total indicativo** | **29/35** | **32/35** |

### Decisão recomendada — Servidor

**Preferir a Opção B: HPE ProLiant ML350 Gen11**, condicionada à cotação formal e à confirmação de que a configuração final suporta os discos, RAID e memória definidos para cada função.

Justificativa:
1. O SKU pesquisado já identifica o Xeon Silver 4410Y e memória DDR5 Registered, reduzindo o risco de incompatibilidade de plataforma.
2. A oferta consultada inclui controladora HPE MR408i-o Gen11 e fonte hot-plug.
3. A garantia 3/3/3 e o iLO 6 são pontos positivos para operação e manutenção.
4. O preço não está público: a decisão financeira final depende de cotação HPE e comparação com Dell T560 configurado com o mesmo CPU, memória, discos, controladora e cobertura de suporte.

**Alternativa válida:** Dell PowerEdge T560, desde que a Dell emita proposta com Xeon Silver 4410Y, DDR5 RDIMM, PERC compatível com RAID 10/6, backplane e número correto de baias, discos enterprise e suporte local equivalente.

---

## 3. Comparativo consolidado e decisão

| Categoria | Opção A | Opção B | Escolha recomendada |
|---|---|---|---|
| Perfil Especializado | Ryzen 7 7700 + RTX 4060 | Core i7-14700F + RTX 4060 | **Opção A — Ryzen 7 7700** |
| Servidor | Dell PowerEdge T560 | HPE ProLiant ML350 Gen11 | **Opção B — HPE ML350 Gen11**, condicionada à cotação |

### Conclusão

A TechStore deve manter a workstation AMD Ryzen 7 7700 como padrão do Perfil Especializado, completar a memória para 32 GB e exigir especificação completa dos componentes do computador montado. Para os servidores, a plataforma HPE ML350 Gen11 é a alternativa tecnicamente mais diretamente alinhada ao Xeon Silver 4410Y pesquisado. O Dell T560 continua como alternativa competitiva, mas a oferta pública encontrada usa Xeon 4509Y e não pode ser comparada diretamente sem uma cotação configurada.

A decisão final de compra deve ocorrer somente após receber propostas equivalentes, contendo:
- SKU de cada componente e quantidade;
- preço unitário, subtotal, impostos, frete e prazo;
- garantia de peças, mão de obra e atendimento no local;
- configuração de RAM, discos, controladora, fontes e rede;
- licenças e serviços inclusos/excluídos;
- prazo de entrega e validade da proposta.

---

## 4. Fontes consultadas

### Perfil Especializado
- AMD — Ryzen 7 7700: https://www.amd.com/pt/products/processors/desktops/ryzen/7000-series/amd-ryzen-7-7700.html
- ASUS — TUF GAMING B650M-PLUS: https://www.asus.com/br/motherboards-components/motherboards/tuf-gaming/tuf-gaming-b650m-plus/techspec/
- Intel — Core i7-14700: https://www.intel.com/content/www/us/en/products/sku/236781/intel-core-i7-processor-14700-33m-cache-up-to-5-40-ghz/specifications.html
- PassMark — comparação Ryzen 7 7700 vs Core i7-14700: https://www.cpubenchmark.net/compare/5169vs5852/AMD-Ryzen-7-7700-vs-Intel-Core-i7-14700
- Oferta Ryzen 7 7700 / RTX 4060 encontrada em 23/11/2026: https://setupbarato.com.br/modelo/pcs/pc-stellarx-v-3x-rgb-ryzen7-7700-rtx4060-16gb-1tb--cmsotl363t9dcpo1edzokjksp

### Servidores
- Intel — Xeon Silver 4410Y: https://www.intel.com.br/content/www/br/pt/products/sku/232376/intel-xeon-silver-4410y-processor-30m-cache-2-00-ghz/specifications.html
- Dell Brasil — PowerEdge T560 (oferta pública localizada: R$ 44.999,00, Xeon 4509Y, 16 GB, HDD 2 TB, 3 anos assistência básica no local): https://www.dell.com/pt-br/shop/servidor-torre-rack-switches-e-storage/sr/servers
- HPE Store Brasil — ProLiant ML350 Gen11 com Xeon Silver 4410Y, SKU P53566-001: https://buy.hpe.com/br/pt/compute/tower-servers/proliant-ml300-servers/hpe-proliant-ml350-gen11-4410y-2-0ghz-12%E2%80%91core-1p-32gb%E2%80%91r-mr408i%E2%80%91o-8sff-800w-rps-server/p/p53566-001
- HPE — datasheet ML350 Gen11 com Xeon Silver 4410Y: https://www.hpe.com/psnow/generateDDS/HPE%20ProLiant%20ML350%20Gen11%204410Y%202.0GHz%2012-core%201P%2032GB-R%20MR408i-o%208SFF%201000W%20RPS%20Server%20data%20sheet-PSN1014731754HREN.pdf

**Limitação da pesquisa:** preço público, estoque, disponibilidade regional e termos de garantia podem mudar. Ofertas de desktops montados não substituem BOM detalhado nem homologação do fornecedor. Os servidores precisam de cotações equivalentes para uma decisão financeira definitiva.

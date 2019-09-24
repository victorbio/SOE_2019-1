**1. O que são sistemas embarcados?**
Define-se sistema embarcado como um sistema que realiza um conjunto de tarefas pré-definidas para um propósito específico em um dispositivo mecânico ou elétrico de escopo maior.

**2. O que são sistemas microprocesssados?**
Sistema microprocessado é um componente, geralmente no formato de circuito integrado,que é responsável pela execução das instruções e tarefas envolvidas no processamento de um computador. É a unidade central que executa as funções de cálculo e tomada de decisão através de lógicas sequenciais e combinacionais.

**3. Apresente aplicações de sistemas embarcados:**

	**(a) Para a indústria automotiva;**
	Controle automático de estabilidade, sistema de controle de tração, air bag, freios ABS, sistema de navegação.

	**(b) Para eletrodomésticos;**
	Interface com o usuário, controle de ativação por tempo, desligamento automático, segurança elétrica.

	**(c) Para automação industrial;**
	Manutenção do fluxo de fluídos para uma CNC, controle da velocidade de esteiras no processo de montagem, ajuste automático da transmissão em aplicações com motores, medição de parâmetros críticos.

**4. Cite arquiteturas possíveis e as diferenças entre elas.**
Das arquiteturas de hardware possíveis, têm-se os microcontroladores, GPPs, DSPs, FPGAs, ASICs, SoCs e MPSoCs. Os microcontroladores são utilizados principalmente em sistemas dedicados, já que possuem poder de processamento menor que os GPPs. Os GPPs são microprocessadores de propósito geral com alto poder de processamento, geralmente empregados em computadores e video-games. Já os DSPs (Digital Signal Processor) são desenvolvidos para ler e processar sinais analógicos, sendo otimizados para instruções de multiplicação-soma a fim de melhor executar a operação de convolução, que é muito utilizada na construção de filtros digitais. As FPGAs são circuitos integrados reprogramáveis que permitem o desenvolvedor escolher o tipo de hardware disponível através da programação. As ASICs se assemelham as FPGAs, porém não são reprogramáveis e são construídas para uma aplicação específica, sendo mais rápidas e consumindo menos energia que as FPGAs no geral. SoCs são circuitos integrados que integram CPU, memória, portas I/O e armazenamento secundário todosem um único substrato com tamanho extremamente reduzido, muito utilizados em celulares e computadores. MPSoCs são basicamente SoCs que contém múltiplos microprocessadores.

**5. Por que usamos o Raspberry Pi na disciplina, ao invés de outro system-on-chip?**
A Raspberry pi foi desenvolvida para se tornar um mini-computador funcional apenas com o uso de um cartão SD para o sistema operacional. Dessa forma, ela é uma placa de desenvolvimento mais simples para iniciantes, em contraste com a BeagleBone Black ou a PandaBoard. Outro fator que influencia na escolha da placa é seu preço quando comparado aos concorrentes, que se apresenta muito mais acessível.

# SISTEMAS OPERACIONAIS
Trabalho sobre chamadas de sistema da matéria de Sistemas Operacionais do 3º Período de Análise e Desenvolvimento de Sistemas 

# Chamadas:

DATE:
A chamada *date* retorna o tempo atual em segundos, e também printa a data( dia, mês e ano) e a hora. O código também faz as checagens básicas de erro e sucesso.

UPTIME:

A chamada *uptime* retorna o total de tempo que o sistema está ligado, ou seja a máquina. Ele pega as informações do sistema usando o *sysinfo* e faz as devidas conversões para poder retornar os dias em horas, minutos, segundos. O código também faz as checagens básicas de erro e sucesso.

LS:

A chamada *ls* abre o diretório atual, itera sobre ele e retorna, ou melhor, lista os nomes dos arquivos que aquele diretório possui. O código também faz as checagens básicas de erro e sucesso.

RM:

A chamada *rm* recebe um arquivo e em seguida remove-o. O código também faz as checagens básicas de erro e sucesso.

MV:

Essa chamada move um único arquivo usando uma função de renomear. Desta forma, ela pode mover e/ou mudar o nome do arquivo. O código também faz as checagens básicas de erro e sucesso.

CP:

A chamada *cp* abre um arquivo em específico, lê os conteúdos dele para depois copiá-lo para o destino e retorna uma mensagem de sucesso depois da leitura de todos os caracteres através de um loop. O código também faz as checagens básicas de erro e sucesso.

CAT:

A chamada *cat*, assim como *cp* abre um arquivo e lê os conteúdos dele. Entretanto, essa chamada mostra no terminal o conteúdo do arquivo, linha por linha. O código também faz as checagens básicas de erro e sucesso.

MKDIR:

A chamada *mkdir* de forma básica como está no código fonte, cria um diretório. O código realiza algumas verficações simples e printa mensagens de erro ou sucesso.

RMDIR:

Assim como a *ls*, a chamada *rmdir* abre um diretório, porém recebe argumentos sobre qual diretório o usuário quer abrir, logo em seguida remove ele.

CHMOD:

A chamada *chmod* altera as permissões de um arquivo recebido. Realiza algumas verificações de status e printa mensagens de erro ou sucesso.

CHOWN:

A chamada *chown*, diferentemente da *chmod* altera o proprietário do arquivo e não suas permissões. Também realiza as checagens de status e erro ou sucesso.

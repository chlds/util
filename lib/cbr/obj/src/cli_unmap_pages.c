/* **** Notes

Unmap all the pages implemented in a doubly linked list.

Remarks:
Based on a doubly linked list (i.e., not a circular linked list)
Along with C library
//*/


# define CBR

# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_unmap_pages(cli_spool_t(*argp))) {

/* **** DATA */
auto cli_rule_t *rule;
auto cli_page_t *page;
auto signed char *p;
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

page = (*(CLI_LEAD+(R(page,*argp))));
if(!page) return(0x00);

*(CLI_LEAD+(R(page,*argp))) = (R(s,*page));


rule = (R(rule,*page));
r = cli_init_rule(0x01,rule);
if(!r) {
r = cli_message(r,"<< Error at fn. cli_init_rule() \n");
return(0x00);
}
free(rule);
rule = (0x00);
R(rule,*page) = (rule);


p = (*(CLI_BASE+(R(base,*page))));
if(!p) {
//*
r = cli_message(0x00,"<< No memory block allocated to the current page.. \n");
return(0x00);
//*/
}

r = ct(p);
r = embed(r,p);
if(p) free(p);
p = (0x00);
*(CLI_BASE+(R(base,*page))) = (p);

//* temporarily disable..
r = cli_unmap_snapshots(&(R(history,*page)));
if(!r) {
r = cli_message(r,"<< Error at fn. cli_unmap_snapshots() \n");
// return(0x00);
}
else {
if(CLI_DBG) printf("%s %d %s \n","Unmapped",r,"snapshots");
}
//*/

free(page);
page = (0x00);

return(0x01+(cli_unmap_pages(argp)));
}

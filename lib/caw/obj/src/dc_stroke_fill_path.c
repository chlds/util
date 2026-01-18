# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl dc_stroke_fill_path(signed(argq/*abscissa*/),signed(argt/*ordinate*/),void(*args/*dc*/),signed char(*argp))) {
auto signed r;
if(!BeginPath(args)) return(0x00);
r = dc_out_beta(argq,argt,args,argp);
if(!EndPath(args)) return(0x00);
if(!StrokeAndFillPath(args)) return(0x00);
return(r);
}

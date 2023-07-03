signed(__cdecl sched_help(void));
signed(__cdecl sched_siesta(signed(arg/* minutes */),sched_t(*argp)));
signed(__cdecl sched_b(signed(arg/* local */),sched_t(*argp)));
signed(__cdecl init_sched(sched_t(*argp)));
signed(__cdecl agent_sched_rr(sched_t(*di),signed char(*si)));
signed(__cdecl agent_sched_r(sched_t(*di),signed char(*si)));
signed(__cdecl agent_sched(signed(argc),signed char(**argv),signed char(**envp)));

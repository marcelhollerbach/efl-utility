#define EFL_BETA_API_SUPPORT


#include <Eolian.h>

Eolian_State *state;

int main(int argc, char const *argv[])
{
  eolian_init();
  state = eolian_state_new();

  if (argc == 1)
    eolian_state_system_directory_add(state);
  else
    eolian_state_directory_add(state, argv[1]);

  Eina_Bool b = eolian_state_all_eo_files_parse(state);
  b |= eolian_state_all_eot_files_parse(state);

  if (!b)
    {
       fprintf(stderr, "eolian: could not parse files\n");
       return -1;
    }

  return 0;
}

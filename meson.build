project('efl-utility', 'c',
  version: '0.1',
)

executable('efl-check',
  'checks.c',
  dependencies: [dependency('eina'), dependency('eolian')],
  install: true,
)

install_data('efl-performance',
  install_mode: 'rwxr-xr-x',
  install_dir : 'bin'
)

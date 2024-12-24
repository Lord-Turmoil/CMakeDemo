# ====================================================================
# Dependencies
# ====================================================================

# define the list of vendors
set(vendors div mul)

# add all vendors with loop
foreach(vendor ${vendors})
    add_subdirectory(${vendor})
endforeach()

# sometimes we need to disable warnings for 3rd-party libraries
foreach(vendor ${vendors})
    c3_disable_warnings(${vendor})
endforeach()

# export the list of vendors
set(C3_VENDORS ${vendors} PARENT_SCOPE)

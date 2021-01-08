# User-defined types

**Enumerations** exist for modeling categorical concepts. They are used when all possible values are known at compile time.

**Plain-Old-Data Classes (PODs)** are simple containers for data, a sort of heterogeneous array of elements of potentially different types. **Class** or **Structure** are PODs if they don't contain *methods*.

**Class** and **Structure** are similar, the only difference is in access control. The members of Class are *private* by default, whereas the members of Structure are *public* by default.

**Union** stores all the data in one place (a memory block) and is potentially dangerous. Should be used only in the rarest cases.
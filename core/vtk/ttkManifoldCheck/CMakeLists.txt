ttk_add_vtk_library(ttkManifoldCheck
  SOURCES
    ttkManifoldCheck.cpp
  HEADERS
    ttkManifoldCheck.h
  LINK
    manifoldCheck
    ttkTriangulation
    )

/// \defgroup vtk vtk
/// \brief The Topology ToolKit - VTK wrapping code for the processing
/// packages.
/// @{
/// \ingroup vtk
/// \class ttkWrapper
/// \author Julien Tierny <julien.tierny@lip6.fr>
/// \date February 2016.
///

#pragma once

#include <vtkDataSetAlgorithm.h>
#include <vtkImageData.h>
#include <vtkPolyData.h>
#include <vtkUnstructuredGrid.h>

#include <Wrapper.h>
#include <ttkTriangulation.h>

#include <macro.h>

#include <ttkTriangulationFilterModule.h>

class TTKTRIANGULATIONFILTER_EXPORT ttkTriangulationFilter
  : public vtkDataSetAlgorithm,
    public ttk::Wrapper {

public:
  static ttkTriangulationFilter *New();

  vtkTypeMacro(ttkTriangulationFilter, vtkDataSetAlgorithm);

protected:
  ttkTriangulationFilter();
  ~ttkTriangulationFilter() override {};

  int RequestData(vtkInformation *request,
                  vtkInformationVector **inputVector,
                  vtkInformationVector *outputVector) override;

  int RequestDataObject(vtkInformation *request,
                        vtkInformationVector **inputVector,
                        vtkInformationVector *outputVector) override;

private:
  bool needsToAbort() override;

  int updateProgress(const float &progress) override;
};

/// @}

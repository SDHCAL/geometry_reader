#ifndef GEOMETRY_READER_H
#define GEOMETRY_READER_H

#include <nlohmann/json_fwd.hpp>
#include <memory>

class GeometryReader
{
public:
  
private:
  std::unique_ptr<nlohmann::json> m_Json{nullptr};
};

#endif

/** Copyright 2020 Alibaba Group Holding Limited.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "src/predefine.h"
// GRIN headers
#include "property/propertylist.h"

#ifdef GRIN_WITH_VERTEX_PROPERTY
GRIN_VERTEX_PROPERTY_LIST grin_get_vertex_property_list_by_type(
    GRIN_GRAPH g, GRIN_VERTEX_TYPE vtype) {
  auto _g = static_cast<GRIN_GRAPH_T*>(g);
  if (vtype >= _g->GetVertexTypeNum())
    return GRIN_NULL_VERTEX_PROPERTY_LIST;
  auto vpl = new GRIN_VERTEX_PROPERTY_LIST_T();
  auto n = _g->GetVertexPropertyNum(vtype);
  for (auto i = 0; i < n; ++i) {
    auto vp =
        DEMO_STORAGE_NAMESPACE::generate_gid_from_type_id_and_id(vtype, i);
    vpl->push_back(vp);
  }
  return vpl;
}

size_t grin_get_vertex_property_list_size(GRIN_GRAPH g,
                                          GRIN_VERTEX_PROPERTY_LIST vpl) {
  auto _vpl = static_cast<GRIN_VERTEX_PROPERTY_LIST_T*>(vpl);
  return _vpl->size();
}

GRIN_VERTEX_PROPERTY grin_get_vertex_property_from_list(
    GRIN_GRAPH g, GRIN_VERTEX_PROPERTY_LIST vpl, size_t idx) {
  auto _vpl = static_cast<GRIN_VERTEX_PROPERTY_LIST_T*>(vpl);
  if (idx >= _vpl->size())
    return GRIN_NULL_VERTEX_PROPERTY;
  return (*_vpl)[idx];
}

GRIN_VERTEX_PROPERTY_LIST grin_create_vertex_property_list(GRIN_GRAPH g) {
  return new GRIN_VERTEX_PROPERTY_LIST_T();
}

void grin_destroy_vertex_property_list(GRIN_GRAPH g,
                                       GRIN_VERTEX_PROPERTY_LIST vpl) {
  auto _vpl = static_cast<GRIN_VERTEX_PROPERTY_LIST_T*>(vpl);
  delete _vpl;
}

bool grin_insert_vertex_property_to_list(GRIN_GRAPH g,
                                         GRIN_VERTEX_PROPERTY_LIST vpl,
                                         GRIN_VERTEX_PROPERTY vp) {
  auto _vpl = static_cast<GRIN_VERTEX_PROPERTY_LIST_T*>(vpl);
  _vpl->push_back(vp);
  return true;
}
#endif

#ifdef GRIN_TRAIT_NATURAL_ID_FOR_VERTEX_PROPERTY
GRIN_VERTEX_PROPERTY grin_get_vertex_property_by_id(
    GRIN_GRAPH g, GRIN_VERTEX_TYPE vtype, GRIN_VERTEX_PROPERTY_ID id) {
  auto _g = static_cast<GRIN_GRAPH_T*>(g);
  if (vtype >= 0 & vtype < _g->GetVertexTypeNum() && id >= 0 &&
      id < _g->GetVertexPropertyNum(vtype)) {
    return DEMO_STORAGE_NAMESPACE::generate_gid_from_type_id_and_id(vtype, id);
  } else {
    return GRIN_NULL_VERTEX_PROPERTY;
  }
}

GRIN_VERTEX_PROPERTY_ID grin_get_vertex_property_id(GRIN_GRAPH g,
                                                    GRIN_VERTEX_TYPE vtype,
                                                    GRIN_VERTEX_PROPERTY vp) {
  return DEMO_STORAGE_NAMESPACE::get_id_from_gid(vp);
}
#endif

#ifdef GRIN_WITH_EDGE_PROPERTY
GRIN_EDGE_PROPERTY_LIST grin_get_edge_property_list_by_type(
    GRIN_GRAPH g, GRIN_EDGE_TYPE etype) {
  auto _g = static_cast<GRIN_GRAPH_T*>(g);
  if (etype >= _g->GetEdgeTypeNum())
    return GRIN_NULL_VERTEX_PROPERTY_LIST;
  auto epl = new GRIN_EDGE_PROPERTY_LIST_T();
  auto n = _g->GetEdgePropertyNum(etype);
  for (auto i = 0; i < n; ++i) {
    auto ep =
        DEMO_STORAGE_NAMESPACE::generate_gid_from_type_id_and_id(etype, i);
    epl->push_back(ep);
  }
  return epl;
}

size_t grin_get_edge_property_list_size(GRIN_GRAPH g,
                                        GRIN_EDGE_PROPERTY_LIST epl) {
  auto _epl = static_cast<GRIN_EDGE_PROPERTY_LIST_T*>(epl);
  return _epl->size();
}

GRIN_EDGE_PROPERTY grin_get_edge_property_from_list(GRIN_GRAPH g,
                                                    GRIN_EDGE_PROPERTY_LIST epl,
                                                    size_t idx) {
  auto _epl = static_cast<GRIN_EDGE_PROPERTY_LIST_T*>(epl);
  if (idx >= _epl->size())
    return GRIN_NULL_EDGE_PROPERTY;
  return (*_epl)[idx];
}

GRIN_EDGE_PROPERTY_LIST grin_create_edge_property_list(GRIN_GRAPH g) {
  return new GRIN_EDGE_PROPERTY_LIST_T();
}

void grin_destroy_edge_property_list(GRIN_GRAPH g,
                                     GRIN_EDGE_PROPERTY_LIST epl) {
  auto _epl = static_cast<GRIN_EDGE_PROPERTY_LIST_T*>(epl);
  delete _epl;
}

bool grin_insert_edge_property_to_list(GRIN_GRAPH g,
                                       GRIN_EDGE_PROPERTY_LIST epl,
                                       GRIN_EDGE_PROPERTY ep) {
  auto _epl = static_cast<GRIN_EDGE_PROPERTY_LIST_T*>(epl);
  _epl->push_back(ep);
  return true;
}
#endif

#ifdef GRIN_TRAIT_NATURAL_ID_FOR_EDGE_PROPERTY
GRIN_EDGE_PROPERTY grin_get_edge_property_by_id(GRIN_GRAPH g,
                                                GRIN_EDGE_TYPE etype,
                                                GRIN_EDGE_PROPERTY_ID id) {
  auto _g = static_cast<GRIN_GRAPH_T*>(g);
  if (etype >= 0 && etype < _g->GetEdgeTypeNum() && id >= 0 &&
      id < _g->GetEdgePropertyNum(etype)) {
    return DEMO_STORAGE_NAMESPACE::generate_gid_from_type_id_and_id(etype, id);
  } else {
    return GRIN_NULL_EDGE_PROPERTY;
  }
}

GRIN_EDGE_PROPERTY_ID grin_get_edge_property_id(GRIN_GRAPH g,
                                                GRIN_EDGE_TYPE etype,
                                                GRIN_EDGE_PROPERTY ep) {
  return DEMO_STORAGE_NAMESPACE::get_id_from_gid(ep);
}
#endif

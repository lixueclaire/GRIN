/* automatically generated by rust-bindgen 0.64.0 */

pub const true_: u32 = 1;
pub const false_: u32 = 0;
pub const __bool_true_false_are_defined: u32 = 1;
pub const GRIN_NULL_VERTEX_REF: i32 = -1;
pub type wchar_t = ::std::os::raw::c_int;
pub type max_align_t = u128;
pub type GRIN_GRAPH = *mut ::std::os::raw::c_void;
pub type GRIN_VERTEX = *mut ::std::os::raw::c_void;
pub type GRIN_EDGE = *mut ::std::os::raw::c_void;
pub type GRIN_VERTEX_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_VERTEX_LIST_ITERATOR = *mut ::std::os::raw::c_void;
pub type GRIN_ADJACENT_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_ADJACENT_LIST_ITERATOR = *mut ::std::os::raw::c_void;
pub type GRIN_EDGE_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_EDGE_LIST_ITERATOR = *mut ::std::os::raw::c_void;
pub type GRIN_PARTITIONED_GRAPH = *mut ::std::os::raw::c_void;
pub type GRIN_PARTITION = ::std::os::raw::c_uint;
pub type GRIN_PARTITION_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_PARTITION_ID = ::std::os::raw::c_uint;
pub type GRIN_VERTEX_REF = ::std::os::raw::c_longlong;
pub type GRIN_VERTEX_TYPE = ::std::os::raw::c_uint;
pub type GRIN_VERTEX_TYPE_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_VERTEX_PROPERTY = ::std::os::raw::c_uint;
pub type GRIN_VERTEX_PROPERTY_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_EDGE_TYPE = ::std::os::raw::c_uint;
pub type GRIN_EDGE_TYPE_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_EDGE_PROPERTY = ::std::os::raw::c_uint;
pub type GRIN_EDGE_PROPERTY_LIST = *mut ::std::os::raw::c_void;
pub type GRIN_ROW = *mut ::std::os::raw::c_void;
extern "C" {
    #[doc = " GRIN_FEATURES_ENABLE_GRAPHAR\n RUST_KEEP pub const GRIN_NULL_DATATYPE: GrinDatatype = GRIN_DATATYPE_UNDEFINED;\n RUST_KEEP pub const GRIN_NULL_GRAPH: GrinGraph = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_VERTEX: GrinVertex = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_EDGE: GrinEdge = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_VERTEX_LIST: GrinVertexList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_VERTEX_LIST_ITERATOR: GrinVertexListIterator = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_ADJACENT_LIST: GrinAdjacentList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_ADJACENT_LIST_ITERATOR: GrinAdjacentListIterator = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_EDGE_LIST: GrinEdgeList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_EDGE_LIST_ITERATOR: GrinEdgeListIterator = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_PARTITIONED_GRAPH: GrinPartitionedGraph = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_PARTITION: GrinPartition = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_PARTITION_LIST: GrinPartitionList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_PARTITION_ID: GrinPartitionId = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_VERTEX_REF: GrinVertexRef = -1;\n RUST_KEEP pub const GRIN_NULL_VERTEX_TYPE: GrinVertexType = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_VERTEX_TYPE_LIST: GrinVertexTypeList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_VERTEX_PROPERTY: GrinVertexProperty = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_VERTEX_PROPERTY_LIST: GrinVertexPropertyList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_VERTEX_TYPE_ID: GrinVertexTypeId = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_VERTEX_PROPERTY_ID: GrinVertexPropertyId = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_EDGE_TYPE: GrinEdgeType = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_EDGE_TYPE_LIST: GrinEdgeTypeList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_EDGE_PROPERTY: GrinEdgeProperty = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_EDGE_PROPERTY_LIST: GrinEdgePropertyList = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_EDGE_TYPE_ID: GrinEdgeTypeId = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_EDGE_PROPERTY_ID: GrinEdgePropertyId = u32::MAX;\n RUST_KEEP pub const GRIN_NULL_ROW: GrinRow = std::ptr::null_mut();\n RUST_KEEP pub const GRIN_NULL_SIZE: u32 = u32::MAX;"]
    pub static mut __rust_keep_grin_null: ::std::os::raw::c_int;
}

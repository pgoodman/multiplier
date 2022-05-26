// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#ifndef MX_VISIT_BOOL
#  define MX_VISIT_BOOL(...)
#endif
#ifndef MX_VISIT_INT
#  define MX_VISIT_INT(...)
#endif
#ifndef MX_VISIT_ENUM
#  define MX_VISIT_ENUM(...)
#endif
#ifndef MX_VISIT_TEXT
#  define MX_VISIT_TEXT(...)
#endif
#ifndef MX_VISIT_PATH
#  define MX_VISIT_PATH(...)
#endif
#ifndef MX_VISIT_OPTIONAL_BOOL
#  define MX_VISIT_OPTIONAL_BOOL(...)
#endif
#ifndef MX_VISIT_OPTIONAL_INT
#  define MX_VISIT_OPTIONAL_INT(...)
#endif
#ifndef MX_VISIT_OPTIONAL_ENUM
#  define MX_VISIT_OPTIONAL_ENUM(...)
#endif
#ifndef MX_VISIT_OPTIONAL_TEXT
#  define MX_VISIT_OPTIONAL_TEXT(...)
#endif
#ifndef MX_VISIT_OPTIONAL_PATH
#  define MX_VISIT_OPTIONAL_PATH(...)
#endif
#ifndef MX_VISIT_BOOL_LIST
#  define MX_VISIT_BOOL_LIST(...)
#endif
#ifndef MX_VISIT_INT_LIST
#  define MX_VISIT_INT_LIST(...)
#endif
#ifndef MX_VISIT_ENUM_LIST
#  define MX_VISIT_ENUM_LIST(...)
#endif
#ifndef MX_VISIT_TEXT_LIST
#  define MX_VISIT_TEXT_LIST(...)
#endif
#ifndef MX_VISIT_PATH_LIST
#  define MX_VISIT_PATH_LIST(...)
#endif
#ifndef MX_VISIT_OPTIONAL_BOOL_LIST
#  define MX_VISIT_OPTIONAL_BOOL_LIST(...)
#endif
#ifndef MX_VISIT_OPTIONAL_INT_LIST
#  define MX_VISIT_OPTIONAL_INT_LIST(...)
#endif
#ifndef MX_VISIT_OPTIONAL_ENUM_LIST
#  define MX_VISIT_OPTIONAL_ENUM_LIST(...)
#endif
#ifndef MX_VISIT_OPTIONAL_TEXT_LIST
#  define MX_VISIT_OPTIONAL_TEXT_LIST(...)
#endif
#ifndef MX_VISIT_OPTIONAL_PATH_LIST
#  define MX_VISIT_OPTIONAL_PATH_LIST(...)
#endif
#ifndef MX_VISIT_ENTITY
#  define MX_VISIT_ENTITY(...)
#endif
#ifndef MX_VISIT_OPTIONAL_ENTITY
#  define MX_VISIT_OPTIONAL_ENTITY(...)
#endif
#ifndef MX_VISIT_ENTITY_LIST
#  define MX_VISIT_ENTITY_LIST(...)
#endif
#ifndef MX_VISIT_OPTIONAL_ENTITY_LIST
#  define MX_VISIT_OPTIONAL_ENTITY_LIST(...)
#endif
#ifndef MX_VISIT_DECL_CONTEXT
#  define MX_VISIT_DECL_CONTEXT(...)
#endif
#ifndef MX_VISIT_PSEUDO
#  define MX_VISIT_PSEUDO(...)
#endif
#ifndef MX_VISIT_OPTIONAL_PSEUDO
#  define MX_VISIT_OPTIONAL_PSEUDO(...)
#endif
#ifndef MX_VISIT_OPTIONAL_PSEUDO_LIST
#  define MX_VISIT_OPTIONAL_PSEUDO_LIST(...)
#endif
#ifndef MX_VISIT_PSEUDO_LIST
#  define MX_VISIT_PSEUDO_LIST(...)
#endif
#ifndef MX_VISIT_BASE
#  define MX_VISIT_BASE(...)
#endif
#ifndef MX_VISIT_DECL_LINK
#  define MX_VISIT_DECL_LINK(...)
#endif
#ifndef MX_VISIT_STMT_LINK
#  define MX_VISIT_STMT_LINK(...)
#endif
#ifndef MX_BEGIN_VISIT_DECL
#  define MX_BEGIN_VISIT_DECL(...)
#endif
#ifndef MX_BEGIN_VISIT_STMT
#  define MX_BEGIN_VISIT_STMT(...)
#endif
#ifndef MX_BEGIN_VISIT_TYPE
#  define MX_BEGIN_VISIT_TYPE(...)
#endif
#ifndef MX_BEGIN_VISIT_ABSTRACT_DECL
#  define MX_BEGIN_VISIT_ABSTRACT_DECL MX_BEGIN_VISIT_DECL
#endif
#ifndef MX_BEGIN_VISIT_ABSTRACT_STMT
#  define MX_BEGIN_VISIT_ABSTRACT_STMT MX_BEGIN_VISIT_STMT
#endif
#ifndef MX_BEGIN_VISIT_ABSTRACT_TYPE
#  define MX_BEGIN_VISIT_ABSTRACT_TYPE MX_BEGIN_VISIT_TYPE
#endif
#ifndef MX_BEGIN_VISIT_PSEUDO
#  define MX_BEGIN_VISIT_PSEUDO(...)
#endif
#ifndef MX_END_VISIT_DECL
#  define MX_END_VISIT_DECL(...)
#endif
#ifndef MX_END_VISIT_STMT
#  define MX_END_VISIT_STMT(...)
#endif
#ifndef MX_END_VISIT_TYPE
#  define MX_END_VISIT_TYPE(...)
#endif
#ifndef MX_END_VISIT_PSEUDO
#  define MX_END_VISIT_PSEUDO(...)
#endif
#ifndef MX_VISIT_PSEUDO_KIND
#  define MX_VISIT_PSEUDO_KIND(...)
#endif

#ifndef MX_ENTER_VISIT_TemplateParameterList
#  define MX_ENTER_VISIT_TemplateParameterList
#endif
#ifndef MX_EXIT_VISIT_TemplateParameterList
#  define MX_EXIT_VISIT_TemplateParameterList
#endif

MX_BEGIN_VISIT_PSEUDO(TemplateParameterList)
  MX_ENTER_VISIT_TemplateParameterList
  MX_VISIT_PSEUDO_KIND(TemplateParameterList, getVal0, setVal0)
  MX_VISIT_INT(TemplateParameterList, num_parameters, getVal1, setVal1, initVal1, NumParameters, unsigned, NthPseudo)
  MX_VISIT_INT(TemplateParameterList, num_required_parameters, getVal2, setVal2, initVal2, NumRequiredParameters, unsigned, NthPseudo)
  MX_VISIT_INT(TemplateParameterList, depth, getVal3, setVal3, initVal3, Depth, unsigned, NthPseudo)
  MX_VISIT_BOOL(TemplateParameterList, has_unexpanded_parameter_pack, getVal4, setVal4, initVal4, HasUnexpandedParameterPack, bool, NthPseudo)
  MX_VISIT_BOOL(TemplateParameterList, has_parameter_pack, getVal5, setVal5, initVal5, HasParameterPack, bool, NthPseudo)
  MX_VISIT_OPTIONAL_ENTITY(TemplateParameterList, requires_clause, getVal6, setVal6, initVal6, RequiresClause, Expr, NthPseudo, StmtUseSelector::REQUIRES_CLAUSE)
  MX_VISIT_ENTITY(TemplateParameterList, template_keyword_token, getVal8, setVal8, initVal8, TemplateKeywordToken, Token, NthPseudo, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_ENTITY(TemplateParameterList, left_angle_token, getVal9, setVal9, initVal9, LeftAngleToken, Token, NthPseudo, TokenUseSelector::LEFT_ANGLE_TOKEN)
  MX_VISIT_ENTITY(TemplateParameterList, right_angle_token, getVal10, setVal10, initVal10, RightAngleToken, Token, NthPseudo, TokenUseSelector::RIGHT_ANGLE_TOKEN)
  MX_VISIT_ENTITY_LIST(TemplateParameterList, parameters, getVal13, setVal13, initVal13, Parameters, NamedDecl, NthPseudo)
  MX_EXIT_VISIT_TemplateParameterList
MX_END_VISIT_PSEUDO(TemplateParameterList)

#ifndef MX_ENTER_VISIT_TemplateArgument
#  define MX_ENTER_VISIT_TemplateArgument
#endif
#ifndef MX_EXIT_VISIT_TemplateArgument
#  define MX_EXIT_VISIT_TemplateArgument
#endif

MX_BEGIN_VISIT_PSEUDO(TemplateArgument)
  MX_ENTER_VISIT_TemplateArgument
  MX_VISIT_PSEUDO_KIND(TemplateArgument, getVal0, setVal0)
  MX_VISIT_ENUM(TemplateArgument, kind, getVal14, setVal14, initVal14, Kind, TemplateArgumentKind, NthPseudo)
  MX_VISIT_BOOL(TemplateArgument, is_null, getVal4, setVal4, initVal4, IsNull, bool, NthPseudo)
  MX_VISIT_BOOL(TemplateArgument, is_dependent, getVal5, setVal5, initVal5, IsDependent, bool, NthPseudo)
  MX_VISIT_BOOL(TemplateArgument, is_instantiation_dependent, getVal7, setVal7, initVal7, IsInstantiationDependent, bool, NthPseudo)
  MX_VISIT_BOOL(TemplateArgument, contains_unexpanded_parameter_pack, getVal15, setVal15, initVal15, ContainsUnexpandedParameterPack, bool, NthPseudo)
  MX_VISIT_BOOL(TemplateArgument, is_pack_expansion, getVal16, setVal16, initVal16, IsPackExpansion, bool, NthPseudo)
  MX_VISIT_OPTIONAL_ENTITY(TemplateArgument, as_declaration, getVal6, setVal6, initVal6, AsDeclaration, ValueDecl, NthPseudo, DeclUseSelector::AS_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(TemplateArgument, as_type, getVal8, setVal8, initVal8, AsType, Type, NthPseudo, TypeUseSelector::AS_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(TemplateArgument, parameter_type_for_declaration, getVal9, setVal9, initVal9, ParameterTypeForDeclaration, Type, NthPseudo, TypeUseSelector::PARAMETER_TYPE_FOR_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(TemplateArgument, null_pointer_type, getVal10, setVal10, initVal10, NullPointerType, Type, NthPseudo, TypeUseSelector::NULL_POINTER_TYPE)
  MX_EXIT_VISIT_TemplateArgument
MX_END_VISIT_PSEUDO(TemplateArgument)

#ifndef MX_ENTER_VISIT_CXXBaseSpecifier
#  define MX_ENTER_VISIT_CXXBaseSpecifier
#endif
#ifndef MX_EXIT_VISIT_CXXBaseSpecifier
#  define MX_EXIT_VISIT_CXXBaseSpecifier
#endif

MX_BEGIN_VISIT_PSEUDO(CXXBaseSpecifier)
  MX_ENTER_VISIT_CXXBaseSpecifier
  MX_VISIT_PSEUDO_KIND(CXXBaseSpecifier, getVal0, setVal0)
  MX_VISIT_ENTITY(CXXBaseSpecifier, base_type_token, getVal9, setVal9, initVal9, BaseTypeToken, Token, NthPseudo, TokenUseSelector::BASE_TYPE_TOKEN)
  MX_VISIT_BOOL(CXXBaseSpecifier, is_virtual, getVal4, setVal4, initVal4, IsVirtual, bool, NthPseudo)
  MX_VISIT_ENUM(CXXBaseSpecifier, base_kind, getVal14, setVal14, initVal14, BaseKind, TagTypeKind, NthPseudo)
  MX_VISIT_BOOL(CXXBaseSpecifier, is_pack_expansion, getVal5, setVal5, initVal5, IsPackExpansion, bool, NthPseudo)
  MX_VISIT_BOOL(CXXBaseSpecifier, constructors_are_inherited, getVal7, setVal7, initVal7, ConstructorsAreInherited, bool, NthPseudo)
  MX_VISIT_OPTIONAL_ENTITY(CXXBaseSpecifier, ellipsis_token, getVal10, setVal10, initVal10, EllipsisToken, Token, NthPseudo, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_ENUM(CXXBaseSpecifier, semantic_access_specifier, getVal21, setVal21, initVal21, SemanticAccessSpecifier, AccessSpecifier, NthPseudo)
  MX_VISIT_ENUM(CXXBaseSpecifier, lexical_access_specifier, getVal22, setVal22, initVal22, LexicalAccessSpecifier, AccessSpecifier, NthPseudo)
  MX_VISIT_ENTITY(CXXBaseSpecifier, base_type, getVal11, setVal11, initVal11, BaseType, Type, NthPseudo, TypeUseSelector::BASE_TYPE)
  MX_EXIT_VISIT_CXXBaseSpecifier
MX_END_VISIT_PSEUDO(CXXBaseSpecifier)

#ifndef MX_ENTER_VISIT_Type
#  define MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_Type
#  define MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(Type)
  MX_ENTER_VISIT_Type
  MX_VISIT_BOOL(Type, is_qualified, getVal0, setVal0, initVal0, IsQualified, bool, NthType)
  MX_VISIT_ENTITY(Type, unqualified_type, getVal1, setVal1, initVal1, UnqualifiedType, Type, NthType, TypeUseSelector::UNQUALIFIED_TYPE)
  MX_VISIT_BOOL(Type, accepts_obj_c_type_parameters, getVal2, setVal2, initVal2, AcceptsObjCTypeParameters, bool, NthType)
  MX_VISIT_BOOL(Type, can_decay_to_pointer_type, getVal3, setVal3, initVal3, CanDecayToPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, can_have_nullability, getVal4, setVal4, initVal4, CanHaveNullability, bool, NthType)
  MX_VISIT_BOOL(Type, contains_errors, getVal5, setVal5, initVal5, ContainsErrors, bool, NthType)
  MX_VISIT_BOOL(Type, contains_unexpanded_parameter_pack, getVal6, setVal6, initVal6, ContainsUnexpandedParameterPack, bool, NthType)
  MX_VISIT_OPTIONAL_ENTITY(Type, array_element_type_no_type_qualified, getVal7, setVal7, initVal7, ArrayElementTypeNoTypeQualified, Type, NthType, TypeUseSelector::ARRAY_ELEMENT_TYPE_NO_TYPE_QUALIFIED)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_cxx_record_declaration, getVal9, setVal9, initVal9, AsCXXRecordDeclaration, CXXRecordDecl, NthType, DeclUseSelector::AS_CXX_RECORD_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_complex_integer_type, getVal11, setVal11, initVal11, AsComplexIntegerType, ComplexType, NthType, TypeUseSelector::AS_COMPLEX_INTEGER_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_obj_c_interface_pointer_type, getVal13, setVal13, initVal13, AsObjCInterfacePointerType, ObjCObjectPointerType, NthType, TypeUseSelector::AS_OBJ_C_INTERFACE_POINTER_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_obj_c_interface_type, getVal15, setVal15, initVal15, AsObjCInterfaceType, ObjCObjectType, NthType, TypeUseSelector::AS_OBJ_C_INTERFACE_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_obj_c_qualified_class_type, getVal17, setVal17, initVal17, AsObjCQualifiedClassType, ObjCObjectPointerType, NthType, TypeUseSelector::AS_OBJ_C_QUALIFIED_CLASS_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_obj_c_qualified_id_type, getVal19, setVal19, initVal19, AsObjCQualifiedIdType, ObjCObjectPointerType, NthType, TypeUseSelector::AS_OBJ_C_QUALIFIED_ID_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_obj_c_qualified_interface_type, getVal21, setVal21, initVal21, AsObjCQualifiedInterfaceType, ObjCObjectType, NthType, TypeUseSelector::AS_OBJ_C_QUALIFIED_INTERFACE_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_placeholder_type, getVal23, setVal23, initVal23, AsPlaceholderType, BuiltinType, NthType, TypeUseSelector::AS_PLACEHOLDER_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_record_declaration, getVal25, setVal25, initVal25, AsRecordDeclaration, RecordDecl, NthType, DeclUseSelector::AS_RECORD_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_structure_type, getVal27, setVal27, initVal27, AsStructureType, RecordType, NthType, TypeUseSelector::AS_STRUCTURE_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_tag_declaration, getVal29, setVal29, initVal29, AsTagDeclaration, TagDecl, NthType, DeclUseSelector::AS_TAG_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(Type, as_union_type, getVal31, setVal31, initVal31, AsUnionType, RecordType, NthType, TypeUseSelector::AS_UNION_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, contained_auto_type, getVal33, setVal33, initVal33, ContainedAutoType, AutoType, NthType, TypeUseSelector::CONTAINED_AUTO_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, contained_deduced_type, getVal35, setVal35, initVal35, ContainedDeducedType, DeducedType, NthType, TypeUseSelector::CONTAINED_DEDUCED_TYPE)
  MX_VISIT_ENUM(Type, linkage, getVal37, setVal37, initVal37, Linkage, Linkage, NthType)
  MX_VISIT_ENTITY(Type, locally_unqualified_single_step_desugared_type, getVal38, setVal38, initVal38, LocallyUnqualifiedSingleStepDesugaredType, Type, NthType, TypeUseSelector::LOCALLY_UNQUALIFIED_SINGLE_STEP_DESUGARED_TYPE)
  MX_VISIT_OPTIONAL_ENUM(Type, nullability, getVal39, setVal39, initVal39, Nullability, NullabilityKind, NthType)
  MX_VISIT_OPTIONAL_ENTITY(Type, pointee_cxx_record_declaration, getVal41, setVal41, initVal41, PointeeCXXRecordDeclaration, CXXRecordDecl, NthType, DeclUseSelector::POINTEE_CXX_RECORD_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(Type, pointee_or_array_element_type, getVal43, setVal43, initVal43, PointeeOrArrayElementType, Type, NthType, TypeUseSelector::POINTEE_OR_ARRAY_ELEMENT_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(Type, pointee_type, getVal45, setVal45, initVal45, PointeeType, Type, NthType, TypeUseSelector::POINTEE_TYPE)
  MX_VISIT_OPTIONAL_ENUM(Type, scalar_type_kind, getVal47, setVal47, initVal47, ScalarTypeKind, TypeScalarTypeKind, NthType)
  MX_VISIT_OPTIONAL_ENTITY(Type, sve_element_type, getVal49, setVal49, initVal49, SveElementType, Type, NthType, TypeUseSelector::SVE_ELEMENT_TYPE)
  MX_VISIT_ENUM(Type, kind, getVal51, setVal51, initVal51, Kind, TypeKind, NthType)
  MX_VISIT_ENTITY(Type, unqualified_desugared_type, getVal52, setVal52, initVal52, UnqualifiedDesugaredType, Type, NthType, TypeUseSelector::UNQUALIFIED_DESUGARED_TYPE)
  MX_VISIT_ENUM(Type, visibility, getVal53, setVal53, initVal53, Visibility, Visibility, NthType)
  MX_VISIT_BOOL(Type, has_auto_for_trailing_return_type, getVal54, setVal54, initVal54, HasAutoForTrailingReturnType, bool, NthType)
  MX_VISIT_BOOL(Type, has_floating_representation, getVal55, setVal55, initVal55, HasFloatingRepresentation, bool, NthType)
  MX_VISIT_BOOL(Type, has_integer_representation, getVal56, setVal56, initVal56, HasIntegerRepresentation, bool, NthType)
  MX_VISIT_BOOL(Type, has_obj_c_pointer_representation, getVal57, setVal57, initVal57, HasObjCPointerRepresentation, bool, NthType)
  MX_VISIT_BOOL(Type, has_pointer_representation, getVal58, setVal58, initVal58, HasPointerRepresentation, bool, NthType)
  MX_VISIT_BOOL(Type, has_signed_integer_representation, getVal59, setVal59, initVal59, HasSignedIntegerRepresentation, bool, NthType)
  MX_VISIT_BOOL(Type, has_sized_vla_type, getVal60, setVal60, initVal60, HasSizedVLAType, bool, NthType)
  MX_VISIT_BOOL(Type, has_unnamed_or_local_type, getVal61, setVal61, initVal61, HasUnnamedOrLocalType, bool, NthType)
  MX_VISIT_BOOL(Type, has_unsigned_integer_representation, getVal62, setVal62, initVal62, HasUnsignedIntegerRepresentation, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(Type, is_aggregate_type, getVal63, setVal63, initVal63, IsAggregateType, bool, NthType)
  MX_VISIT_BOOL(Type, is_align_value_t, getVal65, setVal65, initVal65, IsAlignValueT, bool, NthType)
  MX_VISIT_BOOL(Type, is_any_character_type, getVal66, setVal66, initVal66, IsAnyCharacterType, bool, NthType)
  MX_VISIT_BOOL(Type, is_any_complex_type, getVal67, setVal67, initVal67, IsAnyComplexType, bool, NthType)
  MX_VISIT_BOOL(Type, is_any_pointer_type, getVal68, setVal68, initVal68, IsAnyPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_arithmetic_type, getVal69, setVal69, initVal69, IsArithmeticType, bool, NthType)
  MX_VISIT_BOOL(Type, is_array_type, getVal70, setVal70, initVal70, IsArrayType, bool, NthType)
  MX_VISIT_BOOL(Type, is_atomic_type, getVal71, setVal71, initVal71, IsAtomicType, bool, NthType)
  MX_VISIT_BOOL(Type, is_b_float16_type, getVal72, setVal72, initVal72, IsBFloat16Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_bit_int_type, getVal73, setVal73, initVal73, IsBitIntType, bool, NthType)
  MX_VISIT_BOOL(Type, is_block_compatible_obj_c_pointer_type, getVal74, setVal74, initVal74, IsBlockCompatibleObjCPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_block_pointer_type, getVal75, setVal75, initVal75, IsBlockPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_boolean_type, getVal76, setVal76, initVal76, IsBooleanType, bool, NthType)
  MX_VISIT_BOOL(Type, is_builtin_type, getVal77, setVal77, initVal77, IsBuiltinType, bool, NthType)
  MX_VISIT_BOOL(Type, is_carc_bridgable_type, getVal78, setVal78, initVal78, IsCARCBridgableType, bool, NthType)
  MX_VISIT_BOOL(Type, is_cuda_device_builtin_surface_type, getVal79, setVal79, initVal79, IsCUDADeviceBuiltinSurfaceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_cuda_device_builtin_texture_type, getVal80, setVal80, initVal80, IsCUDADeviceBuiltinTextureType, bool, NthType)
  MX_VISIT_BOOL(Type, is_canonical_unqualified, getVal81, setVal81, initVal81, IsCanonicalUnqualified, bool, NthType)
  MX_VISIT_BOOL(Type, is_char16_type, getVal82, setVal82, initVal82, IsChar16Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_char32_type, getVal83, setVal83, initVal83, IsChar32Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_char8_type, getVal84, setVal84, initVal84, IsChar8Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_character_type, getVal85, setVal85, initVal85, IsCharacterType, bool, NthType)
  MX_VISIT_BOOL(Type, is_class_type, getVal86, setVal86, initVal86, IsClassType, bool, NthType)
  MX_VISIT_BOOL(Type, is_clk_event_t, getVal87, setVal87, initVal87, IsClkEventT, bool, NthType)
  MX_VISIT_BOOL(Type, is_complex_integer_type, getVal88, setVal88, initVal88, IsComplexIntegerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_complex_type, getVal89, setVal89, initVal89, IsComplexType, bool, NthType)
  MX_VISIT_BOOL(Type, is_compound_type, getVal90, setVal90, initVal90, IsCompoundType, bool, NthType)
  MX_VISIT_BOOL(Type, is_constant_array_type, getVal91, setVal91, initVal91, IsConstantArrayType, bool, NthType)
  MX_VISIT_BOOL(Type, is_constant_matrix_type, getVal92, setVal92, initVal92, IsConstantMatrixType, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(Type, is_constant_size_type, getVal93, setVal93, initVal93, IsConstantSizeType, bool, NthType)
  MX_VISIT_BOOL(Type, is_decltype_type, getVal95, setVal95, initVal95, IsDecltypeType, bool, NthType)
  MX_VISIT_BOOL(Type, is_dependent_address_space_type, getVal96, setVal96, initVal96, IsDependentAddressSpaceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_dependent_sized_array_type, getVal97, setVal97, initVal97, IsDependentSizedArrayType, bool, NthType)
  MX_VISIT_BOOL(Type, is_dependent_type, getVal98, setVal98, initVal98, IsDependentType, bool, NthType)
  MX_VISIT_BOOL(Type, is_elaborated_type_specifier, getVal99, setVal99, initVal99, IsElaboratedTypeSpecifier, bool, NthType)
  MX_VISIT_BOOL(Type, is_enumeral_type, getVal100, setVal100, initVal100, IsEnumeralType, bool, NthType)
  MX_VISIT_BOOL(Type, is_event_t, getVal101, setVal101, initVal101, IsEventT, bool, NthType)
  MX_VISIT_BOOL(Type, is_ext_vector_type, getVal102, setVal102, initVal102, IsExtVectorType, bool, NthType)
  MX_VISIT_BOOL(Type, is_fixed_point_or_integer_type, getVal103, setVal103, initVal103, IsFixedPointOrIntegerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_fixed_point_type, getVal104, setVal104, initVal104, IsFixedPointType, bool, NthType)
  MX_VISIT_BOOL(Type, is_float128_type, getVal105, setVal105, initVal105, IsFloat128Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_float16_type, getVal106, setVal106, initVal106, IsFloat16Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_floating_type, getVal107, setVal107, initVal107, IsFloatingType, bool, NthType)
  MX_VISIT_BOOL(Type, is_from_ast, getVal108, setVal108, initVal108, IsFromAST, bool, NthType)
  MX_VISIT_BOOL(Type, is_function_no_proto_type, getVal109, setVal109, initVal109, IsFunctionNoProtoType, bool, NthType)
  MX_VISIT_BOOL(Type, is_function_pointer_type, getVal110, setVal110, initVal110, IsFunctionPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_function_proto_type, getVal111, setVal111, initVal111, IsFunctionProtoType, bool, NthType)
  MX_VISIT_BOOL(Type, is_function_reference_type, getVal112, setVal112, initVal112, IsFunctionReferenceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_function_type, getVal113, setVal113, initVal113, IsFunctionType, bool, NthType)
  MX_VISIT_BOOL(Type, is_fundamental_type, getVal114, setVal114, initVal114, IsFundamentalType, bool, NthType)
  MX_VISIT_BOOL(Type, is_half_type, getVal115, setVal115, initVal115, IsHalfType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ibm128_type, getVal116, setVal116, initVal116, IsIbm128Type, bool, NthType)
  MX_VISIT_BOOL(Type, is_image_type, getVal117, setVal117, initVal117, IsImageType, bool, NthType)
  MX_VISIT_BOOL(Type, is_incomplete_array_type, getVal118, setVal118, initVal118, IsIncompleteArrayType, bool, NthType)
  MX_VISIT_BOOL(Type, is_incomplete_or_object_type, getVal119, setVal119, initVal119, IsIncompleteOrObjectType, bool, NthType)
  MX_VISIT_BOOL(Type, is_incomplete_type, getVal120, setVal120, initVal120, IsIncompleteType, bool, NthType)
  MX_VISIT_BOOL(Type, is_instantiation_dependent_type, getVal121, setVal121, initVal121, IsInstantiationDependentType, bool, NthType)
  MX_VISIT_BOOL(Type, is_integer_type, getVal122, setVal122, initVal122, IsIntegerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_integral_or_enumeration_type, getVal123, setVal123, initVal123, IsIntegralOrEnumerationType, bool, NthType)
  MX_VISIT_BOOL(Type, is_integral_or_unscoped_enumeration_type, getVal124, setVal124, initVal124, IsIntegralOrUnscopedEnumerationType, bool, NthType)
  MX_VISIT_BOOL(Type, is_integral_type, getVal125, setVal125, initVal125, IsIntegralType, bool, NthType)
  MX_VISIT_BOOL(Type, is_interface_type, getVal126, setVal126, initVal126, IsInterfaceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_l_value_reference_type, getVal127, setVal127, initVal127, IsLValueReferenceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_linkage_valid, getVal128, setVal128, initVal128, IsLinkageValid, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(Type, is_literal_type, getVal129, setVal129, initVal129, IsLiteralType, bool, NthType)
  MX_VISIT_BOOL(Type, is_matrix_type, getVal131, setVal131, initVal131, IsMatrixType, bool, NthType)
  MX_VISIT_BOOL(Type, is_member_data_pointer_type, getVal132, setVal132, initVal132, IsMemberDataPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_member_function_pointer_type, getVal133, setVal133, initVal133, IsMemberFunctionPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_member_pointer_type, getVal134, setVal134, initVal134, IsMemberPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_non_overload_placeholder_type, getVal135, setVal135, initVal135, IsNonOverloadPlaceholderType, bool, NthType)
  MX_VISIT_BOOL(Type, is_nothrow_t, getVal136, setVal136, initVal136, IsNothrowT, bool, NthType)
  MX_VISIT_BOOL(Type, is_null_pointer_type, getVal137, setVal137, initVal137, IsNullPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_ext_opaque_type, getVal138, setVal138, initVal138, IsOCLExtOpaqueType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_darray_ro_type, getVal139, setVal139, initVal139, IsOCLImage1dArrayROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_darray_rw_type, getVal140, setVal140, initVal140, IsOCLImage1dArrayRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_darray_wo_type, getVal141, setVal141, initVal141, IsOCLImage1dArrayWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_dbuffer_ro_type, getVal142, setVal142, initVal142, IsOCLImage1dBufferROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_dbuffer_rw_type, getVal143, setVal143, initVal143, IsOCLImage1dBufferRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_dbuffer_wo_type, getVal144, setVal144, initVal144, IsOCLImage1dBufferWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_dro_type, getVal145, setVal145, initVal145, IsOCLImage1dROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_drw_type, getVal146, setVal146, initVal146, IsOCLImage1dRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image1_dwo_type, getVal147, setVal147, initVal147, IsOCLImage1dWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_depth_ro_type, getVal148, setVal148, initVal148, IsOCLImage2dArrayDepthROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_depth_rw_type, getVal149, setVal149, initVal149, IsOCLImage2dArrayDepthRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_depth_wo_type, getVal150, setVal150, initVal150, IsOCLImage2dArrayDepthWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_msaa_depth_ro_type, getVal151, setVal151, initVal151, IsOCLImage2dArrayMSAADepthROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_msaa_depth_rw_type, getVal152, setVal152, initVal152, IsOCLImage2dArrayMSAADepthRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_msaa_depth_wo_type, getVal153, setVal153, initVal153, IsOCLImage2dArrayMSAADepthWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_msaaro_type, getVal154, setVal154, initVal154, IsOCLImage2dArrayMSAAROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_msaarw_type, getVal155, setVal155, initVal155, IsOCLImage2dArrayMSAARWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_msaawo_type, getVal156, setVal156, initVal156, IsOCLImage2dArrayMSAAWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_ro_type, getVal157, setVal157, initVal157, IsOCLImage2dArrayROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_rw_type, getVal158, setVal158, initVal158, IsOCLImage2dArrayRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_darray_wo_type, getVal159, setVal159, initVal159, IsOCLImage2dArrayWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_ddepth_ro_type, getVal160, setVal160, initVal160, IsOCLImage2dDepthROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_ddepth_rw_type, getVal161, setVal161, initVal161, IsOCLImage2dDepthRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_ddepth_wo_type, getVal162, setVal162, initVal162, IsOCLImage2dDepthWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dmsaa_depth_ro_type, getVal163, setVal163, initVal163, IsOCLImage2dMSAADepthROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dmsaa_depth_rw_type, getVal164, setVal164, initVal164, IsOCLImage2dMSAADepthRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dmsaa_depth_wo_type, getVal165, setVal165, initVal165, IsOCLImage2dMSAADepthWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dmsaaro_type, getVal166, setVal166, initVal166, IsOCLImage2dMSAAROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dmsaarw_type, getVal167, setVal167, initVal167, IsOCLImage2dMSAARWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dmsaawo_type, getVal168, setVal168, initVal168, IsOCLImage2dMSAAWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dro_type, getVal169, setVal169, initVal169, IsOCLImage2dROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_drw_type, getVal170, setVal170, initVal170, IsOCLImage2dRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image2_dwo_type, getVal171, setVal171, initVal171, IsOCLImage2dWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image3_dro_type, getVal172, setVal172, initVal172, IsOCLImage3dROType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image3_drw_type, getVal173, setVal173, initVal173, IsOCLImage3dRWType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_image3_dwo_type, getVal174, setVal174, initVal174, IsOCLImage3dWOType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ime_dual_reference_streamin_type, getVal175, setVal175, initVal175, IsOCLIntelSubgroupAVCImeDualReferenceStreaminType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ime_payload_type, getVal176, setVal176, initVal176, IsOCLIntelSubgroupAVCImePayloadType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ime_result_dual_reference_streamout_type, getVal177, setVal177, initVal177, IsOCLIntelSubgroupAVCImeResultDualReferenceStreamoutType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ime_result_single_reference_streamout_type, getVal178, setVal178, initVal178, IsOCLIntelSubgroupAVCImeResultSingleReferenceStreamoutType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ime_result_type, getVal179, setVal179, initVal179, IsOCLIntelSubgroupAVCImeResultType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ime_single_reference_streamin_type, getVal180, setVal180, initVal180, IsOCLIntelSubgroupAVCImeSingleReferenceStreaminType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_mce_payload_type, getVal181, setVal181, initVal181, IsOCLIntelSubgroupAVCMcePayloadType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_mce_result_type, getVal182, setVal182, initVal182, IsOCLIntelSubgroupAVCMceResultType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ref_payload_type, getVal183, setVal183, initVal183, IsOCLIntelSubgroupAVCRefPayloadType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_ref_result_type, getVal184, setVal184, initVal184, IsOCLIntelSubgroupAVCRefResultType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_sic_payload_type, getVal185, setVal185, initVal185, IsOCLIntelSubgroupAVCSicPayloadType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_sic_result_type, getVal186, setVal186, initVal186, IsOCLIntelSubgroupAVCSicResultType, bool, NthType)
  MX_VISIT_BOOL(Type, is_ocl_intel_subgroup_avc_type, getVal187, setVal187, initVal187, IsOCLIntelSubgroupAVCType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_carc_bridgable_type, getVal188, setVal188, initVal188, IsObjCARCBridgableType, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(Type, is_obj_carc_implicitly_unretained_type, getVal189, setVal189, initVal189, IsObjCARCImplicitlyUnretainedType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_boxable_record_type, getVal191, setVal191, initVal191, IsObjCBoxableRecordType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_builtin_type, getVal192, setVal192, initVal192, IsObjCBuiltinType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_class_or_class_kind_of_type, getVal193, setVal193, initVal193, IsObjCClassOrClassKindOfType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_class_type, getVal194, setVal194, initVal194, IsObjCClassType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_id_type, getVal195, setVal195, initVal195, IsObjCIdType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_independent_class_type, getVal196, setVal196, initVal196, IsObjCIndependentClassType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_indirect_lifetime_type, getVal197, setVal197, initVal197, IsObjCIndirectLifetimeType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_inert_unsafe_unretained_type, getVal198, setVal198, initVal198, IsObjCInertUnsafeUnretainedType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_lifetime_type, getVal199, setVal199, initVal199, IsObjCLifetimeType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_cns_object_type, getVal200, setVal200, initVal200, IsObjCNSObjectType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_object_or_interface_type, getVal201, setVal201, initVal201, IsObjCObjectOrInterfaceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_object_pointer_type, getVal202, setVal202, initVal202, IsObjCObjectPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_object_type, getVal203, setVal203, initVal203, IsObjCObjectType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_qualified_class_type, getVal204, setVal204, initVal204, IsObjCQualifiedClassType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_qualified_id_type, getVal205, setVal205, initVal205, IsObjCQualifiedIdType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_qualified_interface_type, getVal206, setVal206, initVal206, IsObjCQualifiedInterfaceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_retainable_type, getVal207, setVal207, initVal207, IsObjCRetainableType, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_c_sel_type, getVal208, setVal208, initVal208, IsObjCSelType, bool, NthType)
  MX_VISIT_BOOL(Type, is_object_pointer_type, getVal209, setVal209, initVal209, IsObjectPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_object_type, getVal210, setVal210, initVal210, IsObjectType, bool, NthType)
  MX_VISIT_BOOL(Type, is_open_cl_specific_type, getVal211, setVal211, initVal211, IsOpenCLSpecificType, bool, NthType)
  MX_VISIT_BOOL(Type, is_overloadable_type, getVal212, setVal212, initVal212, IsOverloadableType, bool, NthType)
  MX_VISIT_BOOL(Type, is_pipe_type, getVal213, setVal213, initVal213, IsPipeType, bool, NthType)
  MX_VISIT_BOOL(Type, is_placeholder_type, getVal214, setVal214, initVal214, IsPlaceholderType, bool, NthType)
  MX_VISIT_BOOL(Type, is_pointer_type, getVal215, setVal215, initVal215, IsPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_promotable_integer_type, getVal216, setVal216, initVal216, IsPromotableIntegerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_queue_t, getVal217, setVal217, initVal217, IsQueueT, bool, NthType)
  MX_VISIT_BOOL(Type, is_r_value_reference_type, getVal218, setVal218, initVal218, IsRValueReferenceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_real_floating_type, getVal219, setVal219, initVal219, IsRealFloatingType, bool, NthType)
  MX_VISIT_BOOL(Type, is_real_type, getVal220, setVal220, initVal220, IsRealType, bool, NthType)
  MX_VISIT_BOOL(Type, is_record_type, getVal221, setVal221, initVal221, IsRecordType, bool, NthType)
  MX_VISIT_BOOL(Type, is_reference_type, getVal222, setVal222, initVal222, IsReferenceType, bool, NthType)
  MX_VISIT_BOOL(Type, is_reserve_idt, getVal223, setVal223, initVal223, IsReserveIDT, bool, NthType)
  MX_VISIT_BOOL(Type, is_sampler_t, getVal224, setVal224, initVal224, IsSamplerT, bool, NthType)
  MX_VISIT_BOOL(Type, is_saturated_fixed_point_type, getVal225, setVal225, initVal225, IsSaturatedFixedPointType, bool, NthType)
  MX_VISIT_BOOL(Type, is_scalar_type, getVal226, setVal226, initVal226, IsScalarType, bool, NthType)
  MX_VISIT_BOOL(Type, is_scoped_enumeral_type, getVal227, setVal227, initVal227, IsScopedEnumeralType, bool, NthType)
  MX_VISIT_BOOL(Type, is_signed_fixed_point_type, getVal228, setVal228, initVal228, IsSignedFixedPointType, bool, NthType)
  MX_VISIT_BOOL(Type, is_signed_integer_or_enumeration_type, getVal229, setVal229, initVal229, IsSignedIntegerOrEnumerationType, bool, NthType)
  MX_VISIT_BOOL(Type, is_signed_integer_type, getVal230, setVal230, initVal230, IsSignedIntegerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_sizeless_builtin_type, getVal231, setVal231, initVal231, IsSizelessBuiltinType, bool, NthType)
  MX_VISIT_BOOL(Type, is_sizeless_type, getVal232, setVal232, initVal232, IsSizelessType, bool, NthType)
  MX_VISIT_BOOL(Type, is_specifier_type, getVal233, setVal233, initVal233, IsSpecifierType, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(Type, is_standard_layout_type, getVal234, setVal234, initVal234, IsStandardLayoutType, bool, NthType)
  MX_VISIT_BOOL(Type, is_std_byte_type, getVal236, setVal236, initVal236, IsStdByteType, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(Type, is_structural_type, getVal237, setVal237, initVal237, IsStructuralType, bool, NthType)
  MX_VISIT_BOOL(Type, is_structure_or_class_type, getVal239, setVal239, initVal239, IsStructureOrClassType, bool, NthType)
  MX_VISIT_BOOL(Type, is_structure_type, getVal240, setVal240, initVal240, IsStructureType, bool, NthType)
  MX_VISIT_BOOL(Type, is_template_type_parm_type, getVal241, setVal241, initVal241, IsTemplateTypeParmType, bool, NthType)
  MX_VISIT_BOOL(Type, is_typedef_name_type, getVal242, setVal242, initVal242, IsTypedefNameType, bool, NthType)
  MX_VISIT_BOOL(Type, is_undeduced_auto_type, getVal243, setVal243, initVal243, IsUndeducedAutoType, bool, NthType)
  MX_VISIT_BOOL(Type, is_undeduced_type, getVal244, setVal244, initVal244, IsUndeducedType, bool, NthType)
  MX_VISIT_BOOL(Type, is_union_type, getVal245, setVal245, initVal245, IsUnionType, bool, NthType)
  MX_VISIT_BOOL(Type, is_unsaturated_fixed_point_type, getVal246, setVal246, initVal246, IsUnsaturatedFixedPointType, bool, NthType)
  MX_VISIT_BOOL(Type, is_unscoped_enumeration_type, getVal247, setVal247, initVal247, IsUnscopedEnumerationType, bool, NthType)
  MX_VISIT_BOOL(Type, is_unsigned_fixed_point_type, getVal248, setVal248, initVal248, IsUnsignedFixedPointType, bool, NthType)
  MX_VISIT_BOOL(Type, is_unsigned_integer_or_enumeration_type, getVal249, setVal249, initVal249, IsUnsignedIntegerOrEnumerationType, bool, NthType)
  MX_VISIT_BOOL(Type, is_unsigned_integer_type, getVal250, setVal250, initVal250, IsUnsignedIntegerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_vlst_builtin_type, getVal251, setVal251, initVal251, IsVLSTBuiltinType, bool, NthType)
  MX_VISIT_BOOL(Type, is_variable_array_type, getVal252, setVal252, initVal252, IsVariableArrayType, bool, NthType)
  MX_VISIT_BOOL(Type, is_variably_modified_type, getVal253, setVal253, initVal253, IsVariablyModifiedType, bool, NthType)
  MX_VISIT_BOOL(Type, is_vector_type, getVal254, setVal254, initVal254, IsVectorType, bool, NthType)
  MX_VISIT_BOOL(Type, is_visibility_explicit, getVal255, setVal255, initVal255, IsVisibilityExplicit, bool, NthType)
  MX_VISIT_BOOL(Type, is_void_pointer_type, getVal256, setVal256, initVal256, IsVoidPointerType, bool, NthType)
  MX_VISIT_BOOL(Type, is_void_type, getVal257, setVal257, initVal257, IsVoidType, bool, NthType)
  MX_VISIT_BOOL(Type, is_wide_character_type, getVal258, setVal258, initVal258, IsWideCharacterType, bool, NthType)
  MX_VISIT_ENTITY(Type, ignore_parentheses, getVal259, setVal259, initVal259, IgnoreParentheses, Type, NthType, TypeUseSelector::IGNORE_PARENTHESES)
  MX_VISIT_ENUM(Type, address_space, getVal260, setVal260, initVal260, AddressSpace, LangAS, NthType)
  MX_VISIT_ENTITY(Type, atomic_unqualified_type, getVal261, setVal261, initVal261, AtomicUnqualifiedType, Type, NthType, TypeUseSelector::ATOMIC_UNQUALIFIED_TYPE)
  MX_VISIT_ENTITY(Type, canonical_type, getVal262, setVal262, initVal262, CanonicalType, Type, NthType, TypeUseSelector::CANONICAL_TYPE)
  MX_VISIT_ENTITY(Type, desugared_type, getVal263, setVal263, initVal263, DesugaredType, Type, NthType, TypeUseSelector::DESUGARED_TYPE)
  MX_VISIT_ENTITY(Type, local_unqualified_type, getVal264, setVal264, initVal264, LocalUnqualifiedType, Type, NthType, TypeUseSelector::LOCAL_UNQUALIFIED_TYPE)
  MX_VISIT_ENTITY(Type, non_l_value_expression_type, getVal265, setVal265, initVal265, NonLValueExpressionType, Type, NthType, TypeUseSelector::NON_L_VALUE_EXPRESSION_TYPE)
  MX_VISIT_ENTITY(Type, non_pack_expansion_type, getVal266, setVal266, initVal266, NonPackExpansionType, Type, NthType, TypeUseSelector::NON_PACK_EXPANSION_TYPE)
  MX_VISIT_ENTITY(Type, non_reference_type, getVal267, setVal267, initVal267, NonReferenceType, Type, NthType, TypeUseSelector::NON_REFERENCE_TYPE)
  MX_VISIT_ENTITY(Type, single_step_desugared_type, getVal268, setVal268, initVal268, SingleStepDesugaredType, Type, NthType, TypeUseSelector::SINGLE_STEP_DESUGARED_TYPE)
  MX_VISIT_BOOL(Type, has_address_space, getVal269, setVal269, initVal269, HasAddressSpace, bool, NthType)
  MX_VISIT_BOOL(Type, has_local_non_fast_qualifiers, getVal270, setVal270, initVal270, HasLocalNonFastQualifiers, bool, NthType)
  MX_VISIT_BOOL(Type, has_local_qualifiers, getVal271, setVal271, initVal271, HasLocalQualifiers, bool, NthType)
  MX_VISIT_BOOL(Type, has_non_trivial_obj_c_lifetime, getVal272, setVal272, initVal272, HasNonTrivialObjCLifetime, bool, NthType)
  MX_VISIT_BOOL(Type, has_non_trivial_to_primitive_copy_c_union, getVal273, setVal273, initVal273, HasNonTrivialToPrimitiveCopyCUnion, bool, NthType)
  MX_VISIT_BOOL(Type, has_non_trivial_to_primitive_default_initialize_c_union, getVal274, setVal274, initVal274, HasNonTrivialToPrimitiveDefaultInitializeCUnion, bool, NthType)
  MX_VISIT_BOOL(Type, has_non_trivial_to_primitive_destruct_c_union, getVal275, setVal275, initVal275, HasNonTrivialToPrimitiveDestructCUnion, bool, NthType)
  MX_VISIT_BOOL(Type, has_qualifiers, getVal276, setVal276, initVal276, HasQualifiers, bool, NthType)
  MX_VISIT_BOOL(Type, has_strong_or_weak_obj_c_lifetime, getVal277, setVal277, initVal277, HasStrongOrWeakObjCLifetime, bool, NthType)
  MX_VISIT_BOOL(Type, is_c_forbidden_l_value_type, getVal278, setVal278, initVal278, IsCForbiddenLValueType, bool, NthType)
  MX_VISIT_BOOL(Type, is_cxx11_pod_type, getVal279, setVal279, initVal279, IsCXX11PODType, bool, NthType)
  MX_VISIT_BOOL(Type, is_cxx98_pod_type, getVal280, setVal280, initVal280, IsCXX98PODType, bool, NthType)
  MX_VISIT_BOOL(Type, is_canonical, getVal281, setVal281, initVal281, IsCanonical, bool, NthType)
  MX_VISIT_BOOL(Type, is_canonical_as_parameter, getVal282, setVal282, initVal282, IsCanonicalAsParameter, bool, NthType)
  MX_VISIT_BOOL(Type, is_const_qualified, getVal283, setVal283, initVal283, IsConstQualified, bool, NthType)
  MX_VISIT_BOOL(Type, is_constant, getVal284, setVal284, initVal284, IsConstant, bool, NthType)
  MX_VISIT_ENUM(Type, is_destructed_type, getVal285, setVal285, initVal285, IsDestructedType, QualTypeDestructionKind, NthType)
  MX_VISIT_BOOL(Type, is_local_const_qualified, getVal286, setVal286, initVal286, IsLocalConstQualified, bool, NthType)
  MX_VISIT_BOOL(Type, is_local_restrict_qualified, getVal287, setVal287, initVal287, IsLocalRestrictQualified, bool, NthType)
  MX_VISIT_BOOL(Type, is_local_volatile_qualified, getVal288, setVal288, initVal288, IsLocalVolatileQualified, bool, NthType)
  MX_VISIT_ENUM(Type, is_non_trivial_to_primitive_copy, getVal289, setVal289, initVal289, IsNonTrivialToPrimitiveCopy, QualTypePrimitiveCopyKind, NthType)
  MX_VISIT_ENUM(Type, is_non_trivial_to_primitive_default_initialize, getVal290, setVal290, initVal290, IsNonTrivialToPrimitiveDefaultInitialize, QualTypePrimitiveDefaultInitializeKind, NthType)
  MX_VISIT_ENUM(Type, is_non_trivial_to_primitive_destructive_move, getVal291, setVal291, initVal291, IsNonTrivialToPrimitiveDestructiveMove, QualTypePrimitiveCopyKind, NthType)
  MX_VISIT_BOOL(Type, is_non_weak_in_mrr_with_obj_c_weak, getVal292, setVal292, initVal292, IsNonWeakInMRRWithObjCWeak, bool, NthType)
  MX_VISIT_BOOL(Type, is_null, getVal293, setVal293, initVal293, IsNull, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_cgc_strong, getVal294, setVal294, initVal294, IsObjCGCStrong, bool, NthType)
  MX_VISIT_BOOL(Type, is_obj_cgc_weak, getVal295, setVal295, initVal295, IsObjCGCWeak, bool, NthType)
  MX_VISIT_BOOL(Type, is_pod_type, getVal296, setVal296, initVal296, IsPODType, bool, NthType)
  MX_VISIT_BOOL(Type, is_restrict_qualified, getVal297, setVal297, initVal297, IsRestrictQualified, bool, NthType)
  MX_VISIT_BOOL(Type, is_trivial_type, getVal298, setVal298, initVal298, IsTrivialType, bool, NthType)
  MX_VISIT_BOOL(Type, is_trivially_copyable_type, getVal299, setVal299, initVal299, IsTriviallyCopyableType, bool, NthType)
  MX_VISIT_BOOL(Type, is_volatile_qualified, getVal300, setVal300, initVal300, IsVolatileQualified, bool, NthType)
  MX_VISIT_BOOL(Type, may_be_dynamic_class, getVal301, setVal301, initVal301, MayBeDynamicClass, bool, NthType)
  MX_VISIT_BOOL(Type, may_be_not_dynamic_class, getVal302, setVal302, initVal302, MayBeNotDynamicClass, bool, NthType)
  MX_VISIT_ENTITY(Type, strip_obj_c_kind_of_type, getVal303, setVal303, initVal303, StripObjCKindOfType, Type, NthType, TypeUseSelector::STRIP_OBJ_C_KIND_OF_TYPE)
  MX_VISIT_ENTITY(Type, with_const, getVal304, setVal304, initVal304, WithConst, Type, NthType, TypeUseSelector::WITH_CONST)
  MX_VISIT_ENTITY(Type, with_restrict, getVal305, setVal305, initVal305, WithRestrict, Type, NthType, TypeUseSelector::WITH_RESTRICT)
  MX_VISIT_ENTITY(Type, with_volatile, getVal306, setVal306, initVal306, WithVolatile, Type, NthType, TypeUseSelector::WITH_VOLATILE)
  MX_VISIT_ENTITY(Type, without_local_fast_qualifiers, getVal307, setVal307, initVal307, WithoutLocalFastQualifiers, Type, NthType, TypeUseSelector::WITHOUT_LOCAL_FAST_QUALIFIERS)
  MX_EXIT_VISIT_Type
MX_END_VISIT_TYPE(Type)

#ifndef MX_ENTER_VISIT_TemplateTypeParmType
#  define MX_ENTER_VISIT_TemplateTypeParmType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TemplateTypeParmType
#  define MX_EXIT_VISIT_TemplateTypeParmType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(TemplateTypeParmType)
  MX_ENTER_VISIT_TemplateTypeParmType
  MX_VISIT_BASE(TemplateTypeParmType, Type)
  MX_VISIT_ENTITY(TemplateTypeParmType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_OPTIONAL_ENTITY(TemplateTypeParmType, declaration, getVal309, setVal309, initVal309, Declaration, TemplateTypeParmDecl, NthType, DeclUseSelector::DECLARATION)
  MX_VISIT_BOOL(TemplateTypeParmType, is_parameter_pack, getVal311, setVal311, initVal311, IsParameterPack, bool, NthType)
  MX_VISIT_BOOL(TemplateTypeParmType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_EXIT_VISIT_TemplateTypeParmType
MX_END_VISIT_TYPE(TemplateTypeParmType)

#ifndef MX_ENTER_VISIT_TemplateSpecializationType
#  define MX_ENTER_VISIT_TemplateSpecializationType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TemplateSpecializationType
#  define MX_EXIT_VISIT_TemplateSpecializationType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(TemplateSpecializationType)
  MX_ENTER_VISIT_TemplateSpecializationType
  MX_VISIT_BASE(TemplateSpecializationType, Type)
  MX_VISIT_ENTITY(TemplateSpecializationType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_OPTIONAL_ENTITY(TemplateSpecializationType, aliased_type, getVal309, setVal309, initVal309, AliasedType, Type, NthType, TypeUseSelector::ALIASED_TYPE)
  MX_VISIT_BOOL(TemplateSpecializationType, is_current_instantiation, getVal311, setVal311, initVal311, IsCurrentInstantiation, bool, NthType)
  MX_VISIT_BOOL(TemplateSpecializationType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_VISIT_BOOL(TemplateSpecializationType, is_type_alias, getVal313, setVal313, initVal313, IsTypeAlias, bool, NthType)
  MX_VISIT_PSEUDO_LIST(TemplateSpecializationType, template_arguments, getVal314, setVal314, initVal314, TemplateArguments, TemplateArgument, NthType)
  MX_EXIT_VISIT_TemplateSpecializationType
MX_END_VISIT_TYPE(TemplateSpecializationType)

#ifndef MX_ENTER_VISIT_TagType
#  define MX_ENTER_VISIT_TagType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TagType
#  define MX_EXIT_VISIT_TagType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(TagType)
  MX_ENTER_VISIT_TagType
  MX_VISIT_BASE(TagType, Type)
  MX_VISIT_ENTITY(TagType, declaration, getVal308, setVal308, initVal308, Declaration, TagDecl, NthType, DeclUseSelector::DECLARATION)
  MX_VISIT_BOOL(TagType, is_being_defined, getVal310, setVal310, initVal310, IsBeingDefined, bool, NthType)
  MX_EXIT_VISIT_TagType
MX_END_VISIT_TYPE(TagType)

#ifndef MX_ENTER_VISIT_RecordType
#  define MX_ENTER_VISIT_RecordType MX_ENTER_VISIT_TagType
#endif
#ifndef MX_EXIT_VISIT_RecordType
#  define MX_EXIT_VISIT_RecordType MX_EXIT_VISIT_TagType
#endif

MX_BEGIN_VISIT_TYPE(RecordType)
  MX_ENTER_VISIT_RecordType
  MX_VISIT_BASE(RecordType, TagType)
  MX_VISIT_ENTITY(RecordType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(RecordType, has_const_fields, getVal311, setVal311, initVal311, HasConstFields, bool, NthType)
  MX_VISIT_BOOL(RecordType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_EXIT_VISIT_RecordType
MX_END_VISIT_TYPE(RecordType)

#ifndef MX_ENTER_VISIT_EnumType
#  define MX_ENTER_VISIT_EnumType MX_ENTER_VISIT_TagType
#endif
#ifndef MX_EXIT_VISIT_EnumType
#  define MX_EXIT_VISIT_EnumType MX_EXIT_VISIT_TagType
#endif

MX_BEGIN_VISIT_TYPE(EnumType)
  MX_ENTER_VISIT_EnumType
  MX_VISIT_BASE(EnumType, TagType)
  MX_VISIT_ENTITY(EnumType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(EnumType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_EXIT_VISIT_EnumType
MX_END_VISIT_TYPE(EnumType)

#ifndef MX_ENTER_VISIT_SubstTemplateTypeParmType
#  define MX_ENTER_VISIT_SubstTemplateTypeParmType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_SubstTemplateTypeParmType
#  define MX_EXIT_VISIT_SubstTemplateTypeParmType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(SubstTemplateTypeParmType)
  MX_ENTER_VISIT_SubstTemplateTypeParmType
  MX_VISIT_BASE(SubstTemplateTypeParmType, Type)
  MX_VISIT_ENTITY(SubstTemplateTypeParmType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(SubstTemplateTypeParmType, replaced_parameter, getVal309, setVal309, initVal309, ReplacedParameter, TemplateTypeParmType, NthType, TypeUseSelector::REPLACED_PARAMETER)
  MX_VISIT_ENTITY(SubstTemplateTypeParmType, replacement_type, getVal315, setVal315, initVal315, ReplacementType, Type, NthType, TypeUseSelector::REPLACEMENT_TYPE)
  MX_VISIT_BOOL(SubstTemplateTypeParmType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_SubstTemplateTypeParmType
MX_END_VISIT_TYPE(SubstTemplateTypeParmType)

#ifndef MX_ENTER_VISIT_SubstTemplateTypeParmPackType
#  define MX_ENTER_VISIT_SubstTemplateTypeParmPackType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_SubstTemplateTypeParmPackType
#  define MX_EXIT_VISIT_SubstTemplateTypeParmPackType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(SubstTemplateTypeParmPackType)
  MX_ENTER_VISIT_SubstTemplateTypeParmPackType
  MX_VISIT_BASE(SubstTemplateTypeParmPackType, Type)
  MX_VISIT_ENTITY(SubstTemplateTypeParmPackType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(SubstTemplateTypeParmPackType, replaced_parameter, getVal309, setVal309, initVal309, ReplacedParameter, TemplateTypeParmType, NthType, TypeUseSelector::REPLACED_PARAMETER)
  MX_VISIT_BOOL(SubstTemplateTypeParmPackType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_SubstTemplateTypeParmPackType
MX_END_VISIT_TYPE(SubstTemplateTypeParmPackType)

#ifndef MX_ENTER_VISIT_ReferenceType
#  define MX_ENTER_VISIT_ReferenceType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ReferenceType
#  define MX_EXIT_VISIT_ReferenceType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(ReferenceType)
  MX_ENTER_VISIT_ReferenceType
  MX_VISIT_BASE(ReferenceType, Type)
  MX_VISIT_ENTITY(ReferenceType, pointee_type_as_written, getVal308, setVal308, initVal308, PointeeTypeAsWritten, Type, NthType, TypeUseSelector::POINTEE_TYPE_AS_WRITTEN)
  MX_VISIT_BOOL(ReferenceType, is_inner_reference, getVal310, setVal310, initVal310, IsInnerReference, bool, NthType)
  MX_VISIT_BOOL(ReferenceType, is_spelled_as_l_value, getVal311, setVal311, initVal311, IsSpelledAsLValue, bool, NthType)
  MX_EXIT_VISIT_ReferenceType
MX_END_VISIT_TYPE(ReferenceType)

#ifndef MX_ENTER_VISIT_RValueReferenceType
#  define MX_ENTER_VISIT_RValueReferenceType MX_ENTER_VISIT_ReferenceType
#endif
#ifndef MX_EXIT_VISIT_RValueReferenceType
#  define MX_EXIT_VISIT_RValueReferenceType MX_EXIT_VISIT_ReferenceType
#endif

MX_BEGIN_VISIT_TYPE(RValueReferenceType)
  MX_ENTER_VISIT_RValueReferenceType
  MX_VISIT_BASE(RValueReferenceType, ReferenceType)
  MX_VISIT_ENTITY(RValueReferenceType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(RValueReferenceType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_EXIT_VISIT_RValueReferenceType
MX_END_VISIT_TYPE(RValueReferenceType)

#ifndef MX_ENTER_VISIT_LValueReferenceType
#  define MX_ENTER_VISIT_LValueReferenceType MX_ENTER_VISIT_ReferenceType
#endif
#ifndef MX_EXIT_VISIT_LValueReferenceType
#  define MX_EXIT_VISIT_LValueReferenceType MX_EXIT_VISIT_ReferenceType
#endif

MX_BEGIN_VISIT_TYPE(LValueReferenceType)
  MX_ENTER_VISIT_LValueReferenceType
  MX_VISIT_BASE(LValueReferenceType, ReferenceType)
  MX_VISIT_ENTITY(LValueReferenceType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(LValueReferenceType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_EXIT_VISIT_LValueReferenceType
MX_END_VISIT_TYPE(LValueReferenceType)

#ifndef MX_ENTER_VISIT_PointerType
#  define MX_ENTER_VISIT_PointerType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_PointerType
#  define MX_EXIT_VISIT_PointerType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(PointerType)
  MX_ENTER_VISIT_PointerType
  MX_VISIT_BASE(PointerType, Type)
  MX_VISIT_ENTITY(PointerType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(PointerType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_PointerType
MX_END_VISIT_TYPE(PointerType)

#ifndef MX_ENTER_VISIT_PipeType
#  define MX_ENTER_VISIT_PipeType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_PipeType
#  define MX_EXIT_VISIT_PipeType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(PipeType)
  MX_ENTER_VISIT_PipeType
  MX_VISIT_BASE(PipeType, Type)
  MX_VISIT_ENTITY(PipeType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(PipeType, element_type, getVal309, setVal309, initVal309, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_BOOL(PipeType, is_read_only, getVal310, setVal310, initVal310, IsReadOnly, bool, NthType)
  MX_VISIT_BOOL(PipeType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_EXIT_VISIT_PipeType
MX_END_VISIT_TYPE(PipeType)

#ifndef MX_ENTER_VISIT_ParenType
#  define MX_ENTER_VISIT_ParenType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ParenType
#  define MX_EXIT_VISIT_ParenType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(ParenType)
  MX_ENTER_VISIT_ParenType
  MX_VISIT_BASE(ParenType, Type)
  MX_VISIT_ENTITY(ParenType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(ParenType, inner_type, getVal309, setVal309, initVal309, InnerType, Type, NthType, TypeUseSelector::INNER_TYPE)
  MX_VISIT_BOOL(ParenType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_ParenType
MX_END_VISIT_TYPE(ParenType)

#ifndef MX_ENTER_VISIT_PackExpansionType
#  define MX_ENTER_VISIT_PackExpansionType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_PackExpansionType
#  define MX_EXIT_VISIT_PackExpansionType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(PackExpansionType)
  MX_ENTER_VISIT_PackExpansionType
  MX_VISIT_BASE(PackExpansionType, Type)
  MX_VISIT_ENTITY(PackExpansionType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_OPTIONAL_INT(PackExpansionType, num_expansions, getVal316, setVal316, initVal316, NumExpansions, unsigned, NthType)
  MX_VISIT_ENTITY(PackExpansionType, pattern, getVal309, setVal309, initVal309, Pattern, Type, NthType, TypeUseSelector::PATTERN)
  MX_VISIT_BOOL(PackExpansionType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_EXIT_VISIT_PackExpansionType
MX_END_VISIT_TYPE(PackExpansionType)

#ifndef MX_ENTER_VISIT_ObjCTypeParamType
#  define MX_ENTER_VISIT_ObjCTypeParamType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ObjCTypeParamType
#  define MX_EXIT_VISIT_ObjCTypeParamType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(ObjCTypeParamType)
  MX_ENTER_VISIT_ObjCTypeParamType
  MX_VISIT_BASE(ObjCTypeParamType, Type)
  MX_VISIT_ENTITY(ObjCTypeParamType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(ObjCTypeParamType, declaration, getVal309, setVal309, initVal309, Declaration, ObjCTypeParamDecl, NthType, DeclUseSelector::DECLARATION)
  MX_VISIT_BOOL(ObjCTypeParamType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_ObjCTypeParamType
MX_END_VISIT_TYPE(ObjCTypeParamType)

#ifndef MX_ENTER_VISIT_ObjCObjectType
#  define MX_ENTER_VISIT_ObjCObjectType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ObjCObjectType
#  define MX_EXIT_VISIT_ObjCObjectType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(ObjCObjectType)
  MX_ENTER_VISIT_ObjCObjectType
  MX_VISIT_BASE(ObjCObjectType, Type)
  MX_VISIT_ENTITY(ObjCObjectType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(ObjCObjectType, base_type, getVal309, setVal309, initVal309, BaseType, Type, NthType, TypeUseSelector::BASE_TYPE)
  MX_VISIT_ENTITY(ObjCObjectType, interface, getVal315, setVal315, initVal315, Interface, ObjCInterfaceDecl, NthType, DeclUseSelector::INTERFACE)
  MX_VISIT_OPTIONAL_ENTITY(ObjCObjectType, super_class_type, getVal317, setVal317, initVal317, SuperClassType, Type, NthType, TypeUseSelector::SUPER_CLASS_TYPE)
  MX_VISIT_ENTITY_LIST(ObjCObjectType, type_arguments, getVal318, setVal318, initVal318, TypeArguments, Type, NthType)
  MX_VISIT_ENTITY_LIST(ObjCObjectType, type_arguments_as_written, getVal319, setVal319, initVal319, TypeArgumentsAsWritten, Type, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_kind_of_type, getVal311, setVal311, initVal311, IsKindOfType, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_kind_of_type_as_written, getVal312, setVal312, initVal312, IsKindOfTypeAsWritten, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_class, getVal313, setVal313, initVal313, IsObjCClass, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_id, getVal320, setVal320, initVal320, IsObjCId, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_qualified_class, getVal321, setVal321, initVal321, IsObjCQualifiedClass, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_qualified_id, getVal322, setVal322, initVal322, IsObjCQualifiedId, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_unqualified_class, getVal323, setVal323, initVal323, IsObjCUnqualifiedClass, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_unqualified_id, getVal324, setVal324, initVal324, IsObjCUnqualifiedId, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_obj_c_unqualified_id_or_class, getVal325, setVal325, initVal325, IsObjCUnqualifiedIdOrClass, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_specialized, getVal326, setVal326, initVal326, IsSpecialized, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_specialized_as_written, getVal327, setVal327, initVal327, IsSpecializedAsWritten, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_sugared, getVal328, setVal328, initVal328, IsSugared, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_unspecialized, getVal329, setVal329, initVal329, IsUnspecialized, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectType, is_unspecialized_as_written, getVal330, setVal330, initVal330, IsUnspecializedAsWritten, bool, NthType)
  MX_VISIT_ENTITY(ObjCObjectType, strip_obj_c_kind_of_type_and_qualifieds, getVal331, setVal331, initVal331, StripObjCKindOfTypeAndQualifieds, Type, NthType, TypeUseSelector::STRIP_OBJ_C_KIND_OF_TYPE_AND_QUALIFIEDS)
  MX_EXIT_VISIT_ObjCObjectType
MX_END_VISIT_TYPE(ObjCObjectType)

#ifndef MX_ENTER_VISIT_ObjCInterfaceType
#  define MX_ENTER_VISIT_ObjCInterfaceType MX_ENTER_VISIT_ObjCObjectType
#endif
#ifndef MX_EXIT_VISIT_ObjCInterfaceType
#  define MX_EXIT_VISIT_ObjCInterfaceType MX_EXIT_VISIT_ObjCObjectType
#endif

MX_BEGIN_VISIT_TYPE(ObjCInterfaceType)
  MX_ENTER_VISIT_ObjCInterfaceType
  MX_VISIT_BASE(ObjCInterfaceType, ObjCObjectType)
  MX_VISIT_ENTITY(ObjCInterfaceType, declaration, getVal332, setVal332, initVal332, Declaration, ObjCInterfaceDecl, NthType, DeclUseSelector::DECLARATION)
  MX_EXIT_VISIT_ObjCInterfaceType
MX_END_VISIT_TYPE(ObjCInterfaceType)

#ifndef MX_ENTER_VISIT_ObjCObjectPointerType
#  define MX_ENTER_VISIT_ObjCObjectPointerType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ObjCObjectPointerType
#  define MX_EXIT_VISIT_ObjCObjectPointerType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(ObjCObjectPointerType)
  MX_ENTER_VISIT_ObjCObjectPointerType
  MX_VISIT_BASE(ObjCObjectPointerType, Type)
  MX_VISIT_ENTITY(ObjCObjectPointerType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(ObjCObjectPointerType, interface_declaration, getVal309, setVal309, initVal309, InterfaceDeclaration, ObjCInterfaceDecl, NthType, DeclUseSelector::INTERFACE_DECLARATION)
  MX_VISIT_ENTITY(ObjCObjectPointerType, interface_type, getVal315, setVal315, initVal315, InterfaceType, ObjCInterfaceType, NthType, TypeUseSelector::INTERFACE_TYPE)
  MX_VISIT_ENTITY(ObjCObjectPointerType, object_type, getVal317, setVal317, initVal317, ObjectType, ObjCObjectType, NthType, TypeUseSelector::OBJECT_TYPE)
  MX_VISIT_ENTITY(ObjCObjectPointerType, super_class_type, getVal331, setVal331, initVal331, SuperClassType, Type, NthType, TypeUseSelector::SUPER_CLASS_TYPE)
  MX_VISIT_ENTITY_LIST(ObjCObjectPointerType, type_arguments, getVal318, setVal318, initVal318, TypeArguments, Type, NthType)
  MX_VISIT_ENTITY_LIST(ObjCObjectPointerType, type_arguments_as_written, getVal319, setVal319, initVal319, TypeArgumentsAsWritten, Type, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_kind_of_type, getVal310, setVal310, initVal310, IsKindOfType, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_obj_c_id_or_class_type, getVal311, setVal311, initVal311, IsObjCIdOrClassType, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_specialized, getVal312, setVal312, initVal312, IsSpecialized, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_specialized_as_written, getVal313, setVal313, initVal313, IsSpecializedAsWritten, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_sugared, getVal320, setVal320, initVal320, IsSugared, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_unspecialized, getVal321, setVal321, initVal321, IsUnspecialized, bool, NthType)
  MX_VISIT_BOOL(ObjCObjectPointerType, is_unspecialized_as_written, getVal322, setVal322, initVal322, IsUnspecializedAsWritten, bool, NthType)
  MX_VISIT_ENTITY_LIST(ObjCObjectPointerType, qualifieds, getVal333, setVal333, initVal333, Qualifieds, ObjCProtocolDecl, NthType)
  MX_VISIT_ENTITY(ObjCObjectPointerType, strip_obj_c_kind_of_type_and_qualifieds, getVal332, setVal332, initVal332, StripObjCKindOfTypeAndQualifieds, ObjCObjectPointerType, NthType, TypeUseSelector::STRIP_OBJ_C_KIND_OF_TYPE_AND_QUALIFIEDS)
  MX_VISIT_ENTITY_LIST(ObjCObjectPointerType, protocols, getVal334, setVal334, initVal334, Protocols, ObjCProtocolDecl, NthType)
  MX_EXIT_VISIT_ObjCObjectPointerType
MX_END_VISIT_TYPE(ObjCObjectPointerType)

#ifndef MX_ENTER_VISIT_MemberPointerType
#  define MX_ENTER_VISIT_MemberPointerType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_MemberPointerType
#  define MX_EXIT_VISIT_MemberPointerType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(MemberPointerType)
  MX_ENTER_VISIT_MemberPointerType
  MX_VISIT_BASE(MemberPointerType, Type)
  MX_VISIT_ENTITY(MemberPointerType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(MemberPointerType, class_, getVal309, setVal309, initVal309, Class, Type, NthType, TypeUseSelector::CLASS_)
  MX_VISIT_ENTITY(MemberPointerType, most_recent_cxx_record_declaration, getVal315, setVal315, initVal315, MostRecentCXXRecordDeclaration, CXXRecordDecl, NthType, DeclUseSelector::MOST_RECENT_CXX_RECORD_DECLARATION)
  MX_VISIT_BOOL(MemberPointerType, is_member_data_pointer, getVal310, setVal310, initVal310, IsMemberDataPointer, bool, NthType)
  MX_VISIT_BOOL(MemberPointerType, is_member_function_pointer, getVal311, setVal311, initVal311, IsMemberFunctionPointer, bool, NthType)
  MX_VISIT_BOOL(MemberPointerType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_EXIT_VISIT_MemberPointerType
MX_END_VISIT_TYPE(MemberPointerType)

#ifndef MX_ENTER_VISIT_MatrixType
#  define MX_ENTER_VISIT_MatrixType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_MatrixType
#  define MX_EXIT_VISIT_MatrixType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(MatrixType)
  MX_ENTER_VISIT_MatrixType
  MX_VISIT_BASE(MatrixType, Type)
  MX_VISIT_ENTITY(MatrixType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(MatrixType, element_type, getVal309, setVal309, initVal309, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_BOOL(MatrixType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_MatrixType
MX_END_VISIT_TYPE(MatrixType)

#ifndef MX_ENTER_VISIT_DependentSizedMatrixType
#  define MX_ENTER_VISIT_DependentSizedMatrixType MX_ENTER_VISIT_MatrixType
#endif
#ifndef MX_EXIT_VISIT_DependentSizedMatrixType
#  define MX_EXIT_VISIT_DependentSizedMatrixType MX_EXIT_VISIT_MatrixType
#endif

MX_BEGIN_VISIT_TYPE(DependentSizedMatrixType)
  MX_ENTER_VISIT_DependentSizedMatrixType
  MX_VISIT_BASE(DependentSizedMatrixType, MatrixType)
  MX_VISIT_ENTITY(DependentSizedMatrixType, attribute_token, getVal315, setVal315, initVal315, AttributeToken, Token, NthType, TokenUseSelector::ATTRIBUTE_TOKEN)
  MX_VISIT_ENTITY(DependentSizedMatrixType, column_expression, getVal317, setVal317, initVal317, ColumnExpression, Expr, NthType, StmtUseSelector::COLUMN_EXPRESSION)
  MX_VISIT_ENTITY(DependentSizedMatrixType, row_expression, getVal331, setVal331, initVal331, RowExpression, Expr, NthType, StmtUseSelector::ROW_EXPRESSION)
  MX_EXIT_VISIT_DependentSizedMatrixType
MX_END_VISIT_TYPE(DependentSizedMatrixType)

#ifndef MX_ENTER_VISIT_ConstantMatrixType
#  define MX_ENTER_VISIT_ConstantMatrixType MX_ENTER_VISIT_MatrixType
#endif
#ifndef MX_EXIT_VISIT_ConstantMatrixType
#  define MX_EXIT_VISIT_ConstantMatrixType MX_EXIT_VISIT_MatrixType
#endif

MX_BEGIN_VISIT_TYPE(ConstantMatrixType)
  MX_ENTER_VISIT_ConstantMatrixType
  MX_VISIT_BASE(ConstantMatrixType, MatrixType)
  MX_EXIT_VISIT_ConstantMatrixType
MX_END_VISIT_TYPE(ConstantMatrixType)

#ifndef MX_ENTER_VISIT_MacroQualifiedType
#  define MX_ENTER_VISIT_MacroQualifiedType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_MacroQualifiedType
#  define MX_EXIT_VISIT_MacroQualifiedType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(MacroQualifiedType)
  MX_ENTER_VISIT_MacroQualifiedType
  MX_VISIT_BASE(MacroQualifiedType, Type)
  MX_VISIT_ENTITY(MacroQualifiedType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(MacroQualifiedType, modified_type, getVal309, setVal309, initVal309, ModifiedType, Type, NthType, TypeUseSelector::MODIFIED_TYPE)
  MX_VISIT_ENTITY(MacroQualifiedType, underlying_type, getVal315, setVal315, initVal315, UnderlyingType, Type, NthType, TypeUseSelector::UNDERLYING_TYPE)
  MX_VISIT_BOOL(MacroQualifiedType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_MacroQualifiedType
MX_END_VISIT_TYPE(MacroQualifiedType)

#ifndef MX_ENTER_VISIT_InjectedClassNameType
#  define MX_ENTER_VISIT_InjectedClassNameType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_InjectedClassNameType
#  define MX_EXIT_VISIT_InjectedClassNameType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(InjectedClassNameType)
  MX_ENTER_VISIT_InjectedClassNameType
  MX_VISIT_BASE(InjectedClassNameType, Type)
  MX_VISIT_ENTITY(InjectedClassNameType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(InjectedClassNameType, declaration, getVal309, setVal309, initVal309, Declaration, CXXRecordDecl, NthType, DeclUseSelector::DECLARATION)
  MX_VISIT_ENTITY(InjectedClassNameType, injected_specialization_type, getVal315, setVal315, initVal315, InjectedSpecializationType, Type, NthType, TypeUseSelector::INJECTED_SPECIALIZATION_TYPE)
  MX_VISIT_ENTITY(InjectedClassNameType, injected_tst, getVal317, setVal317, initVal317, InjectedTST, TemplateSpecializationType, NthType, TypeUseSelector::INJECTED_TST)
  MX_VISIT_BOOL(InjectedClassNameType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_InjectedClassNameType
MX_END_VISIT_TYPE(InjectedClassNameType)

#ifndef MX_ENTER_VISIT_FunctionType
#  define MX_ENTER_VISIT_FunctionType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_FunctionType
#  define MX_EXIT_VISIT_FunctionType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(FunctionType)
  MX_ENTER_VISIT_FunctionType
  MX_VISIT_BASE(FunctionType, Type)
  MX_VISIT_ENUM(FunctionType, call_conv, getVal335, setVal335, initVal335, CallConv, CallingConv, NthType)
  MX_VISIT_ENTITY(FunctionType, call_result_type, getVal308, setVal308, initVal308, CallResultType, Type, NthType, TypeUseSelector::CALL_RESULT_TYPE)
  MX_VISIT_BOOL(FunctionType, cmse_ns_call_attribute, getVal310, setVal310, initVal310, CmseNSCallAttribute, bool, NthType)
  MX_VISIT_BOOL(FunctionType, has_reg_parm, getVal311, setVal311, initVal311, HasRegParm, bool, NthType)
  MX_VISIT_BOOL(FunctionType, no_return_attribute, getVal312, setVal312, initVal312, NoReturnAttribute, bool, NthType)
  MX_VISIT_ENTITY(FunctionType, return_type, getVal309, setVal309, initVal309, ReturnType, Type, NthType, TypeUseSelector::RETURN_TYPE)
  MX_VISIT_BOOL(FunctionType, is_const, getVal313, setVal313, initVal313, IsConst, bool, NthType)
  MX_VISIT_BOOL(FunctionType, is_restrict, getVal320, setVal320, initVal320, IsRestrict, bool, NthType)
  MX_VISIT_BOOL(FunctionType, is_volatile, getVal321, setVal321, initVal321, IsVolatile, bool, NthType)
  MX_EXIT_VISIT_FunctionType
MX_END_VISIT_TYPE(FunctionType)

#ifndef MX_ENTER_VISIT_FunctionProtoType
#  define MX_ENTER_VISIT_FunctionProtoType MX_ENTER_VISIT_FunctionType
#endif
#ifndef MX_EXIT_VISIT_FunctionProtoType
#  define MX_EXIT_VISIT_FunctionProtoType MX_EXIT_VISIT_FunctionType
#endif

MX_BEGIN_VISIT_TYPE(FunctionProtoType)
  MX_ENTER_VISIT_FunctionProtoType
  MX_VISIT_BASE(FunctionProtoType, FunctionType)
  MX_VISIT_OPTIONAL_ENUM(FunctionProtoType, can_throw, getVal336, setVal336, initVal336, CanThrow, CanThrowResult, NthType)
  MX_VISIT_ENTITY(FunctionProtoType, desugar, getVal315, setVal315, initVal315, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY_LIST(FunctionProtoType, exceptions, getVal318, setVal318, initVal318, Exceptions, Type, NthType)
  MX_VISIT_ENTITY(FunctionProtoType, ellipsis_token, getVal317, setVal317, initVal317, EllipsisToken, Token, NthType, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(FunctionProtoType, exception_spec_declaration, getVal331, setVal331, initVal331, ExceptionSpecDeclaration, FunctionDecl, NthType, DeclUseSelector::EXCEPTION_SPEC_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(FunctionProtoType, exception_spec_template, getVal332, setVal332, initVal332, ExceptionSpecTemplate, FunctionDecl, NthType, DeclUseSelector::EXCEPTION_SPEC_TEMPLATE)
  MX_VISIT_ENUM(FunctionProtoType, exception_spec_type, getVal337, setVal337, initVal337, ExceptionSpecType, ExceptionSpecificationType, NthType)
  MX_VISIT_OPTIONAL_ENTITY(FunctionProtoType, noexcept_expression, getVal338, setVal338, initVal338, NoexceptExpression, Expr, NthType, StmtUseSelector::NOEXCEPT_EXPRESSION)
  MX_VISIT_ENTITY_LIST(FunctionProtoType, parameter_types, getVal319, setVal319, initVal319, ParameterTypes, Type, NthType)
  MX_VISIT_ENUM(FunctionProtoType, reference_qualifier, getVal339, setVal339, initVal339, ReferenceQualifier, RefQualifierKind, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_dependent_exception_spec, getVal326, setVal326, initVal326, HasDependentExceptionSpec, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_dynamic_exception_spec, getVal327, setVal327, initVal327, HasDynamicExceptionSpec, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_exception_spec, getVal328, setVal328, initVal328, HasExceptionSpec, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_ext_parameter_infos, getVal329, setVal329, initVal329, HasExtParameterInfos, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_instantiation_dependent_exception_spec, getVal330, setVal330, initVal330, HasInstantiationDependentExceptionSpec, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_noexcept_exception_spec, getVal340, setVal340, initVal340, HasNoexceptExceptionSpec, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, has_trailing_return, getVal341, setVal341, initVal341, HasTrailingReturn, bool, NthType)
  MX_VISIT_OPTIONAL_BOOL(FunctionProtoType, is_nothrow, getVal342, setVal342, initVal342, IsNothrow, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, is_sugared, getVal344, setVal344, initVal344, IsSugared, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, is_template_variadic, getVal345, setVal345, initVal345, IsTemplateVariadic, bool, NthType)
  MX_VISIT_BOOL(FunctionProtoType, is_variadic, getVal346, setVal346, initVal346, IsVariadic, bool, NthType)
  MX_VISIT_ENTITY_LIST(FunctionProtoType, exception_types, getVal333, setVal333, initVal333, ExceptionTypes, Type, NthType)
  MX_EXIT_VISIT_FunctionProtoType
MX_END_VISIT_TYPE(FunctionProtoType)

#ifndef MX_ENTER_VISIT_FunctionNoProtoType
#  define MX_ENTER_VISIT_FunctionNoProtoType MX_ENTER_VISIT_FunctionType
#endif
#ifndef MX_EXIT_VISIT_FunctionNoProtoType
#  define MX_EXIT_VISIT_FunctionNoProtoType MX_EXIT_VISIT_FunctionType
#endif

MX_BEGIN_VISIT_TYPE(FunctionNoProtoType)
  MX_ENTER_VISIT_FunctionNoProtoType
  MX_VISIT_BASE(FunctionNoProtoType, FunctionType)
  MX_VISIT_ENTITY(FunctionNoProtoType, desugar, getVal315, setVal315, initVal315, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(FunctionNoProtoType, is_sugared, getVal322, setVal322, initVal322, IsSugared, bool, NthType)
  MX_EXIT_VISIT_FunctionNoProtoType
MX_END_VISIT_TYPE(FunctionNoProtoType)

#ifndef MX_ENTER_VISIT_DependentVectorType
#  define MX_ENTER_VISIT_DependentVectorType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_DependentVectorType
#  define MX_EXIT_VISIT_DependentVectorType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(DependentVectorType)
  MX_ENTER_VISIT_DependentVectorType
  MX_VISIT_BASE(DependentVectorType, Type)
  MX_VISIT_ENTITY(DependentVectorType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(DependentVectorType, attribute_token, getVal309, setVal309, initVal309, AttributeToken, Token, NthType, TokenUseSelector::ATTRIBUTE_TOKEN)
  MX_VISIT_ENTITY(DependentVectorType, element_type, getVal315, setVal315, initVal315, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_ENTITY(DependentVectorType, size_expression, getVal317, setVal317, initVal317, SizeExpression, Expr, NthType, StmtUseSelector::SIZE_EXPRESSION)
  MX_VISIT_ENUM(DependentVectorType, vector_kind, getVal335, setVal335, initVal335, VectorKind, VectorTypeVectorKind, NthType)
  MX_VISIT_BOOL(DependentVectorType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DependentVectorType
MX_END_VISIT_TYPE(DependentVectorType)

#ifndef MX_ENTER_VISIT_DependentSizedExtVectorType
#  define MX_ENTER_VISIT_DependentSizedExtVectorType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_DependentSizedExtVectorType
#  define MX_EXIT_VISIT_DependentSizedExtVectorType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(DependentSizedExtVectorType)
  MX_ENTER_VISIT_DependentSizedExtVectorType
  MX_VISIT_BASE(DependentSizedExtVectorType, Type)
  MX_VISIT_ENTITY(DependentSizedExtVectorType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(DependentSizedExtVectorType, attribute_token, getVal309, setVal309, initVal309, AttributeToken, Token, NthType, TokenUseSelector::ATTRIBUTE_TOKEN)
  MX_VISIT_ENTITY(DependentSizedExtVectorType, element_type, getVal315, setVal315, initVal315, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_ENTITY(DependentSizedExtVectorType, size_expression, getVal317, setVal317, initVal317, SizeExpression, Expr, NthType, StmtUseSelector::SIZE_EXPRESSION)
  MX_VISIT_BOOL(DependentSizedExtVectorType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DependentSizedExtVectorType
MX_END_VISIT_TYPE(DependentSizedExtVectorType)

#ifndef MX_ENTER_VISIT_DependentBitIntType
#  define MX_ENTER_VISIT_DependentBitIntType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_DependentBitIntType
#  define MX_EXIT_VISIT_DependentBitIntType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(DependentBitIntType)
  MX_ENTER_VISIT_DependentBitIntType
  MX_VISIT_BASE(DependentBitIntType, Type)
  MX_VISIT_ENTITY(DependentBitIntType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(DependentBitIntType, num_bits_expression, getVal309, setVal309, initVal309, NumBitsExpression, Expr, NthType, StmtUseSelector::NUM_BITS_EXPRESSION)
  MX_VISIT_BOOL(DependentBitIntType, is_signed, getVal310, setVal310, initVal310, IsSigned, bool, NthType)
  MX_VISIT_BOOL(DependentBitIntType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_VISIT_BOOL(DependentBitIntType, is_unsigned, getVal312, setVal312, initVal312, IsUnsigned, bool, NthType)
  MX_EXIT_VISIT_DependentBitIntType
MX_END_VISIT_TYPE(DependentBitIntType)

#ifndef MX_ENTER_VISIT_DependentAddressSpaceType
#  define MX_ENTER_VISIT_DependentAddressSpaceType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_DependentAddressSpaceType
#  define MX_EXIT_VISIT_DependentAddressSpaceType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(DependentAddressSpaceType)
  MX_ENTER_VISIT_DependentAddressSpaceType
  MX_VISIT_BASE(DependentAddressSpaceType, Type)
  MX_VISIT_ENTITY(DependentAddressSpaceType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(DependentAddressSpaceType, addr_space_expression, getVal309, setVal309, initVal309, AddrSpaceExpression, Expr, NthType, StmtUseSelector::ADDR_SPACE_EXPRESSION)
  MX_VISIT_ENTITY(DependentAddressSpaceType, attribute_token, getVal315, setVal315, initVal315, AttributeToken, Token, NthType, TokenUseSelector::ATTRIBUTE_TOKEN)
  MX_VISIT_BOOL(DependentAddressSpaceType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DependentAddressSpaceType
MX_END_VISIT_TYPE(DependentAddressSpaceType)

#ifndef MX_ENTER_VISIT_DeducedType
#  define MX_ENTER_VISIT_DeducedType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_DeducedType
#  define MX_EXIT_VISIT_DeducedType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(DeducedType)
  MX_ENTER_VISIT_DeducedType
  MX_VISIT_BASE(DeducedType, Type)
  MX_VISIT_ENTITY(DeducedType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_OPTIONAL_ENTITY(DeducedType, resolved_type, getVal309, setVal309, initVal309, ResolvedType, Type, NthType, TypeUseSelector::RESOLVED_TYPE)
  MX_VISIT_BOOL(DeducedType, is_deduced, getVal311, setVal311, initVal311, IsDeduced, bool, NthType)
  MX_VISIT_BOOL(DeducedType, is_sugared, getVal312, setVal312, initVal312, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DeducedType
MX_END_VISIT_TYPE(DeducedType)

#ifndef MX_ENTER_VISIT_DeducedTemplateSpecializationType
#  define MX_ENTER_VISIT_DeducedTemplateSpecializationType MX_ENTER_VISIT_DeducedType
#endif
#ifndef MX_EXIT_VISIT_DeducedTemplateSpecializationType
#  define MX_EXIT_VISIT_DeducedTemplateSpecializationType MX_EXIT_VISIT_DeducedType
#endif

MX_BEGIN_VISIT_TYPE(DeducedTemplateSpecializationType)
  MX_ENTER_VISIT_DeducedTemplateSpecializationType
  MX_VISIT_BASE(DeducedTemplateSpecializationType, DeducedType)
  MX_EXIT_VISIT_DeducedTemplateSpecializationType
MX_END_VISIT_TYPE(DeducedTemplateSpecializationType)

#ifndef MX_ENTER_VISIT_AutoType
#  define MX_ENTER_VISIT_AutoType MX_ENTER_VISIT_DeducedType
#endif
#ifndef MX_EXIT_VISIT_AutoType
#  define MX_EXIT_VISIT_AutoType MX_EXIT_VISIT_DeducedType
#endif

MX_BEGIN_VISIT_TYPE(AutoType)
  MX_ENTER_VISIT_AutoType
  MX_VISIT_BASE(AutoType, DeducedType)
  MX_VISIT_ENUM(AutoType, keyword, getVal335, setVal335, initVal335, Keyword, AutoTypeKeyword, NthType)
  MX_VISIT_PSEUDO_LIST(AutoType, type_constraint_arguments, getVal314, setVal314, initVal314, TypeConstraintArguments, TemplateArgument, NthType)
  MX_VISIT_OPTIONAL_ENTITY(AutoType, type_constraint_concept, getVal315, setVal315, initVal315, TypeConstraintConcept, ConceptDecl, NthType, DeclUseSelector::TYPE_CONSTRAINT_CONCEPT)
  MX_VISIT_BOOL(AutoType, is_constrained, getVal320, setVal320, initVal320, IsConstrained, bool, NthType)
  MX_VISIT_BOOL(AutoType, is_decltype_auto, getVal321, setVal321, initVal321, IsDecltypeAuto, bool, NthType)
  MX_EXIT_VISIT_AutoType
MX_END_VISIT_TYPE(AutoType)

#ifndef MX_ENTER_VISIT_DecltypeType
#  define MX_ENTER_VISIT_DecltypeType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_DecltypeType
#  define MX_EXIT_VISIT_DecltypeType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(DecltypeType)
  MX_ENTER_VISIT_DecltypeType
  MX_VISIT_BASE(DecltypeType, Type)
  MX_VISIT_ENTITY(DecltypeType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(DecltypeType, underlying_expression, getVal309, setVal309, initVal309, UnderlyingExpression, Expr, NthType, StmtUseSelector::UNDERLYING_EXPRESSION)
  MX_VISIT_ENTITY(DecltypeType, underlying_type, getVal315, setVal315, initVal315, UnderlyingType, Type, NthType, TypeUseSelector::UNDERLYING_TYPE)
  MX_VISIT_BOOL(DecltypeType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DecltypeType
MX_END_VISIT_TYPE(DecltypeType)

#ifndef MX_ENTER_VISIT_ComplexType
#  define MX_ENTER_VISIT_ComplexType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ComplexType
#  define MX_EXIT_VISIT_ComplexType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(ComplexType)
  MX_ENTER_VISIT_ComplexType
  MX_VISIT_BASE(ComplexType, Type)
  MX_VISIT_ENTITY(ComplexType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(ComplexType, element_type, getVal309, setVal309, initVal309, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_BOOL(ComplexType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_ComplexType
MX_END_VISIT_TYPE(ComplexType)

#ifndef MX_ENTER_VISIT_BuiltinType
#  define MX_ENTER_VISIT_BuiltinType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_BuiltinType
#  define MX_EXIT_VISIT_BuiltinType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(BuiltinType)
  MX_ENTER_VISIT_BuiltinType
  MX_VISIT_BASE(BuiltinType, Type)
  MX_VISIT_ENTITY(BuiltinType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENUM(BuiltinType, builtin_kind, getVal335, setVal335, initVal335, Kind, BuiltinTypeKind, NthType)
  MX_VISIT_BOOL(BuiltinType, is_floating_point, getVal310, setVal310, initVal310, IsFloatingPoint, bool, NthType)
  MX_VISIT_BOOL(BuiltinType, is_integer, getVal311, setVal311, initVal311, IsInteger, bool, NthType)
  MX_VISIT_BOOL(BuiltinType, is_signed_integer, getVal312, setVal312, initVal312, IsSignedInteger, bool, NthType)
  MX_VISIT_BOOL(BuiltinType, is_sugared, getVal313, setVal313, initVal313, IsSugared, bool, NthType)
  MX_VISIT_BOOL(BuiltinType, is_unsigned_integer, getVal320, setVal320, initVal320, IsUnsignedInteger, bool, NthType)
  MX_EXIT_VISIT_BuiltinType
MX_END_VISIT_TYPE(BuiltinType)

#ifndef MX_ENTER_VISIT_BlockPointerType
#  define MX_ENTER_VISIT_BlockPointerType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_BlockPointerType
#  define MX_EXIT_VISIT_BlockPointerType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(BlockPointerType)
  MX_ENTER_VISIT_BlockPointerType
  MX_VISIT_BASE(BlockPointerType, Type)
  MX_VISIT_ENTITY(BlockPointerType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(BlockPointerType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_BlockPointerType
MX_END_VISIT_TYPE(BlockPointerType)

#ifndef MX_ENTER_VISIT_BitIntType
#  define MX_ENTER_VISIT_BitIntType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_BitIntType
#  define MX_EXIT_VISIT_BitIntType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(BitIntType)
  MX_ENTER_VISIT_BitIntType
  MX_VISIT_BASE(BitIntType, Type)
  MX_VISIT_ENTITY(BitIntType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(BitIntType, is_signed, getVal310, setVal310, initVal310, IsSigned, bool, NthType)
  MX_VISIT_BOOL(BitIntType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_VISIT_BOOL(BitIntType, is_unsigned, getVal312, setVal312, initVal312, IsUnsigned, bool, NthType)
  MX_EXIT_VISIT_BitIntType
MX_END_VISIT_TYPE(BitIntType)

#ifndef MX_ENTER_VISIT_AttributedType
#  define MX_ENTER_VISIT_AttributedType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_AttributedType
#  define MX_EXIT_VISIT_AttributedType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(AttributedType)
  MX_ENTER_VISIT_AttributedType
  MX_VISIT_BASE(AttributedType, Type)
  MX_VISIT_ENTITY(AttributedType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENUM(AttributedType, attribute_kind, getVal347, setVal347, initVal347, AttributeKind, AttributeKind, NthType)
  MX_VISIT_ENTITY(AttributedType, equivalent_type, getVal309, setVal309, initVal309, EquivalentType, Type, NthType, TypeUseSelector::EQUIVALENT_TYPE)
  MX_VISIT_OPTIONAL_ENUM(AttributedType, immediate_nullability, getVal335, setVal335, initVal335, ImmediateNullability, NullabilityKind, NthType)
  MX_VISIT_ENTITY(AttributedType, modified_type, getVal315, setVal315, initVal315, ModifiedType, Type, NthType, TypeUseSelector::MODIFIED_TYPE)
  MX_VISIT_BOOL(AttributedType, is_calling_conv, getVal311, setVal311, initVal311, IsCallingConv, bool, NthType)
  MX_VISIT_BOOL(AttributedType, is_ms_type_spec, getVal312, setVal312, initVal312, IsMSTypeSpec, bool, NthType)
  MX_VISIT_BOOL(AttributedType, is_qualifier, getVal313, setVal313, initVal313, IsQualifier, bool, NthType)
  MX_VISIT_BOOL(AttributedType, is_sugared, getVal320, setVal320, initVal320, IsSugared, bool, NthType)
  MX_EXIT_VISIT_AttributedType
MX_END_VISIT_TYPE(AttributedType)

#ifndef MX_ENTER_VISIT_AtomicType
#  define MX_ENTER_VISIT_AtomicType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_AtomicType
#  define MX_EXIT_VISIT_AtomicType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(AtomicType)
  MX_ENTER_VISIT_AtomicType
  MX_VISIT_BASE(AtomicType, Type)
  MX_VISIT_ENTITY(AtomicType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(AtomicType, value_type, getVal309, setVal309, initVal309, ValueType, Type, NthType, TypeUseSelector::VALUE_TYPE)
  MX_VISIT_BOOL(AtomicType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_AtomicType
MX_END_VISIT_TYPE(AtomicType)

#ifndef MX_ENTER_VISIT_ArrayType
#  define MX_ENTER_VISIT_ArrayType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_ArrayType
#  define MX_EXIT_VISIT_ArrayType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(ArrayType)
  MX_ENTER_VISIT_ArrayType
  MX_VISIT_BASE(ArrayType, Type)
  MX_VISIT_ENTITY(ArrayType, element_type, getVal308, setVal308, initVal308, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_ENUM(ArrayType, size_modifier, getVal335, setVal335, initVal335, SizeModifier, ArrayTypeArraySizeModifier, NthType)
  MX_EXIT_VISIT_ArrayType
MX_END_VISIT_TYPE(ArrayType)

#ifndef MX_ENTER_VISIT_VariableArrayType
#  define MX_ENTER_VISIT_VariableArrayType MX_ENTER_VISIT_ArrayType
#endif
#ifndef MX_EXIT_VISIT_VariableArrayType
#  define MX_EXIT_VISIT_VariableArrayType MX_EXIT_VISIT_ArrayType
#endif

MX_BEGIN_VISIT_TYPE(VariableArrayType)
  MX_ENTER_VISIT_VariableArrayType
  MX_VISIT_BASE(VariableArrayType, ArrayType)
  MX_VISIT_ENTITY(VariableArrayType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(VariableArrayType, l_bracket_token, getVal331, setVal331, initVal331, LBracketToken, Token, NthType, TokenUseSelector::L_BRACKET_TOKEN)
  MX_VISIT_ENTITY(VariableArrayType, r_bracket_token, getVal332, setVal332, initVal332, RBracketToken, Token, NthType, TokenUseSelector::R_BRACKET_TOKEN)
  MX_VISIT_ENTITY(VariableArrayType, size_expression, getVal338, setVal338, initVal338, SizeExpression, Expr, NthType, StmtUseSelector::SIZE_EXPRESSION)
  MX_VISIT_BOOL(VariableArrayType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_VariableArrayType
MX_END_VISIT_TYPE(VariableArrayType)

#ifndef MX_ENTER_VISIT_IncompleteArrayType
#  define MX_ENTER_VISIT_IncompleteArrayType MX_ENTER_VISIT_ArrayType
#endif
#ifndef MX_EXIT_VISIT_IncompleteArrayType
#  define MX_EXIT_VISIT_IncompleteArrayType MX_EXIT_VISIT_ArrayType
#endif

MX_BEGIN_VISIT_TYPE(IncompleteArrayType)
  MX_ENTER_VISIT_IncompleteArrayType
  MX_VISIT_BASE(IncompleteArrayType, ArrayType)
  MX_VISIT_ENTITY(IncompleteArrayType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(IncompleteArrayType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_IncompleteArrayType
MX_END_VISIT_TYPE(IncompleteArrayType)

#ifndef MX_ENTER_VISIT_DependentSizedArrayType
#  define MX_ENTER_VISIT_DependentSizedArrayType MX_ENTER_VISIT_ArrayType
#endif
#ifndef MX_EXIT_VISIT_DependentSizedArrayType
#  define MX_EXIT_VISIT_DependentSizedArrayType MX_EXIT_VISIT_ArrayType
#endif

MX_BEGIN_VISIT_TYPE(DependentSizedArrayType)
  MX_ENTER_VISIT_DependentSizedArrayType
  MX_VISIT_BASE(DependentSizedArrayType, ArrayType)
  MX_VISIT_ENTITY(DependentSizedArrayType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(DependentSizedArrayType, l_bracket_token, getVal331, setVal331, initVal331, LBracketToken, Token, NthType, TokenUseSelector::L_BRACKET_TOKEN)
  MX_VISIT_ENTITY(DependentSizedArrayType, r_bracket_token, getVal332, setVal332, initVal332, RBracketToken, Token, NthType, TokenUseSelector::R_BRACKET_TOKEN)
  MX_VISIT_ENTITY(DependentSizedArrayType, size_expression, getVal338, setVal338, initVal338, SizeExpression, Expr, NthType, StmtUseSelector::SIZE_EXPRESSION)
  MX_VISIT_BOOL(DependentSizedArrayType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DependentSizedArrayType
MX_END_VISIT_TYPE(DependentSizedArrayType)

#ifndef MX_ENTER_VISIT_ConstantArrayType
#  define MX_ENTER_VISIT_ConstantArrayType MX_ENTER_VISIT_ArrayType
#endif
#ifndef MX_EXIT_VISIT_ConstantArrayType
#  define MX_EXIT_VISIT_ConstantArrayType MX_EXIT_VISIT_ArrayType
#endif

MX_BEGIN_VISIT_TYPE(ConstantArrayType)
  MX_ENTER_VISIT_ConstantArrayType
  MX_VISIT_BASE(ConstantArrayType, ArrayType)
  MX_VISIT_ENTITY(ConstantArrayType, desugar, getVal309, setVal309, initVal309, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_OPTIONAL_ENTITY(ConstantArrayType, size_expression, getVal315, setVal315, initVal315, SizeExpression, Expr, NthType, StmtUseSelector::SIZE_EXPRESSION)
  MX_VISIT_BOOL(ConstantArrayType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_EXIT_VISIT_ConstantArrayType
MX_END_VISIT_TYPE(ConstantArrayType)

#ifndef MX_ENTER_VISIT_AdjustedType
#  define MX_ENTER_VISIT_AdjustedType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_AdjustedType
#  define MX_EXIT_VISIT_AdjustedType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(AdjustedType)
  MX_ENTER_VISIT_AdjustedType
  MX_VISIT_BASE(AdjustedType, Type)
  MX_VISIT_ENTITY(AdjustedType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(AdjustedType, resolved_type, getVal309, setVal309, initVal309, ResolvedType, Type, NthType, TypeUseSelector::RESOLVED_TYPE)
  MX_VISIT_ENTITY(AdjustedType, original_type, getVal315, setVal315, initVal315, OriginalType, Type, NthType, TypeUseSelector::ORIGINAL_TYPE)
  MX_VISIT_BOOL(AdjustedType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_AdjustedType
MX_END_VISIT_TYPE(AdjustedType)

#ifndef MX_ENTER_VISIT_DecayedType
#  define MX_ENTER_VISIT_DecayedType MX_ENTER_VISIT_AdjustedType
#endif
#ifndef MX_EXIT_VISIT_DecayedType
#  define MX_EXIT_VISIT_DecayedType MX_EXIT_VISIT_AdjustedType
#endif

MX_BEGIN_VISIT_TYPE(DecayedType)
  MX_ENTER_VISIT_DecayedType
  MX_VISIT_BASE(DecayedType, AdjustedType)
  MX_EXIT_VISIT_DecayedType
MX_END_VISIT_TYPE(DecayedType)

#ifndef MX_ENTER_VISIT_TypeWithKeyword
#  define MX_ENTER_VISIT_TypeWithKeyword MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TypeWithKeyword
#  define MX_EXIT_VISIT_TypeWithKeyword MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_ABSTRACT_TYPE(TypeWithKeyword)
  MX_ENTER_VISIT_TypeWithKeyword
  MX_VISIT_BASE(TypeWithKeyword, Type)
  MX_VISIT_ENUM(TypeWithKeyword, keyword, getVal335, setVal335, initVal335, Keyword, ElaboratedTypeKeyword, NthType)
  MX_EXIT_VISIT_TypeWithKeyword
MX_END_VISIT_TYPE(TypeWithKeyword)

#ifndef MX_ENTER_VISIT_ElaboratedType
#  define MX_ENTER_VISIT_ElaboratedType MX_ENTER_VISIT_TypeWithKeyword
#endif
#ifndef MX_EXIT_VISIT_ElaboratedType
#  define MX_EXIT_VISIT_ElaboratedType MX_EXIT_VISIT_TypeWithKeyword
#endif

MX_BEGIN_VISIT_TYPE(ElaboratedType)
  MX_ENTER_VISIT_ElaboratedType
  MX_VISIT_BASE(ElaboratedType, TypeWithKeyword)
  MX_VISIT_ENTITY(ElaboratedType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(ElaboratedType, named_type, getVal309, setVal309, initVal309, NamedType, Type, NthType, TypeUseSelector::NAMED_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(ElaboratedType, owned_tag_declaration, getVal315, setVal315, initVal315, OwnedTagDeclaration, TagDecl, NthType, DeclUseSelector::OWNED_TAG_DECLARATION)
  MX_VISIT_BOOL(ElaboratedType, is_sugared, getVal311, setVal311, initVal311, IsSugared, bool, NthType)
  MX_EXIT_VISIT_ElaboratedType
MX_END_VISIT_TYPE(ElaboratedType)

#ifndef MX_ENTER_VISIT_DependentTemplateSpecializationType
#  define MX_ENTER_VISIT_DependentTemplateSpecializationType MX_ENTER_VISIT_TypeWithKeyword
#endif
#ifndef MX_EXIT_VISIT_DependentTemplateSpecializationType
#  define MX_EXIT_VISIT_DependentTemplateSpecializationType MX_EXIT_VISIT_TypeWithKeyword
#endif

MX_BEGIN_VISIT_TYPE(DependentTemplateSpecializationType)
  MX_ENTER_VISIT_DependentTemplateSpecializationType
  MX_VISIT_BASE(DependentTemplateSpecializationType, TypeWithKeyword)
  MX_VISIT_ENTITY(DependentTemplateSpecializationType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(DependentTemplateSpecializationType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_VISIT_PSEUDO_LIST(DependentTemplateSpecializationType, template_arguments, getVal314, setVal314, initVal314, TemplateArguments, TemplateArgument, NthType)
  MX_EXIT_VISIT_DependentTemplateSpecializationType
MX_END_VISIT_TYPE(DependentTemplateSpecializationType)

#ifndef MX_ENTER_VISIT_DependentNameType
#  define MX_ENTER_VISIT_DependentNameType MX_ENTER_VISIT_TypeWithKeyword
#endif
#ifndef MX_EXIT_VISIT_DependentNameType
#  define MX_EXIT_VISIT_DependentNameType MX_EXIT_VISIT_TypeWithKeyword
#endif

MX_BEGIN_VISIT_TYPE(DependentNameType)
  MX_ENTER_VISIT_DependentNameType
  MX_VISIT_BASE(DependentNameType, TypeWithKeyword)
  MX_VISIT_ENTITY(DependentNameType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_BOOL(DependentNameType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_DependentNameType
MX_END_VISIT_TYPE(DependentNameType)

#ifndef MX_ENTER_VISIT_VectorType
#  define MX_ENTER_VISIT_VectorType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_VectorType
#  define MX_EXIT_VISIT_VectorType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(VectorType)
  MX_ENTER_VISIT_VectorType
  MX_VISIT_BASE(VectorType, Type)
  MX_VISIT_ENTITY(VectorType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(VectorType, element_type, getVal309, setVal309, initVal309, ElementType, Type, NthType, TypeUseSelector::ELEMENT_TYPE)
  MX_VISIT_ENUM(VectorType, vector_kind, getVal335, setVal335, initVal335, VectorKind, VectorTypeVectorKind, NthType)
  MX_VISIT_BOOL(VectorType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_VectorType
MX_END_VISIT_TYPE(VectorType)

#ifndef MX_ENTER_VISIT_ExtVectorType
#  define MX_ENTER_VISIT_ExtVectorType MX_ENTER_VISIT_VectorType
#endif
#ifndef MX_EXIT_VISIT_ExtVectorType
#  define MX_EXIT_VISIT_ExtVectorType MX_EXIT_VISIT_VectorType
#endif

MX_BEGIN_VISIT_TYPE(ExtVectorType)
  MX_ENTER_VISIT_ExtVectorType
  MX_VISIT_BASE(ExtVectorType, VectorType)
  MX_EXIT_VISIT_ExtVectorType
MX_END_VISIT_TYPE(ExtVectorType)

#ifndef MX_ENTER_VISIT_UsingType
#  define MX_ENTER_VISIT_UsingType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_UsingType
#  define MX_EXIT_VISIT_UsingType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(UsingType)
  MX_ENTER_VISIT_UsingType
  MX_VISIT_BASE(UsingType, Type)
  MX_VISIT_ENTITY(UsingType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(UsingType, found_declaration, getVal309, setVal309, initVal309, FoundDeclaration, UsingShadowDecl, NthType, DeclUseSelector::FOUND_DECLARATION)
  MX_VISIT_ENTITY(UsingType, underlying_type, getVal315, setVal315, initVal315, UnderlyingType, Type, NthType, TypeUseSelector::UNDERLYING_TYPE)
  MX_VISIT_BOOL(UsingType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_UsingType
MX_END_VISIT_TYPE(UsingType)

#ifndef MX_ENTER_VISIT_UnresolvedUsingType
#  define MX_ENTER_VISIT_UnresolvedUsingType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_UnresolvedUsingType
#  define MX_EXIT_VISIT_UnresolvedUsingType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(UnresolvedUsingType)
  MX_ENTER_VISIT_UnresolvedUsingType
  MX_VISIT_BASE(UnresolvedUsingType, Type)
  MX_VISIT_ENTITY(UnresolvedUsingType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(UnresolvedUsingType, declaration, getVal309, setVal309, initVal309, Declaration, UnresolvedUsingTypenameDecl, NthType, DeclUseSelector::DECLARATION)
  MX_VISIT_BOOL(UnresolvedUsingType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_UnresolvedUsingType
MX_END_VISIT_TYPE(UnresolvedUsingType)

#ifndef MX_ENTER_VISIT_UnaryTransformType
#  define MX_ENTER_VISIT_UnaryTransformType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_UnaryTransformType
#  define MX_EXIT_VISIT_UnaryTransformType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(UnaryTransformType)
  MX_ENTER_VISIT_UnaryTransformType
  MX_VISIT_BASE(UnaryTransformType, Type)
  MX_VISIT_ENTITY(UnaryTransformType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(UnaryTransformType, base_type, getVal309, setVal309, initVal309, BaseType, Type, NthType, TypeUseSelector::BASE_TYPE)
  MX_VISIT_ENUM(UnaryTransformType, utt_kind, getVal335, setVal335, initVal335, UTTKind, UnaryTransformTypeUTTKind, NthType)
  MX_VISIT_ENTITY(UnaryTransformType, underlying_type, getVal315, setVal315, initVal315, UnderlyingType, Type, NthType, TypeUseSelector::UNDERLYING_TYPE)
  MX_VISIT_BOOL(UnaryTransformType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_UnaryTransformType
MX_END_VISIT_TYPE(UnaryTransformType)

#ifndef MX_ENTER_VISIT_TypedefType
#  define MX_ENTER_VISIT_TypedefType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TypedefType
#  define MX_EXIT_VISIT_TypedefType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(TypedefType)
  MX_ENTER_VISIT_TypedefType
  MX_VISIT_BASE(TypedefType, Type)
  MX_VISIT_ENTITY(TypedefType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(TypedefType, declaration, getVal309, setVal309, initVal309, Declaration, TypedefNameDecl, NthType, DeclUseSelector::DECLARATION)
  MX_VISIT_BOOL(TypedefType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_TypedefType
MX_END_VISIT_TYPE(TypedefType)

#ifndef MX_ENTER_VISIT_TypeOfType
#  define MX_ENTER_VISIT_TypeOfType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TypeOfType
#  define MX_EXIT_VISIT_TypeOfType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(TypeOfType)
  MX_ENTER_VISIT_TypeOfType
  MX_VISIT_BASE(TypeOfType, Type)
  MX_VISIT_ENTITY(TypeOfType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(TypeOfType, underlying_type, getVal309, setVal309, initVal309, UnderlyingType, Type, NthType, TypeUseSelector::UNDERLYING_TYPE)
  MX_VISIT_BOOL(TypeOfType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_TypeOfType
MX_END_VISIT_TYPE(TypeOfType)

#ifndef MX_ENTER_VISIT_TypeOfExprType
#  define MX_ENTER_VISIT_TypeOfExprType MX_ENTER_VISIT_Type
#endif
#ifndef MX_EXIT_VISIT_TypeOfExprType
#  define MX_EXIT_VISIT_TypeOfExprType MX_EXIT_VISIT_Type
#endif

MX_BEGIN_VISIT_TYPE(TypeOfExprType)
  MX_ENTER_VISIT_TypeOfExprType
  MX_VISIT_BASE(TypeOfExprType, Type)
  MX_VISIT_ENTITY(TypeOfExprType, desugar, getVal308, setVal308, initVal308, Desugar, Type, NthType, TypeUseSelector::DESUGAR)
  MX_VISIT_ENTITY(TypeOfExprType, underlying_expression, getVal309, setVal309, initVal309, UnderlyingExpression, Expr, NthType, StmtUseSelector::UNDERLYING_EXPRESSION)
  MX_VISIT_BOOL(TypeOfExprType, is_sugared, getVal310, setVal310, initVal310, IsSugared, bool, NthType)
  MX_EXIT_VISIT_TypeOfExprType
MX_END_VISIT_TYPE(TypeOfExprType)

#ifndef MX_ENTER_VISIT_Stmt
#  define MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_Stmt
#  define MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(Stmt)
  MX_ENTER_VISIT_Stmt
  MX_VISIT_DECL_LINK(Stmt, parent_declaration, getVal0, setVal0, initVal0)
  MX_VISIT_STMT_LINK(Stmt, parent_statement, getVal1, setVal1, initVal1)
  MX_VISIT_ENTITY(Stmt, ignore_containers, getVal2, setVal2, initVal2, IgnoreContainers, Stmt, NthStmt, StmtUseSelector::IGNORE_CONTAINERS)
  MX_VISIT_ENTITY_LIST(Stmt, children, getVal3, setVal3, initVal3, Children, Stmt, NthStmt)
  MX_VISIT_ENUM(Stmt, kind, getVal6, setVal6, initVal6, Kind, StmtKind, NthStmt)
  MX_VISIT_ENTITY(Stmt, strip_label_like_statements, getVal7, setVal7, initVal7, StripLabelLikeStatements, Stmt, NthStmt, StmtUseSelector::STRIP_LABEL_LIKE_STATEMENTS)
  MX_EXIT_VISIT_Stmt
MX_END_VISIT_STMT(Stmt)

#ifndef MX_ENTER_VISIT_SEHTryStmt
#  define MX_ENTER_VISIT_SEHTryStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_SEHTryStmt
#  define MX_EXIT_VISIT_SEHTryStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(SEHTryStmt)
  MX_ENTER_VISIT_SEHTryStmt
  MX_VISIT_BASE(SEHTryStmt, Stmt)
  MX_VISIT_ENTITY(SEHTryStmt, except_handler, getVal8, setVal8, initVal8, ExceptHandler, SEHExceptStmt, NthStmt, StmtUseSelector::EXCEPT_HANDLER)
  MX_VISIT_ENTITY(SEHTryStmt, finally_handler, getVal9, setVal9, initVal9, FinallyHandler, SEHFinallyStmt, NthStmt, StmtUseSelector::FINALLY_HANDLER)
  MX_VISIT_ENTITY(SEHTryStmt, handler, getVal10, setVal10, initVal10, Handler, Stmt, NthStmt, StmtUseSelector::HANDLER)
  MX_VISIT_BOOL(SEHTryStmt, is_cxx_try, getVal11, setVal11, initVal11, IsCXXTry, bool, NthStmt)
  MX_VISIT_ENTITY(SEHTryStmt, try_block, getVal12, setVal12, initVal12, TryBlock, CompoundStmt, NthStmt, StmtUseSelector::TRY_BLOCK)
  MX_VISIT_ENTITY(SEHTryStmt, try_token, getVal13, setVal13, initVal13, TryToken, Token, NthStmt, TokenUseSelector::TRY_TOKEN)
  MX_EXIT_VISIT_SEHTryStmt
MX_END_VISIT_STMT(SEHTryStmt)

#ifndef MX_ENTER_VISIT_SEHLeaveStmt
#  define MX_ENTER_VISIT_SEHLeaveStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_SEHLeaveStmt
#  define MX_EXIT_VISIT_SEHLeaveStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(SEHLeaveStmt)
  MX_ENTER_VISIT_SEHLeaveStmt
  MX_VISIT_BASE(SEHLeaveStmt, Stmt)
  MX_VISIT_ENTITY(SEHLeaveStmt, leave_token, getVal8, setVal8, initVal8, LeaveToken, Token, NthStmt, TokenUseSelector::LEAVE_TOKEN)
  MX_EXIT_VISIT_SEHLeaveStmt
MX_END_VISIT_STMT(SEHLeaveStmt)

#ifndef MX_ENTER_VISIT_SEHFinallyStmt
#  define MX_ENTER_VISIT_SEHFinallyStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_SEHFinallyStmt
#  define MX_EXIT_VISIT_SEHFinallyStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(SEHFinallyStmt)
  MX_ENTER_VISIT_SEHFinallyStmt
  MX_VISIT_BASE(SEHFinallyStmt, Stmt)
  MX_VISIT_ENTITY(SEHFinallyStmt, block, getVal8, setVal8, initVal8, Block, CompoundStmt, NthStmt, StmtUseSelector::BLOCK)
  MX_VISIT_ENTITY(SEHFinallyStmt, finally_token, getVal9, setVal9, initVal9, FinallyToken, Token, NthStmt, TokenUseSelector::FINALLY_TOKEN)
  MX_EXIT_VISIT_SEHFinallyStmt
MX_END_VISIT_STMT(SEHFinallyStmt)

#ifndef MX_ENTER_VISIT_SEHExceptStmt
#  define MX_ENTER_VISIT_SEHExceptStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_SEHExceptStmt
#  define MX_EXIT_VISIT_SEHExceptStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(SEHExceptStmt)
  MX_ENTER_VISIT_SEHExceptStmt
  MX_VISIT_BASE(SEHExceptStmt, Stmt)
  MX_VISIT_ENTITY(SEHExceptStmt, block, getVal8, setVal8, initVal8, Block, CompoundStmt, NthStmt, StmtUseSelector::BLOCK)
  MX_VISIT_ENTITY(SEHExceptStmt, except_token, getVal9, setVal9, initVal9, ExceptToken, Token, NthStmt, TokenUseSelector::EXCEPT_TOKEN)
  MX_VISIT_ENTITY(SEHExceptStmt, filter_expression, getVal10, setVal10, initVal10, FilterExpression, Expr, NthStmt, StmtUseSelector::FILTER_EXPRESSION)
  MX_EXIT_VISIT_SEHExceptStmt
MX_END_VISIT_STMT(SEHExceptStmt)

#ifndef MX_ENTER_VISIT_ReturnStmt
#  define MX_ENTER_VISIT_ReturnStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ReturnStmt
#  define MX_EXIT_VISIT_ReturnStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ReturnStmt)
  MX_ENTER_VISIT_ReturnStmt
  MX_VISIT_BASE(ReturnStmt, Stmt)
  MX_VISIT_OPTIONAL_ENTITY(ReturnStmt, nrvo_candidate, getVal8, setVal8, initVal8, NRVOCandidate, VarDecl, NthStmt, DeclUseSelector::NRVO_CANDIDATE)
  MX_VISIT_OPTIONAL_ENTITY(ReturnStmt, return_value, getVal9, setVal9, initVal9, ReturnValue, Expr, NthStmt, StmtUseSelector::RETURN_VALUE)
  MX_VISIT_ENTITY(ReturnStmt, return_token, getVal10, setVal10, initVal10, ReturnToken, Token, NthStmt, TokenUseSelector::RETURN_TOKEN)
  MX_EXIT_VISIT_ReturnStmt
MX_END_VISIT_STMT(ReturnStmt)

#ifndef MX_ENTER_VISIT_ObjCForCollectionStmt
#  define MX_ENTER_VISIT_ObjCForCollectionStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCForCollectionStmt
#  define MX_EXIT_VISIT_ObjCForCollectionStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCForCollectionStmt)
  MX_ENTER_VISIT_ObjCForCollectionStmt
  MX_VISIT_BASE(ObjCForCollectionStmt, Stmt)
  MX_VISIT_ENTITY(ObjCForCollectionStmt, body, getVal8, setVal8, initVal8, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(ObjCForCollectionStmt, collection, getVal9, setVal9, initVal9, Collection, Expr, NthStmt, StmtUseSelector::COLLECTION)
  MX_VISIT_ENTITY(ObjCForCollectionStmt, element, getVal10, setVal10, initVal10, Element, Stmt, NthStmt, StmtUseSelector::ELEMENT)
  MX_VISIT_ENTITY(ObjCForCollectionStmt, for_token, getVal12, setVal12, initVal12, ForToken, Token, NthStmt, TokenUseSelector::FOR_TOKEN)
  MX_VISIT_ENTITY(ObjCForCollectionStmt, r_paren_token, getVal13, setVal13, initVal13, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_ObjCForCollectionStmt
MX_END_VISIT_STMT(ObjCForCollectionStmt)

#ifndef MX_ENTER_VISIT_ObjCAutoreleasePoolStmt
#  define MX_ENTER_VISIT_ObjCAutoreleasePoolStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCAutoreleasePoolStmt
#  define MX_EXIT_VISIT_ObjCAutoreleasePoolStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCAutoreleasePoolStmt)
  MX_ENTER_VISIT_ObjCAutoreleasePoolStmt
  MX_VISIT_BASE(ObjCAutoreleasePoolStmt, Stmt)
  MX_VISIT_ENTITY(ObjCAutoreleasePoolStmt, at_token, getVal8, setVal8, initVal8, AtToken, Token, NthStmt, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCAutoreleasePoolStmt, sub_statement, getVal9, setVal9, initVal9, SubStatement, Stmt, NthStmt, StmtUseSelector::SUB_STATEMENT)
  MX_EXIT_VISIT_ObjCAutoreleasePoolStmt
MX_END_VISIT_STMT(ObjCAutoreleasePoolStmt)

#ifndef MX_ENTER_VISIT_ObjCAtTryStmt
#  define MX_ENTER_VISIT_ObjCAtTryStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCAtTryStmt
#  define MX_EXIT_VISIT_ObjCAtTryStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCAtTryStmt)
  MX_ENTER_VISIT_ObjCAtTryStmt
  MX_VISIT_BASE(ObjCAtTryStmt, Stmt)
  MX_VISIT_ENTITY(ObjCAtTryStmt, at_try_token, getVal8, setVal8, initVal8, AtTryToken, Token, NthStmt, TokenUseSelector::AT_TRY_TOKEN)
  MX_VISIT_ENTITY(ObjCAtTryStmt, finally_statement, getVal9, setVal9, initVal9, FinallyStatement, ObjCAtFinallyStmt, NthStmt, StmtUseSelector::FINALLY_STATEMENT)
  MX_VISIT_ENTITY(ObjCAtTryStmt, try_body, getVal10, setVal10, initVal10, TryBody, Stmt, NthStmt, StmtUseSelector::TRY_BODY)
  MX_VISIT_ENTITY_LIST(ObjCAtTryStmt, catch_statements, getVal15, setVal15, initVal15, CatchStatements, ObjCAtCatchStmt, NthStmt)
  MX_EXIT_VISIT_ObjCAtTryStmt
MX_END_VISIT_STMT(ObjCAtTryStmt)

#ifndef MX_ENTER_VISIT_ObjCAtThrowStmt
#  define MX_ENTER_VISIT_ObjCAtThrowStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCAtThrowStmt
#  define MX_EXIT_VISIT_ObjCAtThrowStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCAtThrowStmt)
  MX_ENTER_VISIT_ObjCAtThrowStmt
  MX_VISIT_BASE(ObjCAtThrowStmt, Stmt)
  MX_VISIT_ENTITY(ObjCAtThrowStmt, throw_expression, getVal8, setVal8, initVal8, ThrowExpression, Expr, NthStmt, StmtUseSelector::THROW_EXPRESSION)
  MX_VISIT_ENTITY(ObjCAtThrowStmt, throw_token, getVal9, setVal9, initVal9, ThrowToken, Token, NthStmt, TokenUseSelector::THROW_TOKEN)
  MX_EXIT_VISIT_ObjCAtThrowStmt
MX_END_VISIT_STMT(ObjCAtThrowStmt)

#ifndef MX_ENTER_VISIT_ObjCAtSynchronizedStmt
#  define MX_ENTER_VISIT_ObjCAtSynchronizedStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCAtSynchronizedStmt
#  define MX_EXIT_VISIT_ObjCAtSynchronizedStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCAtSynchronizedStmt)
  MX_ENTER_VISIT_ObjCAtSynchronizedStmt
  MX_VISIT_BASE(ObjCAtSynchronizedStmt, Stmt)
  MX_VISIT_ENTITY(ObjCAtSynchronizedStmt, at_synchronized_token, getVal8, setVal8, initVal8, AtSynchronizedToken, Token, NthStmt, TokenUseSelector::AT_SYNCHRONIZED_TOKEN)
  MX_VISIT_ENTITY(ObjCAtSynchronizedStmt, synch_body, getVal9, setVal9, initVal9, SynchBody, CompoundStmt, NthStmt, StmtUseSelector::SYNCH_BODY)
  MX_VISIT_ENTITY(ObjCAtSynchronizedStmt, synch_expression, getVal10, setVal10, initVal10, SynchExpression, Expr, NthStmt, StmtUseSelector::SYNCH_EXPRESSION)
  MX_EXIT_VISIT_ObjCAtSynchronizedStmt
MX_END_VISIT_STMT(ObjCAtSynchronizedStmt)

#ifndef MX_ENTER_VISIT_ObjCAtFinallyStmt
#  define MX_ENTER_VISIT_ObjCAtFinallyStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCAtFinallyStmt
#  define MX_EXIT_VISIT_ObjCAtFinallyStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCAtFinallyStmt)
  MX_ENTER_VISIT_ObjCAtFinallyStmt
  MX_VISIT_BASE(ObjCAtFinallyStmt, Stmt)
  MX_VISIT_ENTITY(ObjCAtFinallyStmt, at_finally_token, getVal8, setVal8, initVal8, AtFinallyToken, Token, NthStmt, TokenUseSelector::AT_FINALLY_TOKEN)
  MX_VISIT_ENTITY(ObjCAtFinallyStmt, finally_body, getVal9, setVal9, initVal9, FinallyBody, Stmt, NthStmt, StmtUseSelector::FINALLY_BODY)
  MX_EXIT_VISIT_ObjCAtFinallyStmt
MX_END_VISIT_STMT(ObjCAtFinallyStmt)

#ifndef MX_ENTER_VISIT_ObjCAtCatchStmt
#  define MX_ENTER_VISIT_ObjCAtCatchStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ObjCAtCatchStmt
#  define MX_EXIT_VISIT_ObjCAtCatchStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ObjCAtCatchStmt)
  MX_ENTER_VISIT_ObjCAtCatchStmt
  MX_VISIT_BASE(ObjCAtCatchStmt, Stmt)
  MX_VISIT_ENTITY(ObjCAtCatchStmt, at_catch_token, getVal8, setVal8, initVal8, AtCatchToken, Token, NthStmt, TokenUseSelector::AT_CATCH_TOKEN)
  MX_VISIT_ENTITY(ObjCAtCatchStmt, catch_body, getVal9, setVal9, initVal9, CatchBody, Stmt, NthStmt, StmtUseSelector::CATCH_BODY)
  MX_VISIT_ENTITY(ObjCAtCatchStmt, catch_parameter_declaration, getVal10, setVal10, initVal10, CatchParameterDeclaration, VarDecl, NthStmt, DeclUseSelector::CATCH_PARAMETER_DECLARATION)
  MX_VISIT_ENTITY(ObjCAtCatchStmt, r_paren_token, getVal12, setVal12, initVal12, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(ObjCAtCatchStmt, has_ellipsis, getVal11, setVal11, initVal11, HasEllipsis, bool, NthStmt)
  MX_EXIT_VISIT_ObjCAtCatchStmt
MX_END_VISIT_STMT(ObjCAtCatchStmt)

#ifndef MX_ENTER_VISIT_OMPExecutableDirective
#  define MX_ENTER_VISIT_OMPExecutableDirective MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_OMPExecutableDirective
#  define MX_EXIT_VISIT_OMPExecutableDirective MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(OMPExecutableDirective)
  MX_ENTER_VISIT_OMPExecutableDirective
  MX_VISIT_BASE(OMPExecutableDirective, Stmt)
  MX_VISIT_ENTITY(OMPExecutableDirective, associated_statement, getVal8, setVal8, initVal8, AssociatedStatement, Stmt, NthStmt, StmtUseSelector::ASSOCIATED_STATEMENT)
  MX_VISIT_ENTITY(OMPExecutableDirective, innermost_captured_statement, getVal9, setVal9, initVal9, InnermostCapturedStatement, CapturedStmt, NthStmt, StmtUseSelector::INNERMOST_CAPTURED_STATEMENT)
  MX_VISIT_ENTITY(OMPExecutableDirective, raw_statement, getVal10, setVal10, initVal10, RawStatement, Stmt, NthStmt, StmtUseSelector::RAW_STATEMENT)
  MX_VISIT_ENTITY(OMPExecutableDirective, structured_block, getVal12, setVal12, initVal12, StructuredBlock, Stmt, NthStmt, StmtUseSelector::STRUCTURED_BLOCK)
  MX_VISIT_BOOL(OMPExecutableDirective, has_associated_statement, getVal11, setVal11, initVal11, HasAssociatedStatement, bool, NthStmt)
  MX_VISIT_BOOL(OMPExecutableDirective, is_standalone_directive, getVal14, setVal14, initVal14, IsStandaloneDirective, bool, NthStmt)
  MX_EXIT_VISIT_OMPExecutableDirective
MX_END_VISIT_STMT(OMPExecutableDirective)

#ifndef MX_ENTER_VISIT_OMPDispatchDirective
#  define MX_ENTER_VISIT_OMPDispatchDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPDispatchDirective
#  define MX_EXIT_VISIT_OMPDispatchDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPDispatchDirective)
  MX_ENTER_VISIT_OMPDispatchDirective
  MX_VISIT_BASE(OMPDispatchDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPDispatchDirective, target_call_token, getVal13, setVal13, initVal13, TargetCallToken, Token, NthStmt, TokenUseSelector::TARGET_CALL_TOKEN)
  MX_EXIT_VISIT_OMPDispatchDirective
MX_END_VISIT_STMT(OMPDispatchDirective)

#ifndef MX_ENTER_VISIT_OMPDepobjDirective
#  define MX_ENTER_VISIT_OMPDepobjDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPDepobjDirective
#  define MX_EXIT_VISIT_OMPDepobjDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPDepobjDirective)
  MX_ENTER_VISIT_OMPDepobjDirective
  MX_VISIT_BASE(OMPDepobjDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPDepobjDirective
MX_END_VISIT_STMT(OMPDepobjDirective)

#ifndef MX_ENTER_VISIT_OMPCriticalDirective
#  define MX_ENTER_VISIT_OMPCriticalDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPCriticalDirective
#  define MX_EXIT_VISIT_OMPCriticalDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPCriticalDirective)
  MX_ENTER_VISIT_OMPCriticalDirective
  MX_VISIT_BASE(OMPCriticalDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPCriticalDirective
MX_END_VISIT_STMT(OMPCriticalDirective)

#ifndef MX_ENTER_VISIT_OMPCancellationPointDirective
#  define MX_ENTER_VISIT_OMPCancellationPointDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPCancellationPointDirective
#  define MX_EXIT_VISIT_OMPCancellationPointDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPCancellationPointDirective)
  MX_ENTER_VISIT_OMPCancellationPointDirective
  MX_VISIT_BASE(OMPCancellationPointDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPCancellationPointDirective
MX_END_VISIT_STMT(OMPCancellationPointDirective)

#ifndef MX_ENTER_VISIT_OMPCancelDirective
#  define MX_ENTER_VISIT_OMPCancelDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPCancelDirective
#  define MX_EXIT_VISIT_OMPCancelDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPCancelDirective)
  MX_ENTER_VISIT_OMPCancelDirective
  MX_VISIT_BASE(OMPCancelDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPCancelDirective
MX_END_VISIT_STMT(OMPCancelDirective)

#ifndef MX_ENTER_VISIT_OMPBarrierDirective
#  define MX_ENTER_VISIT_OMPBarrierDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPBarrierDirective
#  define MX_EXIT_VISIT_OMPBarrierDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPBarrierDirective)
  MX_ENTER_VISIT_OMPBarrierDirective
  MX_VISIT_BASE(OMPBarrierDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPBarrierDirective
MX_END_VISIT_STMT(OMPBarrierDirective)

#ifndef MX_ENTER_VISIT_OMPAtomicDirective
#  define MX_ENTER_VISIT_OMPAtomicDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPAtomicDirective
#  define MX_EXIT_VISIT_OMPAtomicDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPAtomicDirective)
  MX_ENTER_VISIT_OMPAtomicDirective
  MX_VISIT_BASE(OMPAtomicDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPAtomicDirective, expression, getVal13, setVal13, initVal13, Expression, Expr, NthStmt, StmtUseSelector::EXPRESSION)
  MX_VISIT_ENTITY(OMPAtomicDirective, update_expression, getVal16, setVal16, initVal16, UpdateExpression, Expr, NthStmt, StmtUseSelector::UPDATE_EXPRESSION)
  MX_VISIT_ENTITY(OMPAtomicDirective, v, getVal17, setVal17, initVal17, V, Expr, NthStmt, StmtUseSelector::V)
  MX_VISIT_ENTITY(OMPAtomicDirective, x, getVal18, setVal18, initVal18, X, Expr, NthStmt, StmtUseSelector::X)
  MX_VISIT_BOOL(OMPAtomicDirective, is_postfix_update, getVal19, setVal19, initVal19, IsPostfixUpdate, bool, NthStmt)
  MX_VISIT_BOOL(OMPAtomicDirective, is_xlhs_in_rhs_part, getVal20, setVal20, initVal20, IsXLHSInRHSPart, bool, NthStmt)
  MX_EXIT_VISIT_OMPAtomicDirective
MX_END_VISIT_STMT(OMPAtomicDirective)

#ifndef MX_ENTER_VISIT_OMPTeamsDirective
#  define MX_ENTER_VISIT_OMPTeamsDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTeamsDirective
#  define MX_EXIT_VISIT_OMPTeamsDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTeamsDirective)
  MX_ENTER_VISIT_OMPTeamsDirective
  MX_VISIT_BASE(OMPTeamsDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTeamsDirective
MX_END_VISIT_STMT(OMPTeamsDirective)

#ifndef MX_ENTER_VISIT_OMPTaskyieldDirective
#  define MX_ENTER_VISIT_OMPTaskyieldDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTaskyieldDirective
#  define MX_EXIT_VISIT_OMPTaskyieldDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTaskyieldDirective)
  MX_ENTER_VISIT_OMPTaskyieldDirective
  MX_VISIT_BASE(OMPTaskyieldDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTaskyieldDirective
MX_END_VISIT_STMT(OMPTaskyieldDirective)

#ifndef MX_ENTER_VISIT_OMPTaskwaitDirective
#  define MX_ENTER_VISIT_OMPTaskwaitDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTaskwaitDirective
#  define MX_EXIT_VISIT_OMPTaskwaitDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTaskwaitDirective)
  MX_ENTER_VISIT_OMPTaskwaitDirective
  MX_VISIT_BASE(OMPTaskwaitDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTaskwaitDirective
MX_END_VISIT_STMT(OMPTaskwaitDirective)

#ifndef MX_ENTER_VISIT_OMPTaskgroupDirective
#  define MX_ENTER_VISIT_OMPTaskgroupDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTaskgroupDirective
#  define MX_EXIT_VISIT_OMPTaskgroupDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTaskgroupDirective)
  MX_ENTER_VISIT_OMPTaskgroupDirective
  MX_VISIT_BASE(OMPTaskgroupDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPTaskgroupDirective, reduction_reference, getVal13, setVal13, initVal13, ReductionReference, Expr, NthStmt, StmtUseSelector::REDUCTION_REFERENCE)
  MX_EXIT_VISIT_OMPTaskgroupDirective
MX_END_VISIT_STMT(OMPTaskgroupDirective)

#ifndef MX_ENTER_VISIT_OMPTaskDirective
#  define MX_ENTER_VISIT_OMPTaskDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTaskDirective
#  define MX_EXIT_VISIT_OMPTaskDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTaskDirective)
  MX_ENTER_VISIT_OMPTaskDirective
  MX_VISIT_BASE(OMPTaskDirective, OMPExecutableDirective)
  MX_VISIT_BOOL(OMPTaskDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPTaskDirective
MX_END_VISIT_STMT(OMPTaskDirective)

#ifndef MX_ENTER_VISIT_OMPTargetUpdateDirective
#  define MX_ENTER_VISIT_OMPTargetUpdateDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetUpdateDirective
#  define MX_EXIT_VISIT_OMPTargetUpdateDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetUpdateDirective)
  MX_ENTER_VISIT_OMPTargetUpdateDirective
  MX_VISIT_BASE(OMPTargetUpdateDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTargetUpdateDirective
MX_END_VISIT_STMT(OMPTargetUpdateDirective)

#ifndef MX_ENTER_VISIT_OMPTargetTeamsDirective
#  define MX_ENTER_VISIT_OMPTargetTeamsDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetTeamsDirective
#  define MX_EXIT_VISIT_OMPTargetTeamsDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetTeamsDirective)
  MX_ENTER_VISIT_OMPTargetTeamsDirective
  MX_VISIT_BASE(OMPTargetTeamsDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTargetTeamsDirective
MX_END_VISIT_STMT(OMPTargetTeamsDirective)

#ifndef MX_ENTER_VISIT_OMPTargetParallelDirective
#  define MX_ENTER_VISIT_OMPTargetParallelDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetParallelDirective
#  define MX_EXIT_VISIT_OMPTargetParallelDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetParallelDirective)
  MX_ENTER_VISIT_OMPTargetParallelDirective
  MX_VISIT_BASE(OMPTargetParallelDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPTargetParallelDirective, task_reduction_reference_expression, getVal13, setVal13, initVal13, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPTargetParallelDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPTargetParallelDirective
MX_END_VISIT_STMT(OMPTargetParallelDirective)

#ifndef MX_ENTER_VISIT_OMPTargetExitDataDirective
#  define MX_ENTER_VISIT_OMPTargetExitDataDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetExitDataDirective
#  define MX_EXIT_VISIT_OMPTargetExitDataDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetExitDataDirective)
  MX_ENTER_VISIT_OMPTargetExitDataDirective
  MX_VISIT_BASE(OMPTargetExitDataDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTargetExitDataDirective
MX_END_VISIT_STMT(OMPTargetExitDataDirective)

#ifndef MX_ENTER_VISIT_OMPTargetEnterDataDirective
#  define MX_ENTER_VISIT_OMPTargetEnterDataDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetEnterDataDirective
#  define MX_EXIT_VISIT_OMPTargetEnterDataDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetEnterDataDirective)
  MX_ENTER_VISIT_OMPTargetEnterDataDirective
  MX_VISIT_BASE(OMPTargetEnterDataDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTargetEnterDataDirective
MX_END_VISIT_STMT(OMPTargetEnterDataDirective)

#ifndef MX_ENTER_VISIT_OMPTargetDirective
#  define MX_ENTER_VISIT_OMPTargetDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetDirective
#  define MX_EXIT_VISIT_OMPTargetDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetDirective)
  MX_ENTER_VISIT_OMPTargetDirective
  MX_VISIT_BASE(OMPTargetDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTargetDirective
MX_END_VISIT_STMT(OMPTargetDirective)

#ifndef MX_ENTER_VISIT_OMPTargetDataDirective
#  define MX_ENTER_VISIT_OMPTargetDataDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetDataDirective
#  define MX_EXIT_VISIT_OMPTargetDataDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetDataDirective)
  MX_ENTER_VISIT_OMPTargetDataDirective
  MX_VISIT_BASE(OMPTargetDataDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPTargetDataDirective
MX_END_VISIT_STMT(OMPTargetDataDirective)

#ifndef MX_ENTER_VISIT_OMPSingleDirective
#  define MX_ENTER_VISIT_OMPSingleDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPSingleDirective
#  define MX_EXIT_VISIT_OMPSingleDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPSingleDirective)
  MX_ENTER_VISIT_OMPSingleDirective
  MX_VISIT_BASE(OMPSingleDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPSingleDirective
MX_END_VISIT_STMT(OMPSingleDirective)

#ifndef MX_ENTER_VISIT_OMPSectionsDirective
#  define MX_ENTER_VISIT_OMPSectionsDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPSectionsDirective
#  define MX_EXIT_VISIT_OMPSectionsDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPSectionsDirective)
  MX_ENTER_VISIT_OMPSectionsDirective
  MX_VISIT_BASE(OMPSectionsDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPSectionsDirective, task_reduction_reference_expression, getVal13, setVal13, initVal13, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPSectionsDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPSectionsDirective
MX_END_VISIT_STMT(OMPSectionsDirective)

#ifndef MX_ENTER_VISIT_OMPSectionDirective
#  define MX_ENTER_VISIT_OMPSectionDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPSectionDirective
#  define MX_EXIT_VISIT_OMPSectionDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPSectionDirective)
  MX_ENTER_VISIT_OMPSectionDirective
  MX_VISIT_BASE(OMPSectionDirective, OMPExecutableDirective)
  MX_VISIT_BOOL(OMPSectionDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPSectionDirective
MX_END_VISIT_STMT(OMPSectionDirective)

#ifndef MX_ENTER_VISIT_OMPScanDirective
#  define MX_ENTER_VISIT_OMPScanDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPScanDirective
#  define MX_EXIT_VISIT_OMPScanDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPScanDirective)
  MX_ENTER_VISIT_OMPScanDirective
  MX_VISIT_BASE(OMPScanDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPScanDirective
MX_END_VISIT_STMT(OMPScanDirective)

#ifndef MX_ENTER_VISIT_OMPParallelSectionsDirective
#  define MX_ENTER_VISIT_OMPParallelSectionsDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelSectionsDirective
#  define MX_EXIT_VISIT_OMPParallelSectionsDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelSectionsDirective)
  MX_ENTER_VISIT_OMPParallelSectionsDirective
  MX_VISIT_BASE(OMPParallelSectionsDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPParallelSectionsDirective, task_reduction_reference_expression, getVal13, setVal13, initVal13, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPParallelSectionsDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPParallelSectionsDirective
MX_END_VISIT_STMT(OMPParallelSectionsDirective)

#ifndef MX_ENTER_VISIT_OMPParallelMasterDirective
#  define MX_ENTER_VISIT_OMPParallelMasterDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelMasterDirective
#  define MX_EXIT_VISIT_OMPParallelMasterDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelMasterDirective)
  MX_ENTER_VISIT_OMPParallelMasterDirective
  MX_VISIT_BASE(OMPParallelMasterDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPParallelMasterDirective, task_reduction_reference_expression, getVal13, setVal13, initVal13, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_EXIT_VISIT_OMPParallelMasterDirective
MX_END_VISIT_STMT(OMPParallelMasterDirective)

#ifndef MX_ENTER_VISIT_OMPParallelDirective
#  define MX_ENTER_VISIT_OMPParallelDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelDirective
#  define MX_EXIT_VISIT_OMPParallelDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelDirective)
  MX_ENTER_VISIT_OMPParallelDirective
  MX_VISIT_BASE(OMPParallelDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPParallelDirective, task_reduction_reference_expression, getVal13, setVal13, initVal13, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPParallelDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPParallelDirective
MX_END_VISIT_STMT(OMPParallelDirective)

#ifndef MX_ENTER_VISIT_OMPOrderedDirective
#  define MX_ENTER_VISIT_OMPOrderedDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPOrderedDirective
#  define MX_EXIT_VISIT_OMPOrderedDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPOrderedDirective)
  MX_ENTER_VISIT_OMPOrderedDirective
  MX_VISIT_BASE(OMPOrderedDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPOrderedDirective
MX_END_VISIT_STMT(OMPOrderedDirective)

#ifndef MX_ENTER_VISIT_OMPMetaDirective
#  define MX_ENTER_VISIT_OMPMetaDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPMetaDirective
#  define MX_EXIT_VISIT_OMPMetaDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPMetaDirective)
  MX_ENTER_VISIT_OMPMetaDirective
  MX_VISIT_BASE(OMPMetaDirective, OMPExecutableDirective)
  MX_VISIT_ENTITY(OMPMetaDirective, if_statement, getVal13, setVal13, initVal13, IfStatement, Stmt, NthStmt, StmtUseSelector::IF_STATEMENT)
  MX_EXIT_VISIT_OMPMetaDirective
MX_END_VISIT_STMT(OMPMetaDirective)

#ifndef MX_ENTER_VISIT_OMPMasterDirective
#  define MX_ENTER_VISIT_OMPMasterDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPMasterDirective
#  define MX_EXIT_VISIT_OMPMasterDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPMasterDirective)
  MX_ENTER_VISIT_OMPMasterDirective
  MX_VISIT_BASE(OMPMasterDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPMasterDirective
MX_END_VISIT_STMT(OMPMasterDirective)

#ifndef MX_ENTER_VISIT_OMPMaskedDirective
#  define MX_ENTER_VISIT_OMPMaskedDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPMaskedDirective
#  define MX_EXIT_VISIT_OMPMaskedDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPMaskedDirective)
  MX_ENTER_VISIT_OMPMaskedDirective
  MX_VISIT_BASE(OMPMaskedDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPMaskedDirective
MX_END_VISIT_STMT(OMPMaskedDirective)

#ifndef MX_ENTER_VISIT_OMPLoopBasedDirective
#  define MX_ENTER_VISIT_OMPLoopBasedDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPLoopBasedDirective
#  define MX_EXIT_VISIT_OMPLoopBasedDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(OMPLoopBasedDirective)
  MX_ENTER_VISIT_OMPLoopBasedDirective
  MX_VISIT_BASE(OMPLoopBasedDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPLoopBasedDirective
MX_END_VISIT_STMT(OMPLoopBasedDirective)

#ifndef MX_ENTER_VISIT_OMPLoopTransformationDirective
#  define MX_ENTER_VISIT_OMPLoopTransformationDirective MX_ENTER_VISIT_OMPLoopBasedDirective
#endif
#ifndef MX_EXIT_VISIT_OMPLoopTransformationDirective
#  define MX_EXIT_VISIT_OMPLoopTransformationDirective MX_EXIT_VISIT_OMPLoopBasedDirective
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(OMPLoopTransformationDirective)
  MX_ENTER_VISIT_OMPLoopTransformationDirective
  MX_VISIT_BASE(OMPLoopTransformationDirective, OMPLoopBasedDirective)
  MX_VISIT_ENTITY(OMPLoopTransformationDirective, pre_initializers, getVal13, setVal13, initVal13, PreInitializers, Stmt, NthStmt, StmtUseSelector::PRE_INITIALIZERS)
  MX_VISIT_ENTITY(OMPLoopTransformationDirective, transformed_statement, getVal16, setVal16, initVal16, TransformedStatement, Stmt, NthStmt, StmtUseSelector::TRANSFORMED_STATEMENT)
  MX_EXIT_VISIT_OMPLoopTransformationDirective
MX_END_VISIT_STMT(OMPLoopTransformationDirective)

#ifndef MX_ENTER_VISIT_OMPUnrollDirective
#  define MX_ENTER_VISIT_OMPUnrollDirective MX_ENTER_VISIT_OMPLoopTransformationDirective
#endif
#ifndef MX_EXIT_VISIT_OMPUnrollDirective
#  define MX_EXIT_VISIT_OMPUnrollDirective MX_EXIT_VISIT_OMPLoopTransformationDirective
#endif

MX_BEGIN_VISIT_STMT(OMPUnrollDirective)
  MX_ENTER_VISIT_OMPUnrollDirective
  MX_VISIT_BASE(OMPUnrollDirective, OMPLoopTransformationDirective)
  MX_EXIT_VISIT_OMPUnrollDirective
MX_END_VISIT_STMT(OMPUnrollDirective)

#ifndef MX_ENTER_VISIT_OMPTileDirective
#  define MX_ENTER_VISIT_OMPTileDirective MX_ENTER_VISIT_OMPLoopTransformationDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTileDirective
#  define MX_EXIT_VISIT_OMPTileDirective MX_EXIT_VISIT_OMPLoopTransformationDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTileDirective)
  MX_ENTER_VISIT_OMPTileDirective
  MX_VISIT_BASE(OMPTileDirective, OMPLoopTransformationDirective)
  MX_EXIT_VISIT_OMPTileDirective
MX_END_VISIT_STMT(OMPTileDirective)

#ifndef MX_ENTER_VISIT_OMPLoopDirective
#  define MX_ENTER_VISIT_OMPLoopDirective MX_ENTER_VISIT_OMPLoopBasedDirective
#endif
#ifndef MX_EXIT_VISIT_OMPLoopDirective
#  define MX_EXIT_VISIT_OMPLoopDirective MX_EXIT_VISIT_OMPLoopBasedDirective
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(OMPLoopDirective)
  MX_ENTER_VISIT_OMPLoopDirective
  MX_VISIT_BASE(OMPLoopDirective, OMPLoopBasedDirective)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, counters, getVal15, setVal15, initVal15, Counters, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, dependent_counters, getVal21, setVal21, initVal21, DependentCounters, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, dependent_initializers, getVal22, setVal22, initVal22, DependentInitializers, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, finals, getVal23, setVal23, initVal23, Finals, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, finals_conditions, getVal24, setVal24, initVal24, FinalsConditions, Expr, NthStmt)
  MX_VISIT_ENTITY(OMPLoopDirective, body, getVal13, setVal13, initVal13, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(OMPLoopDirective, calculate_last_iteration, getVal16, setVal16, initVal16, CalculateLastIteration, Expr, NthStmt, StmtUseSelector::CALCULATE_LAST_ITERATION)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_condition, getVal17, setVal17, initVal17, CombinedCondition, Expr, NthStmt, StmtUseSelector::COMBINED_CONDITION)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_distance_condition, getVal18, setVal18, initVal18, CombinedDistanceCondition, Expr, NthStmt, StmtUseSelector::COMBINED_DISTANCE_CONDITION)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_ensure_upper_bound, getVal25, setVal25, initVal25, CombinedEnsureUpperBound, Expr, NthStmt, StmtUseSelector::COMBINED_ENSURE_UPPER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_initializer, getVal26, setVal26, initVal26, CombinedInitializer, Expr, NthStmt, StmtUseSelector::COMBINED_INITIALIZER)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_lower_bound_variable, getVal27, setVal27, initVal27, CombinedLowerBoundVariable, Expr, NthStmt, StmtUseSelector::COMBINED_LOWER_BOUND_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_next_lower_bound, getVal28, setVal28, initVal28, CombinedNextLowerBound, Expr, NthStmt, StmtUseSelector::COMBINED_NEXT_LOWER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_next_upper_bound, getVal29, setVal29, initVal29, CombinedNextUpperBound, Expr, NthStmt, StmtUseSelector::COMBINED_NEXT_UPPER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_parallel_for_in_distance_condition, getVal30, setVal30, initVal30, CombinedParallelForInDistanceCondition, Expr, NthStmt, StmtUseSelector::COMBINED_PARALLEL_FOR_IN_DISTANCE_CONDITION)
  MX_VISIT_ENTITY(OMPLoopDirective, combined_upper_bound_variable, getVal31, setVal31, initVal31, CombinedUpperBoundVariable, Expr, NthStmt, StmtUseSelector::COMBINED_UPPER_BOUND_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, condition, getVal32, setVal32, initVal32, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_ENTITY(OMPLoopDirective, distance_increment, getVal33, setVal33, initVal33, DistanceIncrement, Expr, NthStmt, StmtUseSelector::DISTANCE_INCREMENT)
  MX_VISIT_ENTITY(OMPLoopDirective, ensure_upper_bound, getVal34, setVal34, initVal34, EnsureUpperBound, Expr, NthStmt, StmtUseSelector::ENSURE_UPPER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, increment, getVal35, setVal35, initVal35, Increment, Expr, NthStmt, StmtUseSelector::INCREMENT)
  MX_VISIT_ENTITY(OMPLoopDirective, initializer, getVal36, setVal36, initVal36, Initializer, Expr, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(OMPLoopDirective, is_last_iteration_variable, getVal37, setVal37, initVal37, IsLastIterationVariable, Expr, NthStmt, StmtUseSelector::IS_LAST_ITERATION_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, iteration_variable, getVal38, setVal38, initVal38, IterationVariable, Expr, NthStmt, StmtUseSelector::ITERATION_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, last_iteration, getVal39, setVal39, initVal39, LastIteration, Expr, NthStmt, StmtUseSelector::LAST_ITERATION)
  MX_VISIT_ENTITY(OMPLoopDirective, lower_bound_variable, getVal40, setVal40, initVal40, LowerBoundVariable, Expr, NthStmt, StmtUseSelector::LOWER_BOUND_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, next_lower_bound, getVal41, setVal41, initVal41, NextLowerBound, Expr, NthStmt, StmtUseSelector::NEXT_LOWER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, next_upper_bound, getVal42, setVal42, initVal42, NextUpperBound, Expr, NthStmt, StmtUseSelector::NEXT_UPPER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, num_iterations, getVal43, setVal43, initVal43, NumIterations, Expr, NthStmt, StmtUseSelector::NUM_ITERATIONS)
  MX_VISIT_ENTITY(OMPLoopDirective, pre_condition, getVal44, setVal44, initVal44, PreCondition, Expr, NthStmt, StmtUseSelector::PRE_CONDITION)
  MX_VISIT_ENTITY(OMPLoopDirective, pre_initializers, getVal45, setVal45, initVal45, PreInitializers, Stmt, NthStmt, StmtUseSelector::PRE_INITIALIZERS)
  MX_VISIT_ENTITY(OMPLoopDirective, prev_ensure_upper_bound, getVal46, setVal46, initVal46, PrevEnsureUpperBound, Expr, NthStmt, StmtUseSelector::PREV_ENSURE_UPPER_BOUND)
  MX_VISIT_ENTITY(OMPLoopDirective, prev_lower_bound_variable, getVal47, setVal47, initVal47, PrevLowerBoundVariable, Expr, NthStmt, StmtUseSelector::PREV_LOWER_BOUND_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, prev_upper_bound_variable, getVal48, setVal48, initVal48, PrevUpperBoundVariable, Expr, NthStmt, StmtUseSelector::PREV_UPPER_BOUND_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, stride_variable, getVal49, setVal49, initVal49, StrideVariable, Expr, NthStmt, StmtUseSelector::STRIDE_VARIABLE)
  MX_VISIT_ENTITY(OMPLoopDirective, upper_bound_variable, getVal50, setVal50, initVal50, UpperBoundVariable, Expr, NthStmt, StmtUseSelector::UPPER_BOUND_VARIABLE)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, initializers, getVal51, setVal51, initVal51, Initializers, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, private_counters, getVal52, setVal52, initVal52, PrivateCounters, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(OMPLoopDirective, updates, getVal53, setVal53, initVal53, Updates, Expr, NthStmt)
  MX_EXIT_VISIT_OMPLoopDirective
MX_END_VISIT_STMT(OMPLoopDirective)

#ifndef MX_ENTER_VISIT_OMPGenericLoopDirective
#  define MX_ENTER_VISIT_OMPGenericLoopDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPGenericLoopDirective
#  define MX_EXIT_VISIT_OMPGenericLoopDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPGenericLoopDirective)
  MX_ENTER_VISIT_OMPGenericLoopDirective
  MX_VISIT_BASE(OMPGenericLoopDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPGenericLoopDirective
MX_END_VISIT_STMT(OMPGenericLoopDirective)

#ifndef MX_ENTER_VISIT_OMPForSimdDirective
#  define MX_ENTER_VISIT_OMPForSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPForSimdDirective
#  define MX_EXIT_VISIT_OMPForSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPForSimdDirective)
  MX_ENTER_VISIT_OMPForSimdDirective
  MX_VISIT_BASE(OMPForSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPForSimdDirective
MX_END_VISIT_STMT(OMPForSimdDirective)

#ifndef MX_ENTER_VISIT_OMPForDirective
#  define MX_ENTER_VISIT_OMPForDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPForDirective
#  define MX_EXIT_VISIT_OMPForDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPForDirective)
  MX_ENTER_VISIT_OMPForDirective
  MX_VISIT_BASE(OMPForDirective, OMPLoopDirective)
  MX_VISIT_ENTITY(OMPForDirective, task_reduction_reference_expression, getVal54, setVal54, initVal54, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPForDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPForDirective
MX_END_VISIT_STMT(OMPForDirective)

#ifndef MX_ENTER_VISIT_OMPDistributeSimdDirective
#  define MX_ENTER_VISIT_OMPDistributeSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPDistributeSimdDirective
#  define MX_EXIT_VISIT_OMPDistributeSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPDistributeSimdDirective)
  MX_ENTER_VISIT_OMPDistributeSimdDirective
  MX_VISIT_BASE(OMPDistributeSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPDistributeSimdDirective
MX_END_VISIT_STMT(OMPDistributeSimdDirective)

#ifndef MX_ENTER_VISIT_OMPDistributeParallelForSimdDirective
#  define MX_ENTER_VISIT_OMPDistributeParallelForSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPDistributeParallelForSimdDirective
#  define MX_EXIT_VISIT_OMPDistributeParallelForSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPDistributeParallelForSimdDirective)
  MX_ENTER_VISIT_OMPDistributeParallelForSimdDirective
  MX_VISIT_BASE(OMPDistributeParallelForSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPDistributeParallelForSimdDirective
MX_END_VISIT_STMT(OMPDistributeParallelForSimdDirective)

#ifndef MX_ENTER_VISIT_OMPDistributeParallelForDirective
#  define MX_ENTER_VISIT_OMPDistributeParallelForDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPDistributeParallelForDirective
#  define MX_EXIT_VISIT_OMPDistributeParallelForDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPDistributeParallelForDirective)
  MX_ENTER_VISIT_OMPDistributeParallelForDirective
  MX_VISIT_BASE(OMPDistributeParallelForDirective, OMPLoopDirective)
  MX_VISIT_ENTITY(OMPDistributeParallelForDirective, task_reduction_reference_expression, getVal54, setVal54, initVal54, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPDistributeParallelForDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPDistributeParallelForDirective
MX_END_VISIT_STMT(OMPDistributeParallelForDirective)

#ifndef MX_ENTER_VISIT_OMPDistributeDirective
#  define MX_ENTER_VISIT_OMPDistributeDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPDistributeDirective
#  define MX_EXIT_VISIT_OMPDistributeDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPDistributeDirective)
  MX_ENTER_VISIT_OMPDistributeDirective
  MX_VISIT_BASE(OMPDistributeDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPDistributeDirective
MX_END_VISIT_STMT(OMPDistributeDirective)

#ifndef MX_ENTER_VISIT_OMPTeamsDistributeSimdDirective
#  define MX_ENTER_VISIT_OMPTeamsDistributeSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTeamsDistributeSimdDirective
#  define MX_EXIT_VISIT_OMPTeamsDistributeSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTeamsDistributeSimdDirective)
  MX_ENTER_VISIT_OMPTeamsDistributeSimdDirective
  MX_VISIT_BASE(OMPTeamsDistributeSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTeamsDistributeSimdDirective
MX_END_VISIT_STMT(OMPTeamsDistributeSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTeamsDistributeParallelForSimdDirective
#  define MX_ENTER_VISIT_OMPTeamsDistributeParallelForSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTeamsDistributeParallelForSimdDirective
#  define MX_EXIT_VISIT_OMPTeamsDistributeParallelForSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTeamsDistributeParallelForSimdDirective)
  MX_ENTER_VISIT_OMPTeamsDistributeParallelForSimdDirective
  MX_VISIT_BASE(OMPTeamsDistributeParallelForSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTeamsDistributeParallelForSimdDirective
MX_END_VISIT_STMT(OMPTeamsDistributeParallelForSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTeamsDistributeParallelForDirective
#  define MX_ENTER_VISIT_OMPTeamsDistributeParallelForDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTeamsDistributeParallelForDirective
#  define MX_EXIT_VISIT_OMPTeamsDistributeParallelForDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTeamsDistributeParallelForDirective)
  MX_ENTER_VISIT_OMPTeamsDistributeParallelForDirective
  MX_VISIT_BASE(OMPTeamsDistributeParallelForDirective, OMPLoopDirective)
  MX_VISIT_ENTITY(OMPTeamsDistributeParallelForDirective, task_reduction_reference_expression, getVal54, setVal54, initVal54, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPTeamsDistributeParallelForDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPTeamsDistributeParallelForDirective
MX_END_VISIT_STMT(OMPTeamsDistributeParallelForDirective)

#ifndef MX_ENTER_VISIT_OMPTeamsDistributeDirective
#  define MX_ENTER_VISIT_OMPTeamsDistributeDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTeamsDistributeDirective
#  define MX_EXIT_VISIT_OMPTeamsDistributeDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTeamsDistributeDirective)
  MX_ENTER_VISIT_OMPTeamsDistributeDirective
  MX_VISIT_BASE(OMPTeamsDistributeDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTeamsDistributeDirective
MX_END_VISIT_STMT(OMPTeamsDistributeDirective)

#ifndef MX_ENTER_VISIT_OMPTaskLoopSimdDirective
#  define MX_ENTER_VISIT_OMPTaskLoopSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTaskLoopSimdDirective
#  define MX_EXIT_VISIT_OMPTaskLoopSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTaskLoopSimdDirective)
  MX_ENTER_VISIT_OMPTaskLoopSimdDirective
  MX_VISIT_BASE(OMPTaskLoopSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTaskLoopSimdDirective
MX_END_VISIT_STMT(OMPTaskLoopSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTaskLoopDirective
#  define MX_ENTER_VISIT_OMPTaskLoopDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTaskLoopDirective
#  define MX_EXIT_VISIT_OMPTaskLoopDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTaskLoopDirective)
  MX_ENTER_VISIT_OMPTaskLoopDirective
  MX_VISIT_BASE(OMPTaskLoopDirective, OMPLoopDirective)
  MX_VISIT_BOOL(OMPTaskLoopDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPTaskLoopDirective
MX_END_VISIT_STMT(OMPTaskLoopDirective)

#ifndef MX_ENTER_VISIT_OMPTargetTeamsDistributeSimdDirective
#  define MX_ENTER_VISIT_OMPTargetTeamsDistributeSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetTeamsDistributeSimdDirective
#  define MX_EXIT_VISIT_OMPTargetTeamsDistributeSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetTeamsDistributeSimdDirective)
  MX_ENTER_VISIT_OMPTargetTeamsDistributeSimdDirective
  MX_VISIT_BASE(OMPTargetTeamsDistributeSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTargetTeamsDistributeSimdDirective
MX_END_VISIT_STMT(OMPTargetTeamsDistributeSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective
#  define MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective
#  define MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetTeamsDistributeParallelForSimdDirective)
  MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective
  MX_VISIT_BASE(OMPTargetTeamsDistributeParallelForSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective
MX_END_VISIT_STMT(OMPTargetTeamsDistributeParallelForSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForDirective
#  define MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForDirective
#  define MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetTeamsDistributeParallelForDirective)
  MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForDirective
  MX_VISIT_BASE(OMPTargetTeamsDistributeParallelForDirective, OMPLoopDirective)
  MX_VISIT_ENTITY(OMPTargetTeamsDistributeParallelForDirective, task_reduction_reference_expression, getVal54, setVal54, initVal54, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPTargetTeamsDistributeParallelForDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForDirective
MX_END_VISIT_STMT(OMPTargetTeamsDistributeParallelForDirective)

#ifndef MX_ENTER_VISIT_OMPTargetTeamsDistributeDirective
#  define MX_ENTER_VISIT_OMPTargetTeamsDistributeDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetTeamsDistributeDirective
#  define MX_EXIT_VISIT_OMPTargetTeamsDistributeDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetTeamsDistributeDirective)
  MX_ENTER_VISIT_OMPTargetTeamsDistributeDirective
  MX_VISIT_BASE(OMPTargetTeamsDistributeDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTargetTeamsDistributeDirective
MX_END_VISIT_STMT(OMPTargetTeamsDistributeDirective)

#ifndef MX_ENTER_VISIT_OMPTargetSimdDirective
#  define MX_ENTER_VISIT_OMPTargetSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetSimdDirective
#  define MX_EXIT_VISIT_OMPTargetSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetSimdDirective)
  MX_ENTER_VISIT_OMPTargetSimdDirective
  MX_VISIT_BASE(OMPTargetSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTargetSimdDirective
MX_END_VISIT_STMT(OMPTargetSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTargetParallelForSimdDirective
#  define MX_ENTER_VISIT_OMPTargetParallelForSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetParallelForSimdDirective
#  define MX_EXIT_VISIT_OMPTargetParallelForSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetParallelForSimdDirective)
  MX_ENTER_VISIT_OMPTargetParallelForSimdDirective
  MX_VISIT_BASE(OMPTargetParallelForSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPTargetParallelForSimdDirective
MX_END_VISIT_STMT(OMPTargetParallelForSimdDirective)

#ifndef MX_ENTER_VISIT_OMPTargetParallelForDirective
#  define MX_ENTER_VISIT_OMPTargetParallelForDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPTargetParallelForDirective
#  define MX_EXIT_VISIT_OMPTargetParallelForDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPTargetParallelForDirective)
  MX_ENTER_VISIT_OMPTargetParallelForDirective
  MX_VISIT_BASE(OMPTargetParallelForDirective, OMPLoopDirective)
  MX_VISIT_ENTITY(OMPTargetParallelForDirective, task_reduction_reference_expression, getVal54, setVal54, initVal54, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPTargetParallelForDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPTargetParallelForDirective
MX_END_VISIT_STMT(OMPTargetParallelForDirective)

#ifndef MX_ENTER_VISIT_OMPSimdDirective
#  define MX_ENTER_VISIT_OMPSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPSimdDirective
#  define MX_EXIT_VISIT_OMPSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPSimdDirective)
  MX_ENTER_VISIT_OMPSimdDirective
  MX_VISIT_BASE(OMPSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPSimdDirective
MX_END_VISIT_STMT(OMPSimdDirective)

#ifndef MX_ENTER_VISIT_OMPParallelMasterTaskLoopSimdDirective
#  define MX_ENTER_VISIT_OMPParallelMasterTaskLoopSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelMasterTaskLoopSimdDirective
#  define MX_EXIT_VISIT_OMPParallelMasterTaskLoopSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelMasterTaskLoopSimdDirective)
  MX_ENTER_VISIT_OMPParallelMasterTaskLoopSimdDirective
  MX_VISIT_BASE(OMPParallelMasterTaskLoopSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPParallelMasterTaskLoopSimdDirective
MX_END_VISIT_STMT(OMPParallelMasterTaskLoopSimdDirective)

#ifndef MX_ENTER_VISIT_OMPParallelMasterTaskLoopDirective
#  define MX_ENTER_VISIT_OMPParallelMasterTaskLoopDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelMasterTaskLoopDirective
#  define MX_EXIT_VISIT_OMPParallelMasterTaskLoopDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelMasterTaskLoopDirective)
  MX_ENTER_VISIT_OMPParallelMasterTaskLoopDirective
  MX_VISIT_BASE(OMPParallelMasterTaskLoopDirective, OMPLoopDirective)
  MX_VISIT_BOOL(OMPParallelMasterTaskLoopDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPParallelMasterTaskLoopDirective
MX_END_VISIT_STMT(OMPParallelMasterTaskLoopDirective)

#ifndef MX_ENTER_VISIT_OMPParallelForSimdDirective
#  define MX_ENTER_VISIT_OMPParallelForSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelForSimdDirective
#  define MX_EXIT_VISIT_OMPParallelForSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelForSimdDirective)
  MX_ENTER_VISIT_OMPParallelForSimdDirective
  MX_VISIT_BASE(OMPParallelForSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPParallelForSimdDirective
MX_END_VISIT_STMT(OMPParallelForSimdDirective)

#ifndef MX_ENTER_VISIT_OMPParallelForDirective
#  define MX_ENTER_VISIT_OMPParallelForDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPParallelForDirective
#  define MX_EXIT_VISIT_OMPParallelForDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPParallelForDirective)
  MX_ENTER_VISIT_OMPParallelForDirective
  MX_VISIT_BASE(OMPParallelForDirective, OMPLoopDirective)
  MX_VISIT_ENTITY(OMPParallelForDirective, task_reduction_reference_expression, getVal54, setVal54, initVal54, TaskReductionReferenceExpression, Expr, NthStmt, StmtUseSelector::TASK_REDUCTION_REFERENCE_EXPRESSION)
  MX_VISIT_BOOL(OMPParallelForDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPParallelForDirective
MX_END_VISIT_STMT(OMPParallelForDirective)

#ifndef MX_ENTER_VISIT_OMPMasterTaskLoopSimdDirective
#  define MX_ENTER_VISIT_OMPMasterTaskLoopSimdDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPMasterTaskLoopSimdDirective
#  define MX_EXIT_VISIT_OMPMasterTaskLoopSimdDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPMasterTaskLoopSimdDirective)
  MX_ENTER_VISIT_OMPMasterTaskLoopSimdDirective
  MX_VISIT_BASE(OMPMasterTaskLoopSimdDirective, OMPLoopDirective)
  MX_EXIT_VISIT_OMPMasterTaskLoopSimdDirective
MX_END_VISIT_STMT(OMPMasterTaskLoopSimdDirective)

#ifndef MX_ENTER_VISIT_OMPMasterTaskLoopDirective
#  define MX_ENTER_VISIT_OMPMasterTaskLoopDirective MX_ENTER_VISIT_OMPLoopDirective
#endif
#ifndef MX_EXIT_VISIT_OMPMasterTaskLoopDirective
#  define MX_EXIT_VISIT_OMPMasterTaskLoopDirective MX_EXIT_VISIT_OMPLoopDirective
#endif

MX_BEGIN_VISIT_STMT(OMPMasterTaskLoopDirective)
  MX_ENTER_VISIT_OMPMasterTaskLoopDirective
  MX_VISIT_BASE(OMPMasterTaskLoopDirective, OMPLoopDirective)
  MX_VISIT_BOOL(OMPMasterTaskLoopDirective, has_cancel, getVal19, setVal19, initVal19, HasCancel, bool, NthStmt)
  MX_EXIT_VISIT_OMPMasterTaskLoopDirective
MX_END_VISIT_STMT(OMPMasterTaskLoopDirective)

#ifndef MX_ENTER_VISIT_OMPInteropDirective
#  define MX_ENTER_VISIT_OMPInteropDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPInteropDirective
#  define MX_EXIT_VISIT_OMPInteropDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPInteropDirective)
  MX_ENTER_VISIT_OMPInteropDirective
  MX_VISIT_BASE(OMPInteropDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPInteropDirective
MX_END_VISIT_STMT(OMPInteropDirective)

#ifndef MX_ENTER_VISIT_OMPFlushDirective
#  define MX_ENTER_VISIT_OMPFlushDirective MX_ENTER_VISIT_OMPExecutableDirective
#endif
#ifndef MX_EXIT_VISIT_OMPFlushDirective
#  define MX_EXIT_VISIT_OMPFlushDirective MX_EXIT_VISIT_OMPExecutableDirective
#endif

MX_BEGIN_VISIT_STMT(OMPFlushDirective)
  MX_ENTER_VISIT_OMPFlushDirective
  MX_VISIT_BASE(OMPFlushDirective, OMPExecutableDirective)
  MX_EXIT_VISIT_OMPFlushDirective
MX_END_VISIT_STMT(OMPFlushDirective)

#ifndef MX_ENTER_VISIT_OMPCanonicalLoop
#  define MX_ENTER_VISIT_OMPCanonicalLoop MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_OMPCanonicalLoop
#  define MX_EXIT_VISIT_OMPCanonicalLoop MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(OMPCanonicalLoop)
  MX_ENTER_VISIT_OMPCanonicalLoop
  MX_VISIT_BASE(OMPCanonicalLoop, Stmt)
  MX_VISIT_ENTITY(OMPCanonicalLoop, distance_func, getVal8, setVal8, initVal8, DistanceFunc, CapturedStmt, NthStmt, StmtUseSelector::DISTANCE_FUNC)
  MX_VISIT_ENTITY(OMPCanonicalLoop, loop_statement, getVal9, setVal9, initVal9, LoopStatement, Stmt, NthStmt, StmtUseSelector::LOOP_STATEMENT)
  MX_VISIT_ENTITY(OMPCanonicalLoop, loop_variable_func, getVal10, setVal10, initVal10, LoopVariableFunc, CapturedStmt, NthStmt, StmtUseSelector::LOOP_VARIABLE_FUNC)
  MX_VISIT_ENTITY(OMPCanonicalLoop, loop_variable_reference, getVal12, setVal12, initVal12, LoopVariableReference, DeclRefExpr, NthStmt, StmtUseSelector::LOOP_VARIABLE_REFERENCE)
  MX_EXIT_VISIT_OMPCanonicalLoop
MX_END_VISIT_STMT(OMPCanonicalLoop)

#ifndef MX_ENTER_VISIT_NullStmt
#  define MX_ENTER_VISIT_NullStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_NullStmt
#  define MX_EXIT_VISIT_NullStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(NullStmt)
  MX_ENTER_VISIT_NullStmt
  MX_VISIT_BASE(NullStmt, Stmt)
  MX_VISIT_ENTITY(NullStmt, semi_token, getVal8, setVal8, initVal8, SemiToken, Token, NthStmt, TokenUseSelector::SEMI_TOKEN)
  MX_VISIT_BOOL(NullStmt, has_leading_empty_macro, getVal11, setVal11, initVal11, HasLeadingEmptyMacro, bool, NthStmt)
  MX_EXIT_VISIT_NullStmt
MX_END_VISIT_STMT(NullStmt)

#ifndef MX_ENTER_VISIT_MSDependentExistsStmt
#  define MX_ENTER_VISIT_MSDependentExistsStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_MSDependentExistsStmt
#  define MX_EXIT_VISIT_MSDependentExistsStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(MSDependentExistsStmt)
  MX_ENTER_VISIT_MSDependentExistsStmt
  MX_VISIT_BASE(MSDependentExistsStmt, Stmt)
  MX_VISIT_ENTITY(MSDependentExistsStmt, keyword_token, getVal8, setVal8, initVal8, KeywordToken, Token, NthStmt, TokenUseSelector::KEYWORD_TOKEN)
  MX_VISIT_ENTITY(MSDependentExistsStmt, sub_statement, getVal9, setVal9, initVal9, SubStatement, CompoundStmt, NthStmt, StmtUseSelector::SUB_STATEMENT)
  MX_VISIT_BOOL(MSDependentExistsStmt, is_if_exists, getVal11, setVal11, initVal11, IsIfExists, bool, NthStmt)
  MX_VISIT_BOOL(MSDependentExistsStmt, is_if_not_exists, getVal14, setVal14, initVal14, IsIfNotExists, bool, NthStmt)
  MX_EXIT_VISIT_MSDependentExistsStmt
MX_END_VISIT_STMT(MSDependentExistsStmt)

#ifndef MX_ENTER_VISIT_IndirectGotoStmt
#  define MX_ENTER_VISIT_IndirectGotoStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_IndirectGotoStmt
#  define MX_EXIT_VISIT_IndirectGotoStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(IndirectGotoStmt)
  MX_ENTER_VISIT_IndirectGotoStmt
  MX_VISIT_BASE(IndirectGotoStmt, Stmt)
  MX_VISIT_OPTIONAL_ENTITY(IndirectGotoStmt, constant_target, getVal8, setVal8, initVal8, ConstantTarget, LabelDecl, NthStmt, DeclUseSelector::CONSTANT_TARGET)
  MX_VISIT_ENTITY(IndirectGotoStmt, goto_token, getVal9, setVal9, initVal9, GotoToken, Token, NthStmt, TokenUseSelector::GOTO_TOKEN)
  MX_VISIT_ENTITY(IndirectGotoStmt, star_token, getVal10, setVal10, initVal10, StarToken, Token, NthStmt, TokenUseSelector::STAR_TOKEN)
  MX_VISIT_ENTITY(IndirectGotoStmt, target, getVal12, setVal12, initVal12, Target, Expr, NthStmt, StmtUseSelector::TARGET)
  MX_EXIT_VISIT_IndirectGotoStmt
MX_END_VISIT_STMT(IndirectGotoStmt)

#ifndef MX_ENTER_VISIT_IfStmt
#  define MX_ENTER_VISIT_IfStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_IfStmt
#  define MX_EXIT_VISIT_IfStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(IfStmt)
  MX_ENTER_VISIT_IfStmt
  MX_VISIT_BASE(IfStmt, Stmt)
  MX_VISIT_ENTITY(IfStmt, condition, getVal8, setVal8, initVal8, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_OPTIONAL_ENTITY(IfStmt, condition_variable, getVal9, setVal9, initVal9, ConditionVariable, VarDecl, NthStmt, DeclUseSelector::CONDITION_VARIABLE)
  MX_VISIT_OPTIONAL_ENTITY(IfStmt, condition_variable_declaration_statement, getVal10, setVal10, initVal10, ConditionVariableDeclarationStatement, DeclStmt, NthStmt, StmtUseSelector::CONDITION_VARIABLE_DECLARATION_STATEMENT)
  MX_VISIT_OPTIONAL_ENTITY(IfStmt, else_, getVal12, setVal12, initVal12, Else, Stmt, NthStmt, StmtUseSelector::ELSE_)
  MX_VISIT_ENTITY(IfStmt, else_token, getVal13, setVal13, initVal13, ElseToken, Token, NthStmt, TokenUseSelector::ELSE_TOKEN)
  MX_VISIT_ENTITY(IfStmt, if_token, getVal16, setVal16, initVal16, IfToken, Token, NthStmt, TokenUseSelector::IF_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(IfStmt, initializer, getVal17, setVal17, initVal17, Initializer, Stmt, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(IfStmt, l_paren_token, getVal18, setVal18, initVal18, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(IfStmt, r_paren_token, getVal25, setVal25, initVal25, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENUM(IfStmt, statement_kind, getVal55, setVal55, initVal55, StatementKind, IfStatementKind, NthStmt)
  MX_VISIT_ENTITY(IfStmt, then, getVal26, setVal26, initVal26, Then, Stmt, NthStmt, StmtUseSelector::THEN)
  MX_VISIT_BOOL(IfStmt, has_else_storage, getVal56, setVal56, initVal56, HasElseStorage, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, has_initializer_storage, getVal57, setVal57, initVal57, HasInitializerStorage, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, has_variable_storage, getVal58, setVal58, initVal58, HasVariableStorage, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, is_consteval, getVal59, setVal59, initVal59, IsConsteval, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, is_constexpr, getVal60, setVal60, initVal60, IsConstexpr, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, is_negated_consteval, getVal61, setVal61, initVal61, IsNegatedConsteval, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, is_non_negated_consteval, getVal62, setVal62, initVal62, IsNonNegatedConsteval, bool, NthStmt)
  MX_VISIT_BOOL(IfStmt, is_obj_c_availability_check, getVal63, setVal63, initVal63, IsObjCAvailabilityCheck, bool, NthStmt)
  MX_EXIT_VISIT_IfStmt
MX_END_VISIT_STMT(IfStmt)

#ifndef MX_ENTER_VISIT_GotoStmt
#  define MX_ENTER_VISIT_GotoStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_GotoStmt
#  define MX_EXIT_VISIT_GotoStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(GotoStmt)
  MX_ENTER_VISIT_GotoStmt
  MX_VISIT_BASE(GotoStmt, Stmt)
  MX_VISIT_ENTITY(GotoStmt, goto_token, getVal8, setVal8, initVal8, GotoToken, Token, NthStmt, TokenUseSelector::GOTO_TOKEN)
  MX_VISIT_ENTITY(GotoStmt, label, getVal9, setVal9, initVal9, Label, LabelDecl, NthStmt, DeclUseSelector::LABEL)
  MX_VISIT_ENTITY(GotoStmt, label_token, getVal10, setVal10, initVal10, LabelToken, Token, NthStmt, TokenUseSelector::LABEL_TOKEN)
  MX_EXIT_VISIT_GotoStmt
MX_END_VISIT_STMT(GotoStmt)

#ifndef MX_ENTER_VISIT_ForStmt
#  define MX_ENTER_VISIT_ForStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ForStmt
#  define MX_EXIT_VISIT_ForStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ForStmt)
  MX_ENTER_VISIT_ForStmt
  MX_VISIT_BASE(ForStmt, Stmt)
  MX_VISIT_ENTITY(ForStmt, body, getVal8, setVal8, initVal8, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_OPTIONAL_ENTITY(ForStmt, condition, getVal9, setVal9, initVal9, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_OPTIONAL_ENTITY(ForStmt, condition_variable, getVal10, setVal10, initVal10, ConditionVariable, VarDecl, NthStmt, DeclUseSelector::CONDITION_VARIABLE)
  MX_VISIT_OPTIONAL_ENTITY(ForStmt, condition_variable_declaration_statement, getVal12, setVal12, initVal12, ConditionVariableDeclarationStatement, DeclStmt, NthStmt, StmtUseSelector::CONDITION_VARIABLE_DECLARATION_STATEMENT)
  MX_VISIT_ENTITY(ForStmt, for_token, getVal13, setVal13, initVal13, ForToken, Token, NthStmt, TokenUseSelector::FOR_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(ForStmt, increment, getVal16, setVal16, initVal16, Increment, Expr, NthStmt, StmtUseSelector::INCREMENT)
  MX_VISIT_OPTIONAL_ENTITY(ForStmt, initializer, getVal17, setVal17, initVal17, Initializer, Stmt, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(ForStmt, l_paren_token, getVal18, setVal18, initVal18, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(ForStmt, r_paren_token, getVal25, setVal25, initVal25, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_ForStmt
MX_END_VISIT_STMT(ForStmt)

#ifndef MX_ENTER_VISIT_DoStmt
#  define MX_ENTER_VISIT_DoStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_DoStmt
#  define MX_EXIT_VISIT_DoStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(DoStmt)
  MX_ENTER_VISIT_DoStmt
  MX_VISIT_BASE(DoStmt, Stmt)
  MX_VISIT_ENTITY(DoStmt, body, getVal8, setVal8, initVal8, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(DoStmt, condition, getVal9, setVal9, initVal9, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_ENTITY(DoStmt, do_token, getVal10, setVal10, initVal10, DoToken, Token, NthStmt, TokenUseSelector::DO_TOKEN)
  MX_VISIT_ENTITY(DoStmt, r_paren_token, getVal12, setVal12, initVal12, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(DoStmt, while_token, getVal13, setVal13, initVal13, WhileToken, Token, NthStmt, TokenUseSelector::WHILE_TOKEN)
  MX_EXIT_VISIT_DoStmt
MX_END_VISIT_STMT(DoStmt)

#ifndef MX_ENTER_VISIT_DeclStmt
#  define MX_ENTER_VISIT_DeclStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_DeclStmt
#  define MX_EXIT_VISIT_DeclStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(DeclStmt)
  MX_ENTER_VISIT_DeclStmt
  MX_VISIT_BASE(DeclStmt, Stmt)
  MX_VISIT_ENTITY_LIST(DeclStmt, declarations, getVal15, setVal15, initVal15, Declarations, Decl, NthStmt)
  MX_VISIT_OPTIONAL_ENTITY(DeclStmt, single_declaration, getVal8, setVal8, initVal8, SingleDeclaration, Decl, NthStmt, DeclUseSelector::SINGLE_DECLARATION)
  MX_VISIT_BOOL(DeclStmt, is_single_declaration, getVal14, setVal14, initVal14, IsSingleDeclaration, bool, NthStmt)
  MX_EXIT_VISIT_DeclStmt
MX_END_VISIT_STMT(DeclStmt)

#ifndef MX_ENTER_VISIT_CoroutineBodyStmt
#  define MX_ENTER_VISIT_CoroutineBodyStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CoroutineBodyStmt
#  define MX_EXIT_VISIT_CoroutineBodyStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CoroutineBodyStmt)
  MX_ENTER_VISIT_CoroutineBodyStmt
  MX_VISIT_BASE(CoroutineBodyStmt, Stmt)
  MX_VISIT_ENTITY(CoroutineBodyStmt, allocate, getVal8, setVal8, initVal8, Allocate, Expr, NthStmt, StmtUseSelector::ALLOCATE)
  MX_VISIT_ENTITY(CoroutineBodyStmt, body, getVal9, setVal9, initVal9, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(CoroutineBodyStmt, deallocate, getVal10, setVal10, initVal10, Deallocate, Expr, NthStmt, StmtUseSelector::DEALLOCATE)
  MX_VISIT_ENTITY(CoroutineBodyStmt, exception_handler, getVal12, setVal12, initVal12, ExceptionHandler, Stmt, NthStmt, StmtUseSelector::EXCEPTION_HANDLER)
  MX_VISIT_ENTITY(CoroutineBodyStmt, fallthrough_handler, getVal13, setVal13, initVal13, FallthroughHandler, Stmt, NthStmt, StmtUseSelector::FALLTHROUGH_HANDLER)
  MX_VISIT_ENTITY(CoroutineBodyStmt, final_suspend_statement, getVal16, setVal16, initVal16, FinalSuspendStatement, Stmt, NthStmt, StmtUseSelector::FINAL_SUSPEND_STATEMENT)
  MX_VISIT_ENTITY(CoroutineBodyStmt, initializer_suspend_statement, getVal17, setVal17, initVal17, InitializerSuspendStatement, Stmt, NthStmt, StmtUseSelector::INITIALIZER_SUSPEND_STATEMENT)
  MX_VISIT_ENTITY_LIST(CoroutineBodyStmt, parameter_moves, getVal15, setVal15, initVal15, ParameterMoves, Stmt, NthStmt)
  MX_VISIT_ENTITY(CoroutineBodyStmt, promise_declaration, getVal18, setVal18, initVal18, PromiseDeclaration, VarDecl, NthStmt, DeclUseSelector::PROMISE_DECLARATION)
  MX_VISIT_ENTITY(CoroutineBodyStmt, promise_declaration_statement, getVal25, setVal25, initVal25, PromiseDeclarationStatement, Stmt, NthStmt, StmtUseSelector::PROMISE_DECLARATION_STATEMENT)
  MX_VISIT_ENTITY(CoroutineBodyStmt, result_declaration, getVal26, setVal26, initVal26, ResultDeclaration, Stmt, NthStmt, StmtUseSelector::RESULT_DECLARATION)
  MX_VISIT_ENTITY(CoroutineBodyStmt, return_statement, getVal27, setVal27, initVal27, ReturnStatement, Stmt, NthStmt, StmtUseSelector::RETURN_STATEMENT)
  MX_VISIT_ENTITY(CoroutineBodyStmt, return_statement_on_alloc_failure, getVal28, setVal28, initVal28, ReturnStatementOnAllocFailure, Stmt, NthStmt, StmtUseSelector::RETURN_STATEMENT_ON_ALLOC_FAILURE)
  MX_VISIT_ENTITY(CoroutineBodyStmt, return_value_initializer, getVal29, setVal29, initVal29, ReturnValueInitializer, Expr, NthStmt, StmtUseSelector::RETURN_VALUE_INITIALIZER)
  MX_VISIT_BOOL(CoroutineBodyStmt, has_dependent_promise_type, getVal11, setVal11, initVal11, HasDependentPromiseType, bool, NthStmt)
  MX_EXIT_VISIT_CoroutineBodyStmt
MX_END_VISIT_STMT(CoroutineBodyStmt)

#ifndef MX_ENTER_VISIT_CoreturnStmt
#  define MX_ENTER_VISIT_CoreturnStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CoreturnStmt
#  define MX_EXIT_VISIT_CoreturnStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CoreturnStmt)
  MX_ENTER_VISIT_CoreturnStmt
  MX_VISIT_BASE(CoreturnStmt, Stmt)
  MX_VISIT_ENTITY(CoreturnStmt, keyword_token, getVal8, setVal8, initVal8, KeywordToken, Token, NthStmt, TokenUseSelector::KEYWORD_TOKEN)
  MX_VISIT_ENTITY(CoreturnStmt, operand, getVal9, setVal9, initVal9, Operand, Expr, NthStmt, StmtUseSelector::OPERAND)
  MX_VISIT_ENTITY(CoreturnStmt, promise_call, getVal10, setVal10, initVal10, PromiseCall, Expr, NthStmt, StmtUseSelector::PROMISE_CALL)
  MX_VISIT_BOOL(CoreturnStmt, is_implicit, getVal11, setVal11, initVal11, IsImplicit, bool, NthStmt)
  MX_EXIT_VISIT_CoreturnStmt
MX_END_VISIT_STMT(CoreturnStmt)

#ifndef MX_ENTER_VISIT_ContinueStmt
#  define MX_ENTER_VISIT_ContinueStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ContinueStmt
#  define MX_EXIT_VISIT_ContinueStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(ContinueStmt)
  MX_ENTER_VISIT_ContinueStmt
  MX_VISIT_BASE(ContinueStmt, Stmt)
  MX_VISIT_ENTITY(ContinueStmt, continue_token, getVal8, setVal8, initVal8, ContinueToken, Token, NthStmt, TokenUseSelector::CONTINUE_TOKEN)
  MX_EXIT_VISIT_ContinueStmt
MX_END_VISIT_STMT(ContinueStmt)

#ifndef MX_ENTER_VISIT_CompoundStmt
#  define MX_ENTER_VISIT_CompoundStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CompoundStmt
#  define MX_EXIT_VISIT_CompoundStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CompoundStmt)
  MX_ENTER_VISIT_CompoundStmt
  MX_VISIT_BASE(CompoundStmt, Stmt)
  MX_VISIT_ENTITY(CompoundStmt, left_brace_token, getVal8, setVal8, initVal8, LeftBraceToken, Token, NthStmt, TokenUseSelector::LEFT_BRACE_TOKEN)
  MX_VISIT_ENTITY(CompoundStmt, right_brace_token, getVal9, setVal9, initVal9, RightBraceToken, Token, NthStmt, TokenUseSelector::RIGHT_BRACE_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(CompoundStmt, statement_expression_result, getVal10, setVal10, initVal10, StatementExpressionResult, Stmt, NthStmt, StmtUseSelector::STATEMENT_EXPRESSION_RESULT)
  MX_EXIT_VISIT_CompoundStmt
MX_END_VISIT_STMT(CompoundStmt)

#ifndef MX_ENTER_VISIT_CapturedStmt
#  define MX_ENTER_VISIT_CapturedStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CapturedStmt
#  define MX_EXIT_VISIT_CapturedStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CapturedStmt)
  MX_ENTER_VISIT_CapturedStmt
  MX_VISIT_BASE(CapturedStmt, Stmt)
  MX_VISIT_ENTITY(CapturedStmt, captured_declaration, getVal8, setVal8, initVal8, CapturedDeclaration, CapturedDecl, NthStmt, DeclUseSelector::CAPTURED_DECLARATION)
  MX_VISIT_ENTITY(CapturedStmt, captured_record_declaration, getVal9, setVal9, initVal9, CapturedRecordDeclaration, RecordDecl, NthStmt, DeclUseSelector::CAPTURED_RECORD_DECLARATION)
  MX_VISIT_ENUM(CapturedStmt, captured_region_kind, getVal55, setVal55, initVal55, CapturedRegionKind, CapturedRegionKind, NthStmt)
  MX_VISIT_ENTITY(CapturedStmt, captured_statement, getVal10, setVal10, initVal10, CapturedStatement, Stmt, NthStmt, StmtUseSelector::CAPTURED_STATEMENT)
  MX_EXIT_VISIT_CapturedStmt
MX_END_VISIT_STMT(CapturedStmt)

#ifndef MX_ENTER_VISIT_CXXTryStmt
#  define MX_ENTER_VISIT_CXXTryStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CXXTryStmt
#  define MX_EXIT_VISIT_CXXTryStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CXXTryStmt)
  MX_ENTER_VISIT_CXXTryStmt
  MX_VISIT_BASE(CXXTryStmt, Stmt)
  MX_VISIT_ENTITY(CXXTryStmt, try_block, getVal8, setVal8, initVal8, TryBlock, CompoundStmt, NthStmt, StmtUseSelector::TRY_BLOCK)
  MX_VISIT_ENTITY(CXXTryStmt, try_token, getVal9, setVal9, initVal9, TryToken, Token, NthStmt, TokenUseSelector::TRY_TOKEN)
  MX_VISIT_ENTITY_LIST(CXXTryStmt, handlers, getVal15, setVal15, initVal15, Handlers, CXXCatchStmt, NthStmt)
  MX_EXIT_VISIT_CXXTryStmt
MX_END_VISIT_STMT(CXXTryStmt)

#ifndef MX_ENTER_VISIT_CXXForRangeStmt
#  define MX_ENTER_VISIT_CXXForRangeStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CXXForRangeStmt
#  define MX_EXIT_VISIT_CXXForRangeStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CXXForRangeStmt)
  MX_ENTER_VISIT_CXXForRangeStmt
  MX_VISIT_BASE(CXXForRangeStmt, Stmt)
  MX_VISIT_ENTITY(CXXForRangeStmt, begin_statement, getVal8, setVal8, initVal8, BeginStatement, DeclStmt, NthStmt, StmtUseSelector::BEGIN_STATEMENT)
  MX_VISIT_ENTITY(CXXForRangeStmt, body, getVal9, setVal9, initVal9, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(CXXForRangeStmt, coawait_token, getVal10, setVal10, initVal10, CoawaitToken, Token, NthStmt, TokenUseSelector::COAWAIT_TOKEN)
  MX_VISIT_ENTITY(CXXForRangeStmt, colon_token, getVal12, setVal12, initVal12, ColonToken, Token, NthStmt, TokenUseSelector::COLON_TOKEN)
  MX_VISIT_ENTITY(CXXForRangeStmt, condition, getVal13, setVal13, initVal13, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_ENTITY(CXXForRangeStmt, end_statement, getVal16, setVal16, initVal16, EndStatement, DeclStmt, NthStmt, StmtUseSelector::END_STATEMENT)
  MX_VISIT_ENTITY(CXXForRangeStmt, for_token, getVal17, setVal17, initVal17, ForToken, Token, NthStmt, TokenUseSelector::FOR_TOKEN)
  MX_VISIT_ENTITY(CXXForRangeStmt, increment, getVal18, setVal18, initVal18, Increment, Expr, NthStmt, StmtUseSelector::INCREMENT)
  MX_VISIT_OPTIONAL_ENTITY(CXXForRangeStmt, initializer, getVal25, setVal25, initVal25, Initializer, Stmt, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(CXXForRangeStmt, loop_variable_statement, getVal26, setVal26, initVal26, LoopVariableStatement, DeclStmt, NthStmt, StmtUseSelector::LOOP_VARIABLE_STATEMENT)
  MX_VISIT_ENTITY(CXXForRangeStmt, loop_variable, getVal27, setVal27, initVal27, LoopVariable, VarDecl, NthStmt, DeclUseSelector::LOOP_VARIABLE)
  MX_VISIT_ENTITY(CXXForRangeStmt, r_paren_token, getVal28, setVal28, initVal28, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(CXXForRangeStmt, range_initializer, getVal29, setVal29, initVal29, RangeInitializer, Expr, NthStmt, StmtUseSelector::RANGE_INITIALIZER)
  MX_VISIT_ENTITY(CXXForRangeStmt, range_statement, getVal30, setVal30, initVal30, RangeStatement, DeclStmt, NthStmt, StmtUseSelector::RANGE_STATEMENT)
  MX_EXIT_VISIT_CXXForRangeStmt
MX_END_VISIT_STMT(CXXForRangeStmt)

#ifndef MX_ENTER_VISIT_CXXCatchStmt
#  define MX_ENTER_VISIT_CXXCatchStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_CXXCatchStmt
#  define MX_EXIT_VISIT_CXXCatchStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(CXXCatchStmt)
  MX_ENTER_VISIT_CXXCatchStmt
  MX_VISIT_BASE(CXXCatchStmt, Stmt)
  MX_VISIT_ENTITY(CXXCatchStmt, catch_token, getVal8, setVal8, initVal8, CatchToken, Token, NthStmt, TokenUseSelector::CATCH_TOKEN)
  MX_VISIT_ENTITY(CXXCatchStmt, caught_type, getVal9, setVal9, initVal9, CaughtType, Type, NthStmt, TypeUseSelector::CAUGHT_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(CXXCatchStmt, exception_declaration, getVal10, setVal10, initVal10, ExceptionDeclaration, VarDecl, NthStmt, DeclUseSelector::EXCEPTION_DECLARATION)
  MX_VISIT_ENTITY(CXXCatchStmt, handler_block, getVal12, setVal12, initVal12, HandlerBlock, Stmt, NthStmt, StmtUseSelector::HANDLER_BLOCK)
  MX_EXIT_VISIT_CXXCatchStmt
MX_END_VISIT_STMT(CXXCatchStmt)

#ifndef MX_ENTER_VISIT_BreakStmt
#  define MX_ENTER_VISIT_BreakStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_BreakStmt
#  define MX_EXIT_VISIT_BreakStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(BreakStmt)
  MX_ENTER_VISIT_BreakStmt
  MX_VISIT_BASE(BreakStmt, Stmt)
  MX_VISIT_ENTITY(BreakStmt, break_token, getVal8, setVal8, initVal8, BreakToken, Token, NthStmt, TokenUseSelector::BREAK_TOKEN)
  MX_EXIT_VISIT_BreakStmt
MX_END_VISIT_STMT(BreakStmt)

#ifndef MX_ENTER_VISIT_AsmStmt
#  define MX_ENTER_VISIT_AsmStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_AsmStmt
#  define MX_EXIT_VISIT_AsmStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(AsmStmt)
  MX_ENTER_VISIT_AsmStmt
  MX_VISIT_BASE(AsmStmt, Stmt)
  MX_VISIT_TEXT(AsmStmt, generate_assembly_string, getVal64, setVal64, initVal64, GenerateAssemblyString, basic_string, NthStmt)
  MX_VISIT_ENTITY(AsmStmt, assembly_token, getVal8, setVal8, initVal8, AssemblyToken, Token, NthStmt, TokenUseSelector::ASSEMBLY_TOKEN)
  MX_VISIT_ENTITY_LIST(AsmStmt, inputs, getVal15, setVal15, initVal15, Inputs, Expr, NthStmt)
  MX_VISIT_BOOL(AsmStmt, is_simple, getVal11, setVal11, initVal11, IsSimple, bool, NthStmt)
  MX_VISIT_BOOL(AsmStmt, is_volatile, getVal14, setVal14, initVal14, IsVolatile, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(AsmStmt, outputs, getVal21, setVal21, initVal21, Outputs, Expr, NthStmt)
  MX_VISIT_TEXT_LIST(AsmStmt, output_constraints, getVal65, setVal65, initVal65, OutputConstraints, basic_string_view, NthStmt)
  MX_VISIT_ENTITY_LIST(AsmStmt, output_expressions, getVal22, setVal22, initVal22, OutputExpressions, Expr, NthStmt)
  MX_VISIT_TEXT_LIST(AsmStmt, input_constraints, getVal66, setVal66, initVal66, InputConstraints, basic_string_view, NthStmt)
  MX_VISIT_ENTITY_LIST(AsmStmt, input_expressions, getVal23, setVal23, initVal23, InputExpressions, Expr, NthStmt)
  MX_VISIT_TEXT_LIST(AsmStmt, clobbers, getVal67, setVal67, initVal67, Clobbers, basic_string_view, NthStmt)
  MX_EXIT_VISIT_AsmStmt
MX_END_VISIT_STMT(AsmStmt)

#ifndef MX_ENTER_VISIT_MSAsmStmt
#  define MX_ENTER_VISIT_MSAsmStmt MX_ENTER_VISIT_AsmStmt
#endif
#ifndef MX_EXIT_VISIT_MSAsmStmt
#  define MX_EXIT_VISIT_MSAsmStmt MX_EXIT_VISIT_AsmStmt
#endif

MX_BEGIN_VISIT_STMT(MSAsmStmt)
  MX_ENTER_VISIT_MSAsmStmt
  MX_VISIT_BASE(MSAsmStmt, AsmStmt)
  MX_VISIT_TEXT_LIST(MSAsmStmt, all_constraints, getVal68, setVal68, initVal68, AllConstraints, basic_string_view, NthStmt)
  MX_VISIT_ENTITY_LIST(MSAsmStmt, all_expressions, getVal24, setVal24, initVal24, AllExpressions, Expr, NthStmt)
  MX_VISIT_TEXT(MSAsmStmt, assembly_string, getVal69, setVal69, initVal69, AssemblyString, basic_string_view, NthStmt)
  MX_VISIT_ENTITY(MSAsmStmt, l_brace_token, getVal9, setVal9, initVal9, LBraceToken, Token, NthStmt, TokenUseSelector::L_BRACE_TOKEN)
  MX_VISIT_BOOL(MSAsmStmt, has_braces, getVal19, setVal19, initVal19, HasBraces, bool, NthStmt)
  MX_EXIT_VISIT_MSAsmStmt
MX_END_VISIT_STMT(MSAsmStmt)

#ifndef MX_ENTER_VISIT_GCCAsmStmt
#  define MX_ENTER_VISIT_GCCAsmStmt MX_ENTER_VISIT_AsmStmt
#endif
#ifndef MX_EXIT_VISIT_GCCAsmStmt
#  define MX_EXIT_VISIT_GCCAsmStmt MX_EXIT_VISIT_AsmStmt
#endif

MX_BEGIN_VISIT_STMT(GCCAsmStmt)
  MX_ENTER_VISIT_GCCAsmStmt
  MX_VISIT_BASE(GCCAsmStmt, AsmStmt)
  MX_VISIT_ENTITY(GCCAsmStmt, assembly_string, getVal9, setVal9, initVal9, AssemblyString, StringLiteral, NthStmt, StmtUseSelector::ASSEMBLY_STRING)
  MX_VISIT_ENTITY(GCCAsmStmt, r_paren_token, getVal10, setVal10, initVal10, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(GCCAsmStmt, is_assembly_goto, getVal19, setVal19, initVal19, IsAssemblyGoto, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(GCCAsmStmt, labels, getVal24, setVal24, initVal24, Labels, AddrLabelExpr, NthStmt)
  MX_VISIT_ENTITY_LIST(GCCAsmStmt, output_constraint_literals, getVal51, setVal51, initVal51, OutputConstraintLiterals, StringLiteral, NthStmt)
  MX_VISIT_TEXT_LIST(GCCAsmStmt, output_names, getVal68, setVal68, initVal68, OutputNames, basic_string_view, NthStmt)
  MX_VISIT_ENTITY_LIST(GCCAsmStmt, input_constraint_literals, getVal52, setVal52, initVal52, InputConstraintLiterals, StringLiteral, NthStmt)
  MX_VISIT_TEXT_LIST(GCCAsmStmt, input_names, getVal70, setVal70, initVal70, InputNames, basic_string_view, NthStmt)
  MX_VISIT_ENTITY_LIST(GCCAsmStmt, clobber_string_literals, getVal53, setVal53, initVal53, ClobberStringLiterals, StringLiteral, NthStmt)
  MX_VISIT_ENTITY_LIST(GCCAsmStmt, label_expressions, getVal71, setVal71, initVal71, LabelExpressions, AddrLabelExpr, NthStmt)
  MX_VISIT_TEXT_LIST(GCCAsmStmt, label_names, getVal72, setVal72, initVal72, LabelNames, basic_string_view, NthStmt)
  MX_EXIT_VISIT_GCCAsmStmt
MX_END_VISIT_STMT(GCCAsmStmt)

#ifndef MX_ENTER_VISIT_WhileStmt
#  define MX_ENTER_VISIT_WhileStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_WhileStmt
#  define MX_EXIT_VISIT_WhileStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(WhileStmt)
  MX_ENTER_VISIT_WhileStmt
  MX_VISIT_BASE(WhileStmt, Stmt)
  MX_VISIT_ENTITY(WhileStmt, body, getVal8, setVal8, initVal8, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(WhileStmt, condition, getVal9, setVal9, initVal9, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_OPTIONAL_ENTITY(WhileStmt, condition_variable, getVal10, setVal10, initVal10, ConditionVariable, VarDecl, NthStmt, DeclUseSelector::CONDITION_VARIABLE)
  MX_VISIT_OPTIONAL_ENTITY(WhileStmt, condition_variable_declaration_statement, getVal12, setVal12, initVal12, ConditionVariableDeclarationStatement, DeclStmt, NthStmt, StmtUseSelector::CONDITION_VARIABLE_DECLARATION_STATEMENT)
  MX_VISIT_ENTITY(WhileStmt, l_paren_token, getVal13, setVal13, initVal13, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(WhileStmt, r_paren_token, getVal16, setVal16, initVal16, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(WhileStmt, while_token, getVal17, setVal17, initVal17, WhileToken, Token, NthStmt, TokenUseSelector::WHILE_TOKEN)
  MX_VISIT_BOOL(WhileStmt, has_variable_storage, getVal19, setVal19, initVal19, HasVariableStorage, bool, NthStmt)
  MX_EXIT_VISIT_WhileStmt
MX_END_VISIT_STMT(WhileStmt)

#ifndef MX_ENTER_VISIT_ValueStmt
#  define MX_ENTER_VISIT_ValueStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_ValueStmt
#  define MX_EXIT_VISIT_ValueStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(ValueStmt)
  MX_ENTER_VISIT_ValueStmt
  MX_VISIT_BASE(ValueStmt, Stmt)
  MX_VISIT_OPTIONAL_ENTITY(ValueStmt, expression_statement, getVal8, setVal8, initVal8, ExpressionStatement, Expr, NthStmt, StmtUseSelector::EXPRESSION_STATEMENT)
  MX_EXIT_VISIT_ValueStmt
MX_END_VISIT_STMT(ValueStmt)

#ifndef MX_ENTER_VISIT_LabelStmt
#  define MX_ENTER_VISIT_LabelStmt MX_ENTER_VISIT_ValueStmt
#endif
#ifndef MX_EXIT_VISIT_LabelStmt
#  define MX_EXIT_VISIT_LabelStmt MX_EXIT_VISIT_ValueStmt
#endif

MX_BEGIN_VISIT_STMT(LabelStmt)
  MX_ENTER_VISIT_LabelStmt
  MX_VISIT_BASE(LabelStmt, ValueStmt)
  MX_VISIT_ENTITY(LabelStmt, declaration, getVal9, setVal9, initVal9, Declaration, LabelDecl, NthStmt, DeclUseSelector::DECLARATION)
  MX_VISIT_ENTITY(LabelStmt, identifier_token, getVal10, setVal10, initVal10, IdentifierToken, Token, NthStmt, TokenUseSelector::IDENTIFIER_TOKEN)
  MX_VISIT_TEXT(LabelStmt, name, getVal64, setVal64, initVal64, Name, basic_string_view, NthStmt)
  MX_VISIT_ENTITY(LabelStmt, sub_statement, getVal12, setVal12, initVal12, SubStatement, Stmt, NthStmt, StmtUseSelector::SUB_STATEMENT)
  MX_VISIT_BOOL(LabelStmt, is_side_entry, getVal14, setVal14, initVal14, IsSideEntry, bool, NthStmt)
  MX_EXIT_VISIT_LabelStmt
MX_END_VISIT_STMT(LabelStmt)

#ifndef MX_ENTER_VISIT_Expr
#  define MX_ENTER_VISIT_Expr MX_ENTER_VISIT_ValueStmt
#endif
#ifndef MX_EXIT_VISIT_Expr
#  define MX_EXIT_VISIT_Expr MX_EXIT_VISIT_ValueStmt
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(Expr)
  MX_ENTER_VISIT_Expr
  MX_VISIT_BASE(Expr, ValueStmt)
  MX_VISIT_BOOL(Expr, has_side_effects, getVal14, setVal14, initVal14, HasSideEffects, bool, NthStmt)
  MX_VISIT_ENTITY(Expr, ignore_casts, getVal9, setVal9, initVal9, IgnoreCasts, Expr, NthStmt, StmtUseSelector::IGNORE_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_conversion_operator_single_step, getVal10, setVal10, initVal10, IgnoreConversionOperatorSingleStep, Expr, NthStmt, StmtUseSelector::IGNORE_CONVERSION_OPERATOR_SINGLE_STEP)
  MX_VISIT_ENTITY(Expr, ignore_imp_casts, getVal12, setVal12, initVal12, IgnoreImpCasts, Expr, NthStmt, StmtUseSelector::IGNORE_IMP_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_implicit, getVal13, setVal13, initVal13, IgnoreImplicit, Expr, NthStmt, StmtUseSelector::IGNORE_IMPLICIT)
  MX_VISIT_ENTITY(Expr, ignore_implicit_as_written, getVal16, setVal16, initVal16, IgnoreImplicitAsWritten, Expr, NthStmt, StmtUseSelector::IGNORE_IMPLICIT_AS_WRITTEN)
  MX_VISIT_ENTITY(Expr, ignore_parenthesis_base_casts, getVal17, setVal17, initVal17, IgnoreParenthesisBaseCasts, Expr, NthStmt, StmtUseSelector::IGNORE_PARENTHESIS_BASE_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_parenthesis_casts, getVal18, setVal18, initVal18, IgnoreParenthesisCasts, Expr, NthStmt, StmtUseSelector::IGNORE_PARENTHESIS_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_parenthesis_imp_casts, getVal25, setVal25, initVal25, IgnoreParenthesisImpCasts, Expr, NthStmt, StmtUseSelector::IGNORE_PARENTHESIS_IMP_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_parenthesis_l_value_casts, getVal26, setVal26, initVal26, IgnoreParenthesisLValueCasts, Expr, NthStmt, StmtUseSelector::IGNORE_PARENTHESIS_L_VALUE_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_parenthesis_noop_casts, getVal27, setVal27, initVal27, IgnoreParenthesisNoopCasts, Expr, NthStmt, StmtUseSelector::IGNORE_PARENTHESIS_NOOP_CASTS)
  MX_VISIT_ENTITY(Expr, ignore_parentheses, getVal28, setVal28, initVal28, IgnoreParentheses, Expr, NthStmt, StmtUseSelector::IGNORE_PARENTHESES)
  MX_VISIT_ENTITY(Expr, ignore_unless_spelled_in_source, getVal29, setVal29, initVal29, IgnoreUnlessSpelledInSource, Expr, NthStmt, StmtUseSelector::IGNORE_UNLESS_SPELLED_IN_SOURCE)
  MX_VISIT_BOOL(Expr, contains_errors, getVal19, setVal19, initVal19, ContainsErrors, bool, NthStmt)
  MX_VISIT_BOOL(Expr, contains_unexpanded_parameter_pack, getVal20, setVal20, initVal20, ContainsUnexpandedParameterPack, bool, NthStmt)
  MX_VISIT_ENTITY(Expr, best_dynamic_class_type_expression, getVal30, setVal30, initVal30, BestDynamicClassTypeExpression, Expr, NthStmt, StmtUseSelector::BEST_DYNAMIC_CLASS_TYPE_EXPRESSION)
  MX_VISIT_ENTITY(Expr, expression_token, getVal31, setVal31, initVal31, ExpressionToken, Token, NthStmt, TokenUseSelector::EXPRESSION_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(Expr, obj_c_property, getVal32, setVal32, initVal32, ObjCProperty, ObjCPropertyRefExpr, NthStmt, StmtUseSelector::OBJ_C_PROPERTY)
  MX_VISIT_ENUM(Expr, object_kind, getVal55, setVal55, initVal55, ObjectKind, ExprObjectKind, NthStmt)
  MX_VISIT_OPTIONAL_ENTITY(Expr, referenced_declaration_of_callee, getVal33, setVal33, initVal33, ReferencedDeclarationOfCallee, Decl, NthStmt, DeclUseSelector::REFERENCED_DECLARATION_OF_CALLEE)
  MX_VISIT_OPTIONAL_ENTITY(Expr, source_bit_field, getVal34, setVal34, initVal34, SourceBitField, FieldDecl, NthStmt, DeclUseSelector::SOURCE_BIT_FIELD)
  MX_VISIT_OPTIONAL_ENTITY(Expr, type, getVal35, setVal35, initVal35, Type, Type, NthStmt, TypeUseSelector::TYPE)
  MX_VISIT_ENUM(Expr, value_kind, getVal73, setVal73, initVal73, ValueKind, ExprValueKind, NthStmt)
  MX_VISIT_BOOL(Expr, has_non_trivial_call, getVal60, setVal60, initVal60, HasNonTrivialCall, bool, NthStmt)
  MX_VISIT_OPTIONAL_BOOL(Expr, is_cxx98_integral_constant_expression, getVal61, setVal61, initVal61, IsCXX98IntegralConstantExpression, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_default_argument, getVal63, setVal63, initVal63, IsDefaultArgument, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_gl_value, getVal74, setVal74, initVal74, IsGLValue, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_implicit_cxx_this, getVal75, setVal75, initVal75, IsImplicitCXXThis, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_instantiation_dependent, getVal76, setVal76, initVal76, IsInstantiationDependent, bool, NthStmt)
  MX_VISIT_OPTIONAL_BOOL(Expr, is_integer_constant_expression, getVal77, setVal77, initVal77, IsIntegerConstantExpression, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_known_to_have_boolean_value, getVal79, setVal79, initVal79, IsKnownToHaveBooleanValue, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_l_value, getVal80, setVal80, initVal80, IsLValue, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_objcgc_candidate, getVal81, setVal81, initVal81, IsOBJCGCCandidate, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_obj_c_self_expression, getVal82, setVal82, initVal82, IsObjCSelfExpression, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_ordinary_or_bit_field_object, getVal83, setVal83, initVal83, IsOrdinaryOrBitFieldObject, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_pr_value, getVal84, setVal84, initVal84, IsPRValue, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_read_if_discarded_in_c_plus_plus11, getVal85, setVal85, initVal85, IsReadIfDiscardedInCPlusPlus11, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_type_dependent, getVal86, setVal86, initVal86, IsTypeDependent, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_value_dependent, getVal87, setVal87, initVal87, IsValueDependent, bool, NthStmt)
  MX_VISIT_BOOL(Expr, is_x_value, getVal88, setVal88, initVal88, IsXValue, bool, NthStmt)
  MX_VISIT_BOOL(Expr, refers_to_bit_field, getVal89, setVal89, initVal89, RefersToBitField, bool, NthStmt)
  MX_VISIT_BOOL(Expr, refers_to_global_register_variable, getVal90, setVal90, initVal90, RefersToGlobalRegisterVariable, bool, NthStmt)
  MX_VISIT_BOOL(Expr, refers_to_matrix_element, getVal91, setVal91, initVal91, RefersToMatrixElement, bool, NthStmt)
  MX_VISIT_BOOL(Expr, refers_to_vector_element, getVal92, setVal92, initVal92, RefersToVectorElement, bool, NthStmt)
  MX_EXIT_VISIT_Expr
MX_END_VISIT_STMT(Expr)

#ifndef MX_ENTER_VISIT_DesignatedInitUpdateExpr
#  define MX_ENTER_VISIT_DesignatedInitUpdateExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_DesignatedInitUpdateExpr
#  define MX_EXIT_VISIT_DesignatedInitUpdateExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(DesignatedInitUpdateExpr)
  MX_ENTER_VISIT_DesignatedInitUpdateExpr
  MX_VISIT_BASE(DesignatedInitUpdateExpr, Expr)
  MX_VISIT_ENTITY(DesignatedInitUpdateExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(DesignatedInitUpdateExpr, updater, getVal37, setVal37, initVal37, Updater, InitListExpr, NthStmt, StmtUseSelector::UPDATER)
  MX_EXIT_VISIT_DesignatedInitUpdateExpr
MX_END_VISIT_STMT(DesignatedInitUpdateExpr)

#ifndef MX_ENTER_VISIT_DesignatedInitExpr
#  define MX_ENTER_VISIT_DesignatedInitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_DesignatedInitExpr
#  define MX_EXIT_VISIT_DesignatedInitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(DesignatedInitExpr)
  MX_ENTER_VISIT_DesignatedInitExpr
  MX_VISIT_BASE(DesignatedInitExpr, Expr)
  MX_VISIT_ENTITY(DesignatedInitExpr, equal_or_colon_token, getVal38, setVal38, initVal38, EqualOrColonToken, Token, NthStmt, TokenUseSelector::EQUAL_OR_COLON_TOKEN)
  MX_VISIT_ENTITY(DesignatedInitExpr, initializer, getVal39, setVal39, initVal39, Initializer, Expr, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_BOOL(DesignatedInitExpr, is_direct_initializer, getVal93, setVal93, initVal93, IsDirectInitializer, bool, NthStmt)
  MX_VISIT_BOOL(DesignatedInitExpr, uses_gnu_syntax, getVal94, setVal94, initVal94, UsesGNUSyntax, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(DesignatedInitExpr, sub_expressions, getVal15, setVal15, initVal15, SubExpressions, Expr, NthStmt)
  MX_EXIT_VISIT_DesignatedInitExpr
MX_END_VISIT_STMT(DesignatedInitExpr)

#ifndef MX_ENTER_VISIT_DependentScopeDeclRefExpr
#  define MX_ENTER_VISIT_DependentScopeDeclRefExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_DependentScopeDeclRefExpr
#  define MX_EXIT_VISIT_DependentScopeDeclRefExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(DependentScopeDeclRefExpr)
  MX_ENTER_VISIT_DependentScopeDeclRefExpr
  MX_VISIT_BASE(DependentScopeDeclRefExpr, Expr)
  MX_VISIT_ENTITY(DependentScopeDeclRefExpr, l_angle_token, getVal36, setVal36, initVal36, LAngleToken, Token, NthStmt, TokenUseSelector::L_ANGLE_TOKEN)
  MX_VISIT_ENTITY(DependentScopeDeclRefExpr, r_angle_token, getVal37, setVal37, initVal37, RAngleToken, Token, NthStmt, TokenUseSelector::R_ANGLE_TOKEN)
  MX_VISIT_ENTITY(DependentScopeDeclRefExpr, template_keyword_token, getVal38, setVal38, initVal38, TemplateKeywordToken, Token, NthStmt, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_BOOL(DependentScopeDeclRefExpr, has_explicit_template_arguments, getVal93, setVal93, initVal93, HasExplicitTemplateArguments, bool, NthStmt)
  MX_VISIT_BOOL(DependentScopeDeclRefExpr, has_template_keyword, getVal94, setVal94, initVal94, HasTemplateKeyword, bool, NthStmt)
  MX_EXIT_VISIT_DependentScopeDeclRefExpr
MX_END_VISIT_STMT(DependentScopeDeclRefExpr)

#ifndef MX_ENTER_VISIT_DependentCoawaitExpr
#  define MX_ENTER_VISIT_DependentCoawaitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_DependentCoawaitExpr
#  define MX_EXIT_VISIT_DependentCoawaitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(DependentCoawaitExpr)
  MX_ENTER_VISIT_DependentCoawaitExpr
  MX_VISIT_BASE(DependentCoawaitExpr, Expr)
  MX_VISIT_ENTITY(DependentCoawaitExpr, keyword_token, getVal36, setVal36, initVal36, KeywordToken, Token, NthStmt, TokenUseSelector::KEYWORD_TOKEN)
  MX_VISIT_ENTITY(DependentCoawaitExpr, operand, getVal37, setVal37, initVal37, Operand, Expr, NthStmt, StmtUseSelector::OPERAND)
  MX_VISIT_ENTITY(DependentCoawaitExpr, operator_coawait_lookup, getVal38, setVal38, initVal38, OperatorCoawaitLookup, UnresolvedLookupExpr, NthStmt, StmtUseSelector::OPERATOR_COAWAIT_LOOKUP)
  MX_EXIT_VISIT_DependentCoawaitExpr
MX_END_VISIT_STMT(DependentCoawaitExpr)

#ifndef MX_ENTER_VISIT_DeclRefExpr
#  define MX_ENTER_VISIT_DeclRefExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_DeclRefExpr
#  define MX_EXIT_VISIT_DeclRefExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(DeclRefExpr)
  MX_ENTER_VISIT_DeclRefExpr
  MX_VISIT_BASE(DeclRefExpr, Expr)
  MX_VISIT_ENTITY(DeclRefExpr, declaration, getVal36, setVal36, initVal36, Declaration, ValueDecl, NthStmt, DeclUseSelector::DECLARATION)
  MX_VISIT_ENTITY(DeclRefExpr, found_declaration, getVal37, setVal37, initVal37, FoundDeclaration, NamedDecl, NthStmt, DeclUseSelector::FOUND_DECLARATION)
  MX_VISIT_ENTITY(DeclRefExpr, l_angle_token, getVal38, setVal38, initVal38, LAngleToken, Token, NthStmt, TokenUseSelector::L_ANGLE_TOKEN)
  MX_VISIT_ENTITY(DeclRefExpr, r_angle_token, getVal39, setVal39, initVal39, RAngleToken, Token, NthStmt, TokenUseSelector::R_ANGLE_TOKEN)
  MX_VISIT_ENTITY(DeclRefExpr, template_keyword_token, getVal40, setVal40, initVal40, TemplateKeywordToken, Token, NthStmt, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_BOOL(DeclRefExpr, had_multiple_candidates, getVal93, setVal93, initVal93, HadMultipleCandidates, bool, NthStmt)
  MX_VISIT_BOOL(DeclRefExpr, has_explicit_template_arguments, getVal94, setVal94, initVal94, HasExplicitTemplateArguments, bool, NthStmt)
  MX_VISIT_BOOL(DeclRefExpr, has_qualifier, getVal95, setVal95, initVal95, HasQualifier, bool, NthStmt)
  MX_VISIT_BOOL(DeclRefExpr, has_template_keyword_and_arguments_info, getVal96, setVal96, initVal96, HasTemplateKeywordAndArgumentsInfo, bool, NthStmt)
  MX_VISIT_BOOL(DeclRefExpr, has_template_keyword, getVal97, setVal97, initVal97, HasTemplateKeyword, bool, NthStmt)
  MX_VISIT_ENUM(DeclRefExpr, is_non_odr_use, getVal98, setVal98, initVal98, IsNonOdrUse, NonOdrUseReason, NthStmt)
  MX_VISIT_BOOL(DeclRefExpr, refers_to_enclosing_variable_or_capture, getVal99, setVal99, initVal99, RefersToEnclosingVariableOrCapture, bool, NthStmt)
  MX_EXIT_VISIT_DeclRefExpr
MX_END_VISIT_STMT(DeclRefExpr)

#ifndef MX_ENTER_VISIT_CoroutineSuspendExpr
#  define MX_ENTER_VISIT_CoroutineSuspendExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CoroutineSuspendExpr
#  define MX_EXIT_VISIT_CoroutineSuspendExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(CoroutineSuspendExpr)
  MX_ENTER_VISIT_CoroutineSuspendExpr
  MX_VISIT_BASE(CoroutineSuspendExpr, Expr)
  MX_VISIT_ENTITY(CoroutineSuspendExpr, common_expression, getVal36, setVal36, initVal36, CommonExpression, Expr, NthStmt, StmtUseSelector::COMMON_EXPRESSION)
  MX_VISIT_ENTITY(CoroutineSuspendExpr, keyword_token, getVal37, setVal37, initVal37, KeywordToken, Token, NthStmt, TokenUseSelector::KEYWORD_TOKEN)
  MX_VISIT_ENTITY(CoroutineSuspendExpr, opaque_value, getVal38, setVal38, initVal38, OpaqueValue, OpaqueValueExpr, NthStmt, StmtUseSelector::OPAQUE_VALUE)
  MX_VISIT_ENTITY(CoroutineSuspendExpr, ready_expression, getVal39, setVal39, initVal39, ReadyExpression, Expr, NthStmt, StmtUseSelector::READY_EXPRESSION)
  MX_VISIT_ENTITY(CoroutineSuspendExpr, resume_expression, getVal40, setVal40, initVal40, ResumeExpression, Expr, NthStmt, StmtUseSelector::RESUME_EXPRESSION)
  MX_VISIT_ENTITY(CoroutineSuspendExpr, suspend_expression, getVal41, setVal41, initVal41, SuspendExpression, Expr, NthStmt, StmtUseSelector::SUSPEND_EXPRESSION)
  MX_EXIT_VISIT_CoroutineSuspendExpr
MX_END_VISIT_STMT(CoroutineSuspendExpr)

#ifndef MX_ENTER_VISIT_CoawaitExpr
#  define MX_ENTER_VISIT_CoawaitExpr MX_ENTER_VISIT_CoroutineSuspendExpr
#endif
#ifndef MX_EXIT_VISIT_CoawaitExpr
#  define MX_EXIT_VISIT_CoawaitExpr MX_EXIT_VISIT_CoroutineSuspendExpr
#endif

MX_BEGIN_VISIT_STMT(CoawaitExpr)
  MX_ENTER_VISIT_CoawaitExpr
  MX_VISIT_BASE(CoawaitExpr, CoroutineSuspendExpr)
  MX_VISIT_ENTITY(CoawaitExpr, operand, getVal42, setVal42, initVal42, Operand, Expr, NthStmt, StmtUseSelector::OPERAND)
  MX_VISIT_BOOL(CoawaitExpr, is_implicit, getVal93, setVal93, initVal93, IsImplicit, bool, NthStmt)
  MX_EXIT_VISIT_CoawaitExpr
MX_END_VISIT_STMT(CoawaitExpr)

#ifndef MX_ENTER_VISIT_CoyieldExpr
#  define MX_ENTER_VISIT_CoyieldExpr MX_ENTER_VISIT_CoroutineSuspendExpr
#endif
#ifndef MX_EXIT_VISIT_CoyieldExpr
#  define MX_EXIT_VISIT_CoyieldExpr MX_EXIT_VISIT_CoroutineSuspendExpr
#endif

MX_BEGIN_VISIT_STMT(CoyieldExpr)
  MX_ENTER_VISIT_CoyieldExpr
  MX_VISIT_BASE(CoyieldExpr, CoroutineSuspendExpr)
  MX_VISIT_ENTITY(CoyieldExpr, operand, getVal42, setVal42, initVal42, Operand, Expr, NthStmt, StmtUseSelector::OPERAND)
  MX_EXIT_VISIT_CoyieldExpr
MX_END_VISIT_STMT(CoyieldExpr)

#ifndef MX_ENTER_VISIT_ConvertVectorExpr
#  define MX_ENTER_VISIT_ConvertVectorExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ConvertVectorExpr
#  define MX_EXIT_VISIT_ConvertVectorExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ConvertVectorExpr)
  MX_ENTER_VISIT_ConvertVectorExpr
  MX_VISIT_BASE(ConvertVectorExpr, Expr)
  MX_VISIT_ENTITY(ConvertVectorExpr, builtin_token, getVal36, setVal36, initVal36, BuiltinToken, Token, NthStmt, TokenUseSelector::BUILTIN_TOKEN)
  MX_VISIT_ENTITY(ConvertVectorExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(ConvertVectorExpr, src_expression, getVal38, setVal38, initVal38, SrcExpression, Expr, NthStmt, StmtUseSelector::SRC_EXPRESSION)
  MX_EXIT_VISIT_ConvertVectorExpr
MX_END_VISIT_STMT(ConvertVectorExpr)

#ifndef MX_ENTER_VISIT_ConceptSpecializationExpr
#  define MX_ENTER_VISIT_ConceptSpecializationExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ConceptSpecializationExpr
#  define MX_EXIT_VISIT_ConceptSpecializationExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ConceptSpecializationExpr)
  MX_ENTER_VISIT_ConceptSpecializationExpr
  MX_VISIT_BASE(ConceptSpecializationExpr, Expr)
  MX_VISIT_PSEUDO_LIST(ConceptSpecializationExpr, template_arguments, getVal100, setVal100, initVal100, TemplateArguments, TemplateArgument, NthStmt)
  MX_VISIT_BOOL(ConceptSpecializationExpr, is_satisfied, getVal93, setVal93, initVal93, IsSatisfied, bool, NthStmt)
  MX_EXIT_VISIT_ConceptSpecializationExpr
MX_END_VISIT_STMT(ConceptSpecializationExpr)

#ifndef MX_ENTER_VISIT_CompoundLiteralExpr
#  define MX_ENTER_VISIT_CompoundLiteralExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CompoundLiteralExpr
#  define MX_EXIT_VISIT_CompoundLiteralExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CompoundLiteralExpr)
  MX_ENTER_VISIT_CompoundLiteralExpr
  MX_VISIT_BASE(CompoundLiteralExpr, Expr)
  MX_VISIT_ENTITY(CompoundLiteralExpr, initializer, getVal36, setVal36, initVal36, Initializer, Expr, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(CompoundLiteralExpr, l_paren_token, getVal37, setVal37, initVal37, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_BOOL(CompoundLiteralExpr, is_file_scope, getVal93, setVal93, initVal93, IsFileScope, bool, NthStmt)
  MX_EXIT_VISIT_CompoundLiteralExpr
MX_END_VISIT_STMT(CompoundLiteralExpr)

#ifndef MX_ENTER_VISIT_ChooseExpr
#  define MX_ENTER_VISIT_ChooseExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ChooseExpr
#  define MX_EXIT_VISIT_ChooseExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ChooseExpr)
  MX_ENTER_VISIT_ChooseExpr
  MX_VISIT_BASE(ChooseExpr, Expr)
  MX_VISIT_ENTITY(ChooseExpr, builtin_token, getVal36, setVal36, initVal36, BuiltinToken, Token, NthStmt, TokenUseSelector::BUILTIN_TOKEN)
  MX_VISIT_ENTITY(ChooseExpr, chosen_sub_expression, getVal37, setVal37, initVal37, ChosenSubExpression, Expr, NthStmt, StmtUseSelector::CHOSEN_SUB_EXPRESSION)
  MX_VISIT_ENTITY(ChooseExpr, condition, getVal38, setVal38, initVal38, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_ENTITY(ChooseExpr, lhs, getVal39, setVal39, initVal39, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_ENTITY(ChooseExpr, rhs, getVal40, setVal40, initVal40, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_VISIT_ENTITY(ChooseExpr, r_paren_token, getVal41, setVal41, initVal41, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(ChooseExpr, is_condition_dependent, getVal93, setVal93, initVal93, IsConditionDependent, bool, NthStmt)
  MX_VISIT_BOOL(ChooseExpr, is_condition_true, getVal94, setVal94, initVal94, IsConditionTrue, bool, NthStmt)
  MX_EXIT_VISIT_ChooseExpr
MX_END_VISIT_STMT(ChooseExpr)

#ifndef MX_ENTER_VISIT_CharacterLiteral
#  define MX_ENTER_VISIT_CharacterLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CharacterLiteral
#  define MX_EXIT_VISIT_CharacterLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CharacterLiteral)
  MX_ENTER_VISIT_CharacterLiteral
  MX_VISIT_BASE(CharacterLiteral, Expr)
  MX_VISIT_ENTITY(CharacterLiteral, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_EXIT_VISIT_CharacterLiteral
MX_END_VISIT_STMT(CharacterLiteral)

#ifndef MX_ENTER_VISIT_CastExpr
#  define MX_ENTER_VISIT_CastExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CastExpr
#  define MX_EXIT_VISIT_CastExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(CastExpr)
  MX_ENTER_VISIT_CastExpr
  MX_VISIT_BASE(CastExpr, Expr)
  MX_VISIT_ENUM(CastExpr, cast_kind, getVal98, setVal98, initVal98, CastKind, CastKind, NthStmt)
  MX_VISIT_TEXT(CastExpr, cast_kind_name, getVal64, setVal64, initVal64, CastKindName, basic_string_view, NthStmt)
  MX_VISIT_OPTIONAL_ENTITY(CastExpr, conversion_function, getVal36, setVal36, initVal36, ConversionFunction, NamedDecl, NthStmt, DeclUseSelector::CONVERSION_FUNCTION)
  MX_VISIT_ENTITY(CastExpr, sub_expression, getVal37, setVal37, initVal37, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_ENTITY(CastExpr, sub_expression_as_written, getVal38, setVal38, initVal38, SubExpressionAsWritten, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION_AS_WRITTEN)
  MX_VISIT_OPTIONAL_ENTITY(CastExpr, target_union_field, getVal39, setVal39, initVal39, TargetUnionField, FieldDecl, NthStmt, DeclUseSelector::TARGET_UNION_FIELD)
  MX_VISIT_BOOL(CastExpr, has_stored_fp_features, getVal95, setVal95, initVal95, HasStoredFPFeatures, bool, NthStmt)
  MX_EXIT_VISIT_CastExpr
MX_END_VISIT_STMT(CastExpr)

#ifndef MX_ENTER_VISIT_ImplicitCastExpr
#  define MX_ENTER_VISIT_ImplicitCastExpr MX_ENTER_VISIT_CastExpr
#endif
#ifndef MX_EXIT_VISIT_ImplicitCastExpr
#  define MX_EXIT_VISIT_ImplicitCastExpr MX_EXIT_VISIT_CastExpr
#endif

MX_BEGIN_VISIT_STMT(ImplicitCastExpr)
  MX_ENTER_VISIT_ImplicitCastExpr
  MX_VISIT_BASE(ImplicitCastExpr, CastExpr)
  MX_VISIT_BOOL(ImplicitCastExpr, is_part_of_explicit_cast, getVal96, setVal96, initVal96, IsPartOfExplicitCast, bool, NthStmt)
  MX_EXIT_VISIT_ImplicitCastExpr
MX_END_VISIT_STMT(ImplicitCastExpr)

#ifndef MX_ENTER_VISIT_ExplicitCastExpr
#  define MX_ENTER_VISIT_ExplicitCastExpr MX_ENTER_VISIT_CastExpr
#endif
#ifndef MX_EXIT_VISIT_ExplicitCastExpr
#  define MX_EXIT_VISIT_ExplicitCastExpr MX_EXIT_VISIT_CastExpr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(ExplicitCastExpr)
  MX_ENTER_VISIT_ExplicitCastExpr
  MX_VISIT_BASE(ExplicitCastExpr, CastExpr)
  MX_VISIT_ENTITY(ExplicitCastExpr, type_as_written, getVal40, setVal40, initVal40, TypeAsWritten, Type, NthStmt, TypeUseSelector::TYPE_AS_WRITTEN)
  MX_EXIT_VISIT_ExplicitCastExpr
MX_END_VISIT_STMT(ExplicitCastExpr)

#ifndef MX_ENTER_VISIT_CXXNamedCastExpr
#  define MX_ENTER_VISIT_CXXNamedCastExpr MX_ENTER_VISIT_ExplicitCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXNamedCastExpr
#  define MX_EXIT_VISIT_CXXNamedCastExpr MX_EXIT_VISIT_ExplicitCastExpr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(CXXNamedCastExpr)
  MX_ENTER_VISIT_CXXNamedCastExpr
  MX_VISIT_BASE(CXXNamedCastExpr, ExplicitCastExpr)
  MX_VISIT_TEXT(CXXNamedCastExpr, cast_name, getVal69, setVal69, initVal69, CastName, basic_string_view, NthStmt)
  MX_VISIT_ENTITY(CXXNamedCastExpr, operator_token, getVal43, setVal43, initVal43, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(CXXNamedCastExpr, r_paren_token, getVal44, setVal44, initVal44, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_CXXNamedCastExpr
MX_END_VISIT_STMT(CXXNamedCastExpr)

#ifndef MX_ENTER_VISIT_CXXDynamicCastExpr
#  define MX_ENTER_VISIT_CXXDynamicCastExpr MX_ENTER_VISIT_CXXNamedCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXDynamicCastExpr
#  define MX_EXIT_VISIT_CXXDynamicCastExpr MX_EXIT_VISIT_CXXNamedCastExpr
#endif

MX_BEGIN_VISIT_STMT(CXXDynamicCastExpr)
  MX_ENTER_VISIT_CXXDynamicCastExpr
  MX_VISIT_BASE(CXXDynamicCastExpr, CXXNamedCastExpr)
  MX_VISIT_BOOL(CXXDynamicCastExpr, is_always_null, getVal96, setVal96, initVal96, IsAlwaysNull, bool, NthStmt)
  MX_EXIT_VISIT_CXXDynamicCastExpr
MX_END_VISIT_STMT(CXXDynamicCastExpr)

#ifndef MX_ENTER_VISIT_CXXConstCastExpr
#  define MX_ENTER_VISIT_CXXConstCastExpr MX_ENTER_VISIT_CXXNamedCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXConstCastExpr
#  define MX_EXIT_VISIT_CXXConstCastExpr MX_EXIT_VISIT_CXXNamedCastExpr
#endif

MX_BEGIN_VISIT_STMT(CXXConstCastExpr)
  MX_ENTER_VISIT_CXXConstCastExpr
  MX_VISIT_BASE(CXXConstCastExpr, CXXNamedCastExpr)
  MX_EXIT_VISIT_CXXConstCastExpr
MX_END_VISIT_STMT(CXXConstCastExpr)

#ifndef MX_ENTER_VISIT_CXXAddrspaceCastExpr
#  define MX_ENTER_VISIT_CXXAddrspaceCastExpr MX_ENTER_VISIT_CXXNamedCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXAddrspaceCastExpr
#  define MX_EXIT_VISIT_CXXAddrspaceCastExpr MX_EXIT_VISIT_CXXNamedCastExpr
#endif

MX_BEGIN_VISIT_STMT(CXXAddrspaceCastExpr)
  MX_ENTER_VISIT_CXXAddrspaceCastExpr
  MX_VISIT_BASE(CXXAddrspaceCastExpr, CXXNamedCastExpr)
  MX_EXIT_VISIT_CXXAddrspaceCastExpr
MX_END_VISIT_STMT(CXXAddrspaceCastExpr)

#ifndef MX_ENTER_VISIT_CXXStaticCastExpr
#  define MX_ENTER_VISIT_CXXStaticCastExpr MX_ENTER_VISIT_CXXNamedCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXStaticCastExpr
#  define MX_EXIT_VISIT_CXXStaticCastExpr MX_EXIT_VISIT_CXXNamedCastExpr
#endif

MX_BEGIN_VISIT_STMT(CXXStaticCastExpr)
  MX_ENTER_VISIT_CXXStaticCastExpr
  MX_VISIT_BASE(CXXStaticCastExpr, CXXNamedCastExpr)
  MX_EXIT_VISIT_CXXStaticCastExpr
MX_END_VISIT_STMT(CXXStaticCastExpr)

#ifndef MX_ENTER_VISIT_CXXReinterpretCastExpr
#  define MX_ENTER_VISIT_CXXReinterpretCastExpr MX_ENTER_VISIT_CXXNamedCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXReinterpretCastExpr
#  define MX_EXIT_VISIT_CXXReinterpretCastExpr MX_EXIT_VISIT_CXXNamedCastExpr
#endif

MX_BEGIN_VISIT_STMT(CXXReinterpretCastExpr)
  MX_ENTER_VISIT_CXXReinterpretCastExpr
  MX_VISIT_BASE(CXXReinterpretCastExpr, CXXNamedCastExpr)
  MX_EXIT_VISIT_CXXReinterpretCastExpr
MX_END_VISIT_STMT(CXXReinterpretCastExpr)

#ifndef MX_ENTER_VISIT_CXXFunctionalCastExpr
#  define MX_ENTER_VISIT_CXXFunctionalCastExpr MX_ENTER_VISIT_ExplicitCastExpr
#endif
#ifndef MX_EXIT_VISIT_CXXFunctionalCastExpr
#  define MX_EXIT_VISIT_CXXFunctionalCastExpr MX_EXIT_VISIT_ExplicitCastExpr
#endif

MX_BEGIN_VISIT_STMT(CXXFunctionalCastExpr)
  MX_ENTER_VISIT_CXXFunctionalCastExpr
  MX_VISIT_BASE(CXXFunctionalCastExpr, ExplicitCastExpr)
  MX_VISIT_ENTITY(CXXFunctionalCastExpr, l_paren_token, getVal41, setVal41, initVal41, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(CXXFunctionalCastExpr, r_paren_token, getVal42, setVal42, initVal42, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(CXXFunctionalCastExpr, is_list_initialization, getVal96, setVal96, initVal96, IsListInitialization, bool, NthStmt)
  MX_EXIT_VISIT_CXXFunctionalCastExpr
MX_END_VISIT_STMT(CXXFunctionalCastExpr)

#ifndef MX_ENTER_VISIT_CStyleCastExpr
#  define MX_ENTER_VISIT_CStyleCastExpr MX_ENTER_VISIT_ExplicitCastExpr
#endif
#ifndef MX_EXIT_VISIT_CStyleCastExpr
#  define MX_EXIT_VISIT_CStyleCastExpr MX_EXIT_VISIT_ExplicitCastExpr
#endif

MX_BEGIN_VISIT_STMT(CStyleCastExpr)
  MX_ENTER_VISIT_CStyleCastExpr
  MX_VISIT_BASE(CStyleCastExpr, ExplicitCastExpr)
  MX_VISIT_ENTITY(CStyleCastExpr, l_paren_token, getVal41, setVal41, initVal41, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(CStyleCastExpr, r_paren_token, getVal42, setVal42, initVal42, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_CStyleCastExpr
MX_END_VISIT_STMT(CStyleCastExpr)

#ifndef MX_ENTER_VISIT_BuiltinBitCastExpr
#  define MX_ENTER_VISIT_BuiltinBitCastExpr MX_ENTER_VISIT_ExplicitCastExpr
#endif
#ifndef MX_EXIT_VISIT_BuiltinBitCastExpr
#  define MX_EXIT_VISIT_BuiltinBitCastExpr MX_EXIT_VISIT_ExplicitCastExpr
#endif

MX_BEGIN_VISIT_STMT(BuiltinBitCastExpr)
  MX_ENTER_VISIT_BuiltinBitCastExpr
  MX_VISIT_BASE(BuiltinBitCastExpr, ExplicitCastExpr)
  MX_EXIT_VISIT_BuiltinBitCastExpr
MX_END_VISIT_STMT(BuiltinBitCastExpr)

#ifndef MX_ENTER_VISIT_ObjCBridgedCastExpr
#  define MX_ENTER_VISIT_ObjCBridgedCastExpr MX_ENTER_VISIT_ExplicitCastExpr
#endif
#ifndef MX_EXIT_VISIT_ObjCBridgedCastExpr
#  define MX_EXIT_VISIT_ObjCBridgedCastExpr MX_EXIT_VISIT_ExplicitCastExpr
#endif

MX_BEGIN_VISIT_STMT(ObjCBridgedCastExpr)
  MX_ENTER_VISIT_ObjCBridgedCastExpr
  MX_VISIT_BASE(ObjCBridgedCastExpr, ExplicitCastExpr)
  MX_VISIT_ENTITY(ObjCBridgedCastExpr, bridge_keyword_token, getVal41, setVal41, initVal41, BridgeKeywordToken, Token, NthStmt, TokenUseSelector::BRIDGE_KEYWORD_TOKEN)
  MX_VISIT_ENUM(ObjCBridgedCastExpr, bridge_kind, getVal101, setVal101, initVal101, BridgeKind, ObjCBridgeCastKind, NthStmt)
  MX_VISIT_TEXT(ObjCBridgedCastExpr, bridge_kind_name, getVal69, setVal69, initVal69, BridgeKindName, basic_string_view, NthStmt)
  MX_VISIT_ENTITY(ObjCBridgedCastExpr, l_paren_token, getVal42, setVal42, initVal42, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_EXIT_VISIT_ObjCBridgedCastExpr
MX_END_VISIT_STMT(ObjCBridgedCastExpr)

#ifndef MX_ENTER_VISIT_CallExpr
#  define MX_ENTER_VISIT_CallExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CallExpr
#  define MX_EXIT_VISIT_CallExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CallExpr)
  MX_ENTER_VISIT_CallExpr
  MX_VISIT_BASE(CallExpr, Expr)
  MX_VISIT_ENTITY_LIST(CallExpr, arguments, getVal15, setVal15, initVal15, Arguments, Expr, NthStmt)
  MX_VISIT_ENUM(CallExpr, adl_call_kind, getVal98, setVal98, initVal98, ADLCallKind, CallExprADLCallKind, NthStmt)
  MX_VISIT_ENTITY(CallExpr, call_return_type, getVal36, setVal36, initVal36, CallReturnType, Type, NthStmt, TypeUseSelector::CALL_RETURN_TYPE)
  MX_VISIT_ENTITY(CallExpr, callee, getVal37, setVal37, initVal37, Callee, Expr, NthStmt, StmtUseSelector::CALLEE)
  MX_VISIT_OPTIONAL_ENTITY(CallExpr, callee_declaration, getVal38, setVal38, initVal38, CalleeDeclaration, Decl, NthStmt, DeclUseSelector::CALLEE_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(CallExpr, direct_callee, getVal39, setVal39, initVal39, DirectCallee, FunctionDecl, NthStmt, DeclUseSelector::DIRECT_CALLEE)
  MX_VISIT_ENTITY(CallExpr, r_paren_token, getVal40, setVal40, initVal40, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(CallExpr, has_stored_fp_features, getVal95, setVal95, initVal95, HasStoredFPFeatures, bool, NthStmt)
  MX_VISIT_BOOL(CallExpr, has_unused_result_attribute, getVal96, setVal96, initVal96, HasUnusedResultAttribute, bool, NthStmt)
  MX_VISIT_BOOL(CallExpr, is_builtin_assume_false, getVal97, setVal97, initVal97, IsBuiltinAssumeFalse, bool, NthStmt)
  MX_VISIT_BOOL(CallExpr, is_call_to_std_move, getVal99, setVal99, initVal99, IsCallToStdMove, bool, NthStmt)
  MX_VISIT_BOOL(CallExpr, is_unevaluated_builtin_call, getVal102, setVal102, initVal102, IsUnevaluatedBuiltinCall, bool, NthStmt)
  MX_VISIT_BOOL(CallExpr, uses_adl, getVal103, setVal103, initVal103, UsesADL, bool, NthStmt)
  MX_EXIT_VISIT_CallExpr
MX_END_VISIT_STMT(CallExpr)

#ifndef MX_ENTER_VISIT_CXXOperatorCallExpr
#  define MX_ENTER_VISIT_CXXOperatorCallExpr MX_ENTER_VISIT_CallExpr
#endif
#ifndef MX_EXIT_VISIT_CXXOperatorCallExpr
#  define MX_EXIT_VISIT_CXXOperatorCallExpr MX_EXIT_VISIT_CallExpr
#endif

MX_BEGIN_VISIT_STMT(CXXOperatorCallExpr)
  MX_ENTER_VISIT_CXXOperatorCallExpr
  MX_VISIT_BASE(CXXOperatorCallExpr, CallExpr)
  MX_VISIT_ENUM(CXXOperatorCallExpr, operator_, getVal101, setVal101, initVal101, Operator, OverloadedOperatorKind, NthStmt)
  MX_VISIT_ENTITY(CXXOperatorCallExpr, operator_token, getVal41, setVal41, initVal41, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_BOOL(CXXOperatorCallExpr, is_assignment_operation, getVal104, setVal104, initVal104, IsAssignmentOperation, bool, NthStmt)
  MX_VISIT_BOOL(CXXOperatorCallExpr, is_comparison_operation, getVal105, setVal105, initVal105, IsComparisonOperation, bool, NthStmt)
  MX_VISIT_BOOL(CXXOperatorCallExpr, is_infix_binary_operation, getVal106, setVal106, initVal106, IsInfixBinaryOperation, bool, NthStmt)
  MX_EXIT_VISIT_CXXOperatorCallExpr
MX_END_VISIT_STMT(CXXOperatorCallExpr)

#ifndef MX_ENTER_VISIT_CXXMemberCallExpr
#  define MX_ENTER_VISIT_CXXMemberCallExpr MX_ENTER_VISIT_CallExpr
#endif
#ifndef MX_EXIT_VISIT_CXXMemberCallExpr
#  define MX_EXIT_VISIT_CXXMemberCallExpr MX_EXIT_VISIT_CallExpr
#endif

MX_BEGIN_VISIT_STMT(CXXMemberCallExpr)
  MX_ENTER_VISIT_CXXMemberCallExpr
  MX_VISIT_BASE(CXXMemberCallExpr, CallExpr)
  MX_VISIT_ENTITY(CXXMemberCallExpr, implicit_object_argument, getVal41, setVal41, initVal41, ImplicitObjectArgument, Expr, NthStmt, StmtUseSelector::IMPLICIT_OBJECT_ARGUMENT)
  MX_VISIT_OPTIONAL_ENTITY(CXXMemberCallExpr, method_declaration, getVal42, setVal42, initVal42, MethodDeclaration, CXXMethodDecl, NthStmt, DeclUseSelector::METHOD_DECLARATION)
  MX_VISIT_ENTITY(CXXMemberCallExpr, object_type, getVal43, setVal43, initVal43, ObjectType, Type, NthStmt, TypeUseSelector::OBJECT_TYPE)
  MX_VISIT_ENTITY(CXXMemberCallExpr, record_declaration, getVal44, setVal44, initVal44, RecordDeclaration, CXXRecordDecl, NthStmt, DeclUseSelector::RECORD_DECLARATION)
  MX_EXIT_VISIT_CXXMemberCallExpr
MX_END_VISIT_STMT(CXXMemberCallExpr)

#ifndef MX_ENTER_VISIT_CUDAKernelCallExpr
#  define MX_ENTER_VISIT_CUDAKernelCallExpr MX_ENTER_VISIT_CallExpr
#endif
#ifndef MX_EXIT_VISIT_CUDAKernelCallExpr
#  define MX_EXIT_VISIT_CUDAKernelCallExpr MX_EXIT_VISIT_CallExpr
#endif

MX_BEGIN_VISIT_STMT(CUDAKernelCallExpr)
  MX_ENTER_VISIT_CUDAKernelCallExpr
  MX_VISIT_BASE(CUDAKernelCallExpr, CallExpr)
  MX_VISIT_ENTITY(CUDAKernelCallExpr, config, getVal41, setVal41, initVal41, Config, CallExpr, NthStmt, StmtUseSelector::CONFIG)
  MX_EXIT_VISIT_CUDAKernelCallExpr
MX_END_VISIT_STMT(CUDAKernelCallExpr)

#ifndef MX_ENTER_VISIT_UserDefinedLiteral
#  define MX_ENTER_VISIT_UserDefinedLiteral MX_ENTER_VISIT_CallExpr
#endif
#ifndef MX_EXIT_VISIT_UserDefinedLiteral
#  define MX_EXIT_VISIT_UserDefinedLiteral MX_EXIT_VISIT_CallExpr
#endif

MX_BEGIN_VISIT_STMT(UserDefinedLiteral)
  MX_ENTER_VISIT_UserDefinedLiteral
  MX_VISIT_BASE(UserDefinedLiteral, CallExpr)
  MX_VISIT_ENTITY(UserDefinedLiteral, cooked_literal, getVal41, setVal41, initVal41, CookedLiteral, Expr, NthStmt, StmtUseSelector::COOKED_LITERAL)
  MX_VISIT_ENUM(UserDefinedLiteral, literal_operator_kind, getVal101, setVal101, initVal101, LiteralOperatorKind, UserDefinedLiteralLiteralOperatorKind, NthStmt)
  MX_VISIT_ENTITY(UserDefinedLiteral, ud_suffix_token, getVal42, setVal42, initVal42, UDSuffixToken, Token, NthStmt, TokenUseSelector::UD_SUFFIX_TOKEN)
  MX_EXIT_VISIT_UserDefinedLiteral
MX_END_VISIT_STMT(UserDefinedLiteral)

#ifndef MX_ENTER_VISIT_CXXUuidofExpr
#  define MX_ENTER_VISIT_CXXUuidofExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXUuidofExpr
#  define MX_EXIT_VISIT_CXXUuidofExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXUuidofExpr)
  MX_ENTER_VISIT_CXXUuidofExpr
  MX_VISIT_BASE(CXXUuidofExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(CXXUuidofExpr, expression_operand, getVal36, setVal36, initVal36, ExpressionOperand, Expr, NthStmt, StmtUseSelector::EXPRESSION_OPERAND)
  MX_VISIT_ENTITY(CXXUuidofExpr, guid_declaration, getVal37, setVal37, initVal37, GuidDeclaration, MSGuidDecl, NthStmt, DeclUseSelector::GUID_DECLARATION)
  MX_VISIT_ENTITY(CXXUuidofExpr, type_operand, getVal38, setVal38, initVal38, TypeOperand, Type, NthStmt, TypeUseSelector::TYPE_OPERAND)
  MX_VISIT_ENTITY(CXXUuidofExpr, type_operand_source_info, getVal39, setVal39, initVal39, TypeOperandSourceInfo, Type, NthStmt, TypeUseSelector::TYPE_OPERAND_SOURCE_INFO)
  MX_VISIT_BOOL(CXXUuidofExpr, is_type_operand, getVal94, setVal94, initVal94, IsTypeOperand, bool, NthStmt)
  MX_EXIT_VISIT_CXXUuidofExpr
MX_END_VISIT_STMT(CXXUuidofExpr)

#ifndef MX_ENTER_VISIT_CXXUnresolvedConstructExpr
#  define MX_ENTER_VISIT_CXXUnresolvedConstructExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXUnresolvedConstructExpr
#  define MX_EXIT_VISIT_CXXUnresolvedConstructExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXUnresolvedConstructExpr)
  MX_ENTER_VISIT_CXXUnresolvedConstructExpr
  MX_VISIT_BASE(CXXUnresolvedConstructExpr, Expr)
  MX_VISIT_ENTITY_LIST(CXXUnresolvedConstructExpr, arguments, getVal15, setVal15, initVal15, Arguments, Expr, NthStmt)
  MX_VISIT_ENTITY(CXXUnresolvedConstructExpr, l_paren_token, getVal36, setVal36, initVal36, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(CXXUnresolvedConstructExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(CXXUnresolvedConstructExpr, type_as_written, getVal38, setVal38, initVal38, TypeAsWritten, Type, NthStmt, TypeUseSelector::TYPE_AS_WRITTEN)
  MX_VISIT_BOOL(CXXUnresolvedConstructExpr, is_list_initialization, getVal93, setVal93, initVal93, IsListInitialization, bool, NthStmt)
  MX_EXIT_VISIT_CXXUnresolvedConstructExpr
MX_END_VISIT_STMT(CXXUnresolvedConstructExpr)

#ifndef MX_ENTER_VISIT_CXXTypeidExpr
#  define MX_ENTER_VISIT_CXXTypeidExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXTypeidExpr
#  define MX_EXIT_VISIT_CXXTypeidExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXTypeidExpr)
  MX_ENTER_VISIT_CXXTypeidExpr
  MX_VISIT_BASE(CXXTypeidExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(CXXTypeidExpr, expression_operand, getVal36, setVal36, initVal36, ExpressionOperand, Expr, NthStmt, StmtUseSelector::EXPRESSION_OPERAND)
  MX_VISIT_ENTITY(CXXTypeidExpr, type_operand, getVal37, setVal37, initVal37, TypeOperand, Type, NthStmt, TypeUseSelector::TYPE_OPERAND)
  MX_VISIT_ENTITY(CXXTypeidExpr, type_operand_source_info, getVal38, setVal38, initVal38, TypeOperandSourceInfo, Type, NthStmt, TypeUseSelector::TYPE_OPERAND_SOURCE_INFO)
  MX_VISIT_OPTIONAL_BOOL(CXXTypeidExpr, is_most_derived, getVal94, setVal94, initVal94, IsMostDerived, bool, NthStmt)
  MX_VISIT_BOOL(CXXTypeidExpr, is_potentially_evaluated, getVal96, setVal96, initVal96, IsPotentiallyEvaluated, bool, NthStmt)
  MX_VISIT_BOOL(CXXTypeidExpr, is_type_operand, getVal97, setVal97, initVal97, IsTypeOperand, bool, NthStmt)
  MX_EXIT_VISIT_CXXTypeidExpr
MX_END_VISIT_STMT(CXXTypeidExpr)

#ifndef MX_ENTER_VISIT_CXXThrowExpr
#  define MX_ENTER_VISIT_CXXThrowExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXThrowExpr
#  define MX_EXIT_VISIT_CXXThrowExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXThrowExpr)
  MX_ENTER_VISIT_CXXThrowExpr
  MX_VISIT_BASE(CXXThrowExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(CXXThrowExpr, sub_expression, getVal36, setVal36, initVal36, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_ENTITY(CXXThrowExpr, throw_token, getVal37, setVal37, initVal37, ThrowToken, Token, NthStmt, TokenUseSelector::THROW_TOKEN)
  MX_VISIT_BOOL(CXXThrowExpr, is_thrown_variable_in_scope, getVal94, setVal94, initVal94, IsThrownVariableInScope, bool, NthStmt)
  MX_EXIT_VISIT_CXXThrowExpr
MX_END_VISIT_STMT(CXXThrowExpr)

#ifndef MX_ENTER_VISIT_CXXThisExpr
#  define MX_ENTER_VISIT_CXXThisExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXThisExpr
#  define MX_EXIT_VISIT_CXXThisExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXThisExpr)
  MX_ENTER_VISIT_CXXThisExpr
  MX_VISIT_BASE(CXXThisExpr, Expr)
  MX_VISIT_ENTITY(CXXThisExpr, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(CXXThisExpr, is_implicit, getVal93, setVal93, initVal93, IsImplicit, bool, NthStmt)
  MX_EXIT_VISIT_CXXThisExpr
MX_END_VISIT_STMT(CXXThisExpr)

#ifndef MX_ENTER_VISIT_CXXStdInitializerListExpr
#  define MX_ENTER_VISIT_CXXStdInitializerListExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXStdInitializerListExpr
#  define MX_EXIT_VISIT_CXXStdInitializerListExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXStdInitializerListExpr)
  MX_ENTER_VISIT_CXXStdInitializerListExpr
  MX_VISIT_BASE(CXXStdInitializerListExpr, Expr)
  MX_VISIT_ENTITY(CXXStdInitializerListExpr, sub_expression, getVal36, setVal36, initVal36, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_EXIT_VISIT_CXXStdInitializerListExpr
MX_END_VISIT_STMT(CXXStdInitializerListExpr)

#ifndef MX_ENTER_VISIT_CXXScalarValueInitExpr
#  define MX_ENTER_VISIT_CXXScalarValueInitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXScalarValueInitExpr
#  define MX_EXIT_VISIT_CXXScalarValueInitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXScalarValueInitExpr)
  MX_ENTER_VISIT_CXXScalarValueInitExpr
  MX_VISIT_BASE(CXXScalarValueInitExpr, Expr)
  MX_VISIT_ENTITY(CXXScalarValueInitExpr, r_paren_token, getVal36, setVal36, initVal36, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_CXXScalarValueInitExpr
MX_END_VISIT_STMT(CXXScalarValueInitExpr)

#ifndef MX_ENTER_VISIT_CXXRewrittenBinaryOperator
#  define MX_ENTER_VISIT_CXXRewrittenBinaryOperator MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXRewrittenBinaryOperator
#  define MX_EXIT_VISIT_CXXRewrittenBinaryOperator MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXRewrittenBinaryOperator)
  MX_ENTER_VISIT_CXXRewrittenBinaryOperator
  MX_VISIT_BASE(CXXRewrittenBinaryOperator, Expr)
  MX_VISIT_ENTITY(CXXRewrittenBinaryOperator, lhs, getVal36, setVal36, initVal36, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_ENUM(CXXRewrittenBinaryOperator, opcode, getVal98, setVal98, initVal98, Opcode, BinaryOperatorKind, NthStmt)
  MX_VISIT_TEXT(CXXRewrittenBinaryOperator, opcode_string, getVal64, setVal64, initVal64, OpcodeString, basic_string_view, NthStmt)
  MX_VISIT_ENUM(CXXRewrittenBinaryOperator, operator_, getVal101, setVal101, initVal101, Operator, BinaryOperatorKind, NthStmt)
  MX_VISIT_ENTITY(CXXRewrittenBinaryOperator, operator_token, getVal37, setVal37, initVal37, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(CXXRewrittenBinaryOperator, rhs, getVal38, setVal38, initVal38, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_VISIT_ENTITY(CXXRewrittenBinaryOperator, semantic_form, getVal39, setVal39, initVal39, SemanticForm, Expr, NthStmt, StmtUseSelector::SEMANTIC_FORM)
  MX_VISIT_BOOL(CXXRewrittenBinaryOperator, is_assignment_operation, getVal93, setVal93, initVal93, IsAssignmentOperation, bool, NthStmt)
  MX_VISIT_BOOL(CXXRewrittenBinaryOperator, is_comparison_operation, getVal94, setVal94, initVal94, IsComparisonOperation, bool, NthStmt)
  MX_VISIT_BOOL(CXXRewrittenBinaryOperator, is_reversed, getVal95, setVal95, initVal95, IsReversed, bool, NthStmt)
  MX_EXIT_VISIT_CXXRewrittenBinaryOperator
MX_END_VISIT_STMT(CXXRewrittenBinaryOperator)

#ifndef MX_ENTER_VISIT_CXXPseudoDestructorExpr
#  define MX_ENTER_VISIT_CXXPseudoDestructorExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXPseudoDestructorExpr
#  define MX_EXIT_VISIT_CXXPseudoDestructorExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXPseudoDestructorExpr)
  MX_ENTER_VISIT_CXXPseudoDestructorExpr
  MX_VISIT_BASE(CXXPseudoDestructorExpr, Expr)
  MX_VISIT_ENTITY(CXXPseudoDestructorExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(CXXPseudoDestructorExpr, colon_colon_token, getVal37, setVal37, initVal37, ColonColonToken, Token, NthStmt, TokenUseSelector::COLON_COLON_TOKEN)
  MX_VISIT_ENTITY(CXXPseudoDestructorExpr, destroyed_type, getVal38, setVal38, initVal38, DestroyedType, Type, NthStmt, TypeUseSelector::DESTROYED_TYPE)
  MX_VISIT_ENTITY(CXXPseudoDestructorExpr, destroyed_type_token, getVal39, setVal39, initVal39, DestroyedTypeToken, Token, NthStmt, TokenUseSelector::DESTROYED_TYPE_TOKEN)
  MX_VISIT_ENTITY(CXXPseudoDestructorExpr, operator_token, getVal40, setVal40, initVal40, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(CXXPseudoDestructorExpr, scope_type, getVal41, setVal41, initVal41, ScopeType, Type, NthStmt, TypeUseSelector::SCOPE_TYPE)
  MX_VISIT_ENTITY(CXXPseudoDestructorExpr, tilde_token, getVal42, setVal42, initVal42, TildeToken, Token, NthStmt, TokenUseSelector::TILDE_TOKEN)
  MX_VISIT_BOOL(CXXPseudoDestructorExpr, has_qualifier, getVal94, setVal94, initVal94, HasQualifier, bool, NthStmt)
  MX_VISIT_BOOL(CXXPseudoDestructorExpr, is_arrow, getVal95, setVal95, initVal95, IsArrow, bool, NthStmt)
  MX_EXIT_VISIT_CXXPseudoDestructorExpr
MX_END_VISIT_STMT(CXXPseudoDestructorExpr)

#ifndef MX_ENTER_VISIT_CXXNullPtrLiteralExpr
#  define MX_ENTER_VISIT_CXXNullPtrLiteralExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXNullPtrLiteralExpr
#  define MX_EXIT_VISIT_CXXNullPtrLiteralExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXNullPtrLiteralExpr)
  MX_ENTER_VISIT_CXXNullPtrLiteralExpr
  MX_VISIT_BASE(CXXNullPtrLiteralExpr, Expr)
  MX_VISIT_ENTITY(CXXNullPtrLiteralExpr, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_EXIT_VISIT_CXXNullPtrLiteralExpr
MX_END_VISIT_STMT(CXXNullPtrLiteralExpr)

#ifndef MX_ENTER_VISIT_CXXNoexceptExpr
#  define MX_ENTER_VISIT_CXXNoexceptExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXNoexceptExpr
#  define MX_EXIT_VISIT_CXXNoexceptExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXNoexceptExpr)
  MX_ENTER_VISIT_CXXNoexceptExpr
  MX_VISIT_BASE(CXXNoexceptExpr, Expr)
  MX_VISIT_ENTITY(CXXNoexceptExpr, operand, getVal36, setVal36, initVal36, Operand, Expr, NthStmt, StmtUseSelector::OPERAND)
  MX_VISIT_BOOL(CXXNoexceptExpr, value, getVal93, setVal93, initVal93, Value, bool, NthStmt)
  MX_EXIT_VISIT_CXXNoexceptExpr
MX_END_VISIT_STMT(CXXNoexceptExpr)

#ifndef MX_ENTER_VISIT_CXXNewExpr
#  define MX_ENTER_VISIT_CXXNewExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXNewExpr
#  define MX_EXIT_VISIT_CXXNewExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXNewExpr)
  MX_ENTER_VISIT_CXXNewExpr
  MX_VISIT_BASE(CXXNewExpr, Expr)
  MX_VISIT_BOOL(CXXNewExpr, does_usual_array_delete_want_size, getVal93, setVal93, initVal93, DoesUsualArrayDeleteWantSize, bool, NthStmt)
  MX_VISIT_ENTITY(CXXNewExpr, allocated_type, getVal36, setVal36, initVal36, AllocatedType, Type, NthStmt, TypeUseSelector::ALLOCATED_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(CXXNewExpr, array_size, getVal37, setVal37, initVal37, ArraySize, Expr, NthStmt, StmtUseSelector::ARRAY_SIZE)
  MX_VISIT_OPTIONAL_ENTITY(CXXNewExpr, construct_expression, getVal38, setVal38, initVal38, ConstructExpression, CXXConstructExpr, NthStmt, StmtUseSelector::CONSTRUCT_EXPRESSION)
  MX_VISIT_ENUM(CXXNewExpr, initialization_style, getVal98, setVal98, initVal98, InitializationStyle, CXXNewExprInitializationStyle, NthStmt)
  MX_VISIT_OPTIONAL_ENTITY(CXXNewExpr, initializer, getVal41, setVal41, initVal41, Initializer, Expr, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(CXXNewExpr, operator_delete, getVal42, setVal42, initVal42, OperatorDelete, FunctionDecl, NthStmt, DeclUseSelector::OPERATOR_DELETE)
  MX_VISIT_ENTITY(CXXNewExpr, operator_new, getVal43, setVal43, initVal43, OperatorNew, FunctionDecl, NthStmt, DeclUseSelector::OPERATOR_NEW)
  MX_VISIT_BOOL(CXXNewExpr, has_initializer, getVal97, setVal97, initVal97, HasInitializer, bool, NthStmt)
  MX_VISIT_BOOL(CXXNewExpr, is_array, getVal99, setVal99, initVal99, IsArray, bool, NthStmt)
  MX_VISIT_BOOL(CXXNewExpr, is_global_new, getVal102, setVal102, initVal102, IsGlobalNew, bool, NthStmt)
  MX_VISIT_BOOL(CXXNewExpr, is_parenthesis_type_id, getVal103, setVal103, initVal103, IsParenthesisTypeId, bool, NthStmt)
  MX_VISIT_BOOL(CXXNewExpr, pass_alignment, getVal104, setVal104, initVal104, PassAlignment, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(CXXNewExpr, placement_arguments, getVal15, setVal15, initVal15, PlacementArguments, Expr, NthStmt)
  MX_VISIT_BOOL(CXXNewExpr, should_null_check_allocation, getVal105, setVal105, initVal105, ShouldNullCheckAllocation, bool, NthStmt)
  MX_EXIT_VISIT_CXXNewExpr
MX_END_VISIT_STMT(CXXNewExpr)

#ifndef MX_ENTER_VISIT_CXXInheritedCtorInitExpr
#  define MX_ENTER_VISIT_CXXInheritedCtorInitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXInheritedCtorInitExpr
#  define MX_EXIT_VISIT_CXXInheritedCtorInitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXInheritedCtorInitExpr)
  MX_ENTER_VISIT_CXXInheritedCtorInitExpr
  MX_VISIT_BASE(CXXInheritedCtorInitExpr, Expr)
  MX_VISIT_BOOL(CXXInheritedCtorInitExpr, constructs_virtual_base, getVal93, setVal93, initVal93, ConstructsVirtualBase, bool, NthStmt)
  MX_VISIT_ENUM(CXXInheritedCtorInitExpr, construction_kind, getVal98, setVal98, initVal98, ConstructionKind, CXXConstructExprConstructionKind, NthStmt)
  MX_VISIT_ENTITY(CXXInheritedCtorInitExpr, constructor, getVal36, setVal36, initVal36, Constructor, CXXConstructorDecl, NthStmt, DeclUseSelector::CONSTRUCTOR)
  MX_VISIT_ENTITY(CXXInheritedCtorInitExpr, token, getVal37, setVal37, initVal37, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(CXXInheritedCtorInitExpr, inherited_from_virtual_base, getVal94, setVal94, initVal94, InheritedFromVirtualBase, bool, NthStmt)
  MX_EXIT_VISIT_CXXInheritedCtorInitExpr
MX_END_VISIT_STMT(CXXInheritedCtorInitExpr)

#ifndef MX_ENTER_VISIT_CXXFoldExpr
#  define MX_ENTER_VISIT_CXXFoldExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXFoldExpr
#  define MX_EXIT_VISIT_CXXFoldExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXFoldExpr)
  MX_ENTER_VISIT_CXXFoldExpr
  MX_VISIT_BASE(CXXFoldExpr, Expr)
  MX_VISIT_ENTITY(CXXFoldExpr, callee, getVal36, setVal36, initVal36, Callee, UnresolvedLookupExpr, NthStmt, StmtUseSelector::CALLEE)
  MX_VISIT_ENTITY(CXXFoldExpr, ellipsis_token, getVal37, setVal37, initVal37, EllipsisToken, Token, NthStmt, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_ENTITY(CXXFoldExpr, initializer, getVal38, setVal38, initVal38, Initializer, Expr, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(CXXFoldExpr, lhs, getVal39, setVal39, initVal39, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_ENTITY(CXXFoldExpr, l_paren_token, getVal40, setVal40, initVal40, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_OPTIONAL_INT(CXXFoldExpr, num_expansions, getVal107, setVal107, initVal107, NumExpansions, unsigned, NthStmt)
  MX_VISIT_ENUM(CXXFoldExpr, operator_, getVal98, setVal98, initVal98, Operator, BinaryOperatorKind, NthStmt)
  MX_VISIT_ENTITY(CXXFoldExpr, pattern, getVal41, setVal41, initVal41, Pattern, Expr, NthStmt, StmtUseSelector::PATTERN)
  MX_VISIT_ENTITY(CXXFoldExpr, rhs, getVal42, setVal42, initVal42, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_VISIT_ENTITY(CXXFoldExpr, r_paren_token, getVal43, setVal43, initVal43, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(CXXFoldExpr, is_left_fold, getVal94, setVal94, initVal94, IsLeftFold, bool, NthStmt)
  MX_VISIT_BOOL(CXXFoldExpr, is_right_fold, getVal95, setVal95, initVal95, IsRightFold, bool, NthStmt)
  MX_EXIT_VISIT_CXXFoldExpr
MX_END_VISIT_STMT(CXXFoldExpr)

#ifndef MX_ENTER_VISIT_CXXDependentScopeMemberExpr
#  define MX_ENTER_VISIT_CXXDependentScopeMemberExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXDependentScopeMemberExpr
#  define MX_EXIT_VISIT_CXXDependentScopeMemberExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXDependentScopeMemberExpr)
  MX_ENTER_VISIT_CXXDependentScopeMemberExpr
  MX_VISIT_BASE(CXXDependentScopeMemberExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(CXXDependentScopeMemberExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(CXXDependentScopeMemberExpr, base_type, getVal37, setVal37, initVal37, BaseType, Type, NthStmt, TypeUseSelector::BASE_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(CXXDependentScopeMemberExpr, first_qualifier_found_in_scope, getVal38, setVal38, initVal38, FirstQualifierFoundInScope, NamedDecl, NthStmt, DeclUseSelector::FIRST_QUALIFIER_FOUND_IN_SCOPE)
  MX_VISIT_ENTITY(CXXDependentScopeMemberExpr, l_angle_token, getVal39, setVal39, initVal39, LAngleToken, Token, NthStmt, TokenUseSelector::L_ANGLE_TOKEN)
  MX_VISIT_ENTITY(CXXDependentScopeMemberExpr, member_token, getVal40, setVal40, initVal40, MemberToken, Token, NthStmt, TokenUseSelector::MEMBER_TOKEN)
  MX_VISIT_ENTITY(CXXDependentScopeMemberExpr, operator_token, getVal41, setVal41, initVal41, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(CXXDependentScopeMemberExpr, r_angle_token, getVal42, setVal42, initVal42, RAngleToken, Token, NthStmt, TokenUseSelector::R_ANGLE_TOKEN)
  MX_VISIT_ENTITY(CXXDependentScopeMemberExpr, template_keyword_token, getVal43, setVal43, initVal43, TemplateKeywordToken, Token, NthStmt, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_BOOL(CXXDependentScopeMemberExpr, has_explicit_template_arguments, getVal95, setVal95, initVal95, HasExplicitTemplateArguments, bool, NthStmt)
  MX_VISIT_BOOL(CXXDependentScopeMemberExpr, has_template_keyword, getVal96, setVal96, initVal96, HasTemplateKeyword, bool, NthStmt)
  MX_VISIT_BOOL(CXXDependentScopeMemberExpr, is_arrow, getVal97, setVal97, initVal97, IsArrow, bool, NthStmt)
  MX_VISIT_BOOL(CXXDependentScopeMemberExpr, is_implicit_access, getVal99, setVal99, initVal99, IsImplicitAccess, bool, NthStmt)
  MX_EXIT_VISIT_CXXDependentScopeMemberExpr
MX_END_VISIT_STMT(CXXDependentScopeMemberExpr)

#ifndef MX_ENTER_VISIT_CXXDeleteExpr
#  define MX_ENTER_VISIT_CXXDeleteExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXDeleteExpr
#  define MX_EXIT_VISIT_CXXDeleteExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXDeleteExpr)
  MX_ENTER_VISIT_CXXDeleteExpr
  MX_VISIT_BASE(CXXDeleteExpr, Expr)
  MX_VISIT_BOOL(CXXDeleteExpr, does_usual_array_delete_want_size, getVal93, setVal93, initVal93, DoesUsualArrayDeleteWantSize, bool, NthStmt)
  MX_VISIT_ENTITY(CXXDeleteExpr, argument, getVal36, setVal36, initVal36, Argument, Expr, NthStmt, StmtUseSelector::ARGUMENT)
  MX_VISIT_ENTITY(CXXDeleteExpr, destroyed_type, getVal37, setVal37, initVal37, DestroyedType, Type, NthStmt, TypeUseSelector::DESTROYED_TYPE)
  MX_VISIT_ENTITY(CXXDeleteExpr, operator_delete, getVal38, setVal38, initVal38, OperatorDelete, FunctionDecl, NthStmt, DeclUseSelector::OPERATOR_DELETE)
  MX_VISIT_BOOL(CXXDeleteExpr, is_array_form, getVal94, setVal94, initVal94, IsArrayForm, bool, NthStmt)
  MX_VISIT_BOOL(CXXDeleteExpr, is_array_form_as_written, getVal95, setVal95, initVal95, IsArrayFormAsWritten, bool, NthStmt)
  MX_VISIT_BOOL(CXXDeleteExpr, is_global_delete, getVal96, setVal96, initVal96, IsGlobalDelete, bool, NthStmt)
  MX_EXIT_VISIT_CXXDeleteExpr
MX_END_VISIT_STMT(CXXDeleteExpr)

#ifndef MX_ENTER_VISIT_CXXDefaultInitExpr
#  define MX_ENTER_VISIT_CXXDefaultInitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXDefaultInitExpr
#  define MX_EXIT_VISIT_CXXDefaultInitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXDefaultInitExpr)
  MX_ENTER_VISIT_CXXDefaultInitExpr
  MX_VISIT_BASE(CXXDefaultInitExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(CXXDefaultInitExpr, expression, getVal36, setVal36, initVal36, Expression, Expr, NthStmt, StmtUseSelector::EXPRESSION)
  MX_VISIT_ENTITY(CXXDefaultInitExpr, field, getVal37, setVal37, initVal37, Field, FieldDecl, NthStmt, DeclUseSelector::FIELD)
  MX_VISIT_ENTITY(CXXDefaultInitExpr, used_token, getVal38, setVal38, initVal38, UsedToken, Token, NthStmt, TokenUseSelector::USED_TOKEN)
  MX_EXIT_VISIT_CXXDefaultInitExpr
MX_END_VISIT_STMT(CXXDefaultInitExpr)

#ifndef MX_ENTER_VISIT_CXXDefaultArgExpr
#  define MX_ENTER_VISIT_CXXDefaultArgExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXDefaultArgExpr
#  define MX_EXIT_VISIT_CXXDefaultArgExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXDefaultArgExpr)
  MX_ENTER_VISIT_CXXDefaultArgExpr
  MX_VISIT_BASE(CXXDefaultArgExpr, Expr)
  MX_VISIT_ENTITY(CXXDefaultArgExpr, expression, getVal36, setVal36, initVal36, Expression, Expr, NthStmt, StmtUseSelector::EXPRESSION)
  MX_VISIT_ENTITY(CXXDefaultArgExpr, parameter, getVal37, setVal37, initVal37, Parameter, ParmVarDecl, NthStmt, DeclUseSelector::PARAMETER)
  MX_VISIT_ENTITY(CXXDefaultArgExpr, used_token, getVal38, setVal38, initVal38, UsedToken, Token, NthStmt, TokenUseSelector::USED_TOKEN)
  MX_EXIT_VISIT_CXXDefaultArgExpr
MX_END_VISIT_STMT(CXXDefaultArgExpr)

#ifndef MX_ENTER_VISIT_CXXConstructExpr
#  define MX_ENTER_VISIT_CXXConstructExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXConstructExpr
#  define MX_EXIT_VISIT_CXXConstructExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXConstructExpr)
  MX_ENTER_VISIT_CXXConstructExpr
  MX_VISIT_BASE(CXXConstructExpr, Expr)
  MX_VISIT_ENTITY_LIST(CXXConstructExpr, arguments, getVal15, setVal15, initVal15, Arguments, Expr, NthStmt)
  MX_VISIT_ENUM(CXXConstructExpr, construction_kind, getVal98, setVal98, initVal98, ConstructionKind, CXXConstructExprConstructionKind, NthStmt)
  MX_VISIT_ENTITY(CXXConstructExpr, constructor, getVal36, setVal36, initVal36, Constructor, CXXConstructorDecl, NthStmt, DeclUseSelector::CONSTRUCTOR)
  MX_VISIT_ENTITY(CXXConstructExpr, token, getVal37, setVal37, initVal37, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(CXXConstructExpr, had_multiple_candidates, getVal93, setVal93, initVal93, HadMultipleCandidates, bool, NthStmt)
  MX_VISIT_BOOL(CXXConstructExpr, is_elidable, getVal94, setVal94, initVal94, IsElidable, bool, NthStmt)
  MX_VISIT_BOOL(CXXConstructExpr, is_list_initialization, getVal95, setVal95, initVal95, IsListInitialization, bool, NthStmt)
  MX_VISIT_BOOL(CXXConstructExpr, is_std_initializer_list_initialization, getVal96, setVal96, initVal96, IsStdInitializerListInitialization, bool, NthStmt)
  MX_VISIT_BOOL(CXXConstructExpr, requires_zero_initialization, getVal97, setVal97, initVal97, RequiresZeroInitialization, bool, NthStmt)
  MX_EXIT_VISIT_CXXConstructExpr
MX_END_VISIT_STMT(CXXConstructExpr)

#ifndef MX_ENTER_VISIT_CXXTemporaryObjectExpr
#  define MX_ENTER_VISIT_CXXTemporaryObjectExpr MX_ENTER_VISIT_CXXConstructExpr
#endif
#ifndef MX_EXIT_VISIT_CXXTemporaryObjectExpr
#  define MX_EXIT_VISIT_CXXTemporaryObjectExpr MX_EXIT_VISIT_CXXConstructExpr
#endif

MX_BEGIN_VISIT_STMT(CXXTemporaryObjectExpr)
  MX_ENTER_VISIT_CXXTemporaryObjectExpr
  MX_VISIT_BASE(CXXTemporaryObjectExpr, CXXConstructExpr)
  MX_EXIT_VISIT_CXXTemporaryObjectExpr
MX_END_VISIT_STMT(CXXTemporaryObjectExpr)

#ifndef MX_ENTER_VISIT_CXXBoolLiteralExpr
#  define MX_ENTER_VISIT_CXXBoolLiteralExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXBoolLiteralExpr
#  define MX_EXIT_VISIT_CXXBoolLiteralExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXBoolLiteralExpr)
  MX_ENTER_VISIT_CXXBoolLiteralExpr
  MX_VISIT_BASE(CXXBoolLiteralExpr, Expr)
  MX_VISIT_ENTITY(CXXBoolLiteralExpr, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(CXXBoolLiteralExpr, value, getVal93, setVal93, initVal93, Value, bool, NthStmt)
  MX_EXIT_VISIT_CXXBoolLiteralExpr
MX_END_VISIT_STMT(CXXBoolLiteralExpr)

#ifndef MX_ENTER_VISIT_CXXBindTemporaryExpr
#  define MX_ENTER_VISIT_CXXBindTemporaryExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_CXXBindTemporaryExpr
#  define MX_EXIT_VISIT_CXXBindTemporaryExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(CXXBindTemporaryExpr)
  MX_ENTER_VISIT_CXXBindTemporaryExpr
  MX_VISIT_BASE(CXXBindTemporaryExpr, Expr)
  MX_VISIT_ENTITY(CXXBindTemporaryExpr, sub_expression, getVal36, setVal36, initVal36, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_EXIT_VISIT_CXXBindTemporaryExpr
MX_END_VISIT_STMT(CXXBindTemporaryExpr)

#ifndef MX_ENTER_VISIT_BlockExpr
#  define MX_ENTER_VISIT_BlockExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_BlockExpr
#  define MX_EXIT_VISIT_BlockExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(BlockExpr)
  MX_ENTER_VISIT_BlockExpr
  MX_VISIT_BASE(BlockExpr, Expr)
  MX_VISIT_ENTITY(BlockExpr, block_declaration, getVal36, setVal36, initVal36, BlockDeclaration, BlockDecl, NthStmt, DeclUseSelector::BLOCK_DECLARATION)
  MX_VISIT_ENTITY(BlockExpr, body, getVal37, setVal37, initVal37, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(BlockExpr, caret_token, getVal38, setVal38, initVal38, CaretToken, Token, NthStmt, TokenUseSelector::CARET_TOKEN)
  MX_VISIT_ENTITY(BlockExpr, function_type, getVal39, setVal39, initVal39, FunctionType, FunctionProtoType, NthStmt, TypeUseSelector::FUNCTION_TYPE)
  MX_EXIT_VISIT_BlockExpr
MX_END_VISIT_STMT(BlockExpr)

#ifndef MX_ENTER_VISIT_BinaryOperator
#  define MX_ENTER_VISIT_BinaryOperator MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_BinaryOperator
#  define MX_EXIT_VISIT_BinaryOperator MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(BinaryOperator)
  MX_ENTER_VISIT_BinaryOperator
  MX_VISIT_BASE(BinaryOperator, Expr)
  MX_VISIT_ENTITY(BinaryOperator, lhs, getVal36, setVal36, initVal36, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_ENUM(BinaryOperator, opcode, getVal98, setVal98, initVal98, Opcode, BinaryOperatorKind, NthStmt)
  MX_VISIT_TEXT(BinaryOperator, opcode_string, getVal64, setVal64, initVal64, OpcodeString, basic_string_view, NthStmt)
  MX_VISIT_ENTITY(BinaryOperator, operator_token, getVal37, setVal37, initVal37, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(BinaryOperator, rhs, getVal38, setVal38, initVal38, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_VISIT_BOOL(BinaryOperator, has_stored_fp_features, getVal93, setVal93, initVal93, HasStoredFPFeatures, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_additive_operation, getVal94, setVal94, initVal94, IsAdditiveOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_assignment_operation, getVal95, setVal95, initVal95, IsAssignmentOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_bitwise_operation, getVal96, setVal96, initVal96, IsBitwiseOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_comma_operation, getVal97, setVal97, initVal97, IsCommaOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_comparison_operation, getVal99, setVal99, initVal99, IsComparisonOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_compound_assignment_operation, getVal102, setVal102, initVal102, IsCompoundAssignmentOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_equality_operation, getVal103, setVal103, initVal103, IsEqualityOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_logical_operation, getVal104, setVal104, initVal104, IsLogicalOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_multiplicative_operation, getVal105, setVal105, initVal105, IsMultiplicativeOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_pointer_memory_operation, getVal106, setVal106, initVal106, IsPointerMemoryOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_relational_operation, getVal108, setVal108, initVal108, IsRelationalOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_shift_assign_operation, getVal109, setVal109, initVal109, IsShiftAssignOperation, bool, NthStmt)
  MX_VISIT_BOOL(BinaryOperator, is_shift_operation, getVal110, setVal110, initVal110, IsShiftOperation, bool, NthStmt)
  MX_EXIT_VISIT_BinaryOperator
MX_END_VISIT_STMT(BinaryOperator)

#ifndef MX_ENTER_VISIT_CompoundAssignOperator
#  define MX_ENTER_VISIT_CompoundAssignOperator MX_ENTER_VISIT_BinaryOperator
#endif
#ifndef MX_EXIT_VISIT_CompoundAssignOperator
#  define MX_EXIT_VISIT_CompoundAssignOperator MX_EXIT_VISIT_BinaryOperator
#endif

MX_BEGIN_VISIT_STMT(CompoundAssignOperator)
  MX_ENTER_VISIT_CompoundAssignOperator
  MX_VISIT_BASE(CompoundAssignOperator, BinaryOperator)
  MX_VISIT_ENTITY(CompoundAssignOperator, computation_lhs_type, getVal39, setVal39, initVal39, ComputationLHSType, Type, NthStmt, TypeUseSelector::COMPUTATION_LHS_TYPE)
  MX_VISIT_ENTITY(CompoundAssignOperator, computation_result_type, getVal40, setVal40, initVal40, ComputationResultType, Type, NthStmt, TypeUseSelector::COMPUTATION_RESULT_TYPE)
  MX_EXIT_VISIT_CompoundAssignOperator
MX_END_VISIT_STMT(CompoundAssignOperator)

#ifndef MX_ENTER_VISIT_AtomicExpr
#  define MX_ENTER_VISIT_AtomicExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_AtomicExpr
#  define MX_EXIT_VISIT_AtomicExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(AtomicExpr)
  MX_ENTER_VISIT_AtomicExpr
  MX_VISIT_BASE(AtomicExpr, Expr)
  MX_VISIT_ENTITY(AtomicExpr, builtin_token, getVal36, setVal36, initVal36, BuiltinToken, Token, NthStmt, TokenUseSelector::BUILTIN_TOKEN)
  MX_VISIT_ENUM(AtomicExpr, operation, getVal98, setVal98, initVal98, Operation, AtomicExprAtomicOp, NthStmt)
  MX_VISIT_ENTITY(AtomicExpr, order, getVal37, setVal37, initVal37, Order, Expr, NthStmt, StmtUseSelector::ORDER)
  MX_VISIT_OPTIONAL_ENTITY(AtomicExpr, order_fail, getVal38, setVal38, initVal38, OrderFail, Expr, NthStmt, StmtUseSelector::ORDER_FAIL)
  MX_VISIT_ENTITY(AtomicExpr, pointer, getVal39, setVal39, initVal39, Pointer, Expr, NthStmt, StmtUseSelector::POINTER)
  MX_VISIT_ENTITY(AtomicExpr, r_paren_token, getVal40, setVal40, initVal40, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(AtomicExpr, scope, getVal41, setVal41, initVal41, Scope, Expr, NthStmt, StmtUseSelector::SCOPE)
  MX_VISIT_OPTIONAL_ENTITY(AtomicExpr, value1, getVal42, setVal42, initVal42, Value1, Expr, NthStmt, StmtUseSelector::VALUE1)
  MX_VISIT_OPTIONAL_ENTITY(AtomicExpr, value2, getVal43, setVal43, initVal43, Value2, Expr, NthStmt, StmtUseSelector::VALUE2)
  MX_VISIT_ENTITY(AtomicExpr, value_type, getVal44, setVal44, initVal44, ValueType, Type, NthStmt, TypeUseSelector::VALUE_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(AtomicExpr, weak, getVal45, setVal45, initVal45, Weak, Expr, NthStmt, StmtUseSelector::WEAK)
  MX_VISIT_BOOL(AtomicExpr, is_cmp_x_chg, getVal99, setVal99, initVal99, IsCmpXChg, bool, NthStmt)
  MX_VISIT_BOOL(AtomicExpr, is_open_cl, getVal102, setVal102, initVal102, IsOpenCL, bool, NthStmt)
  MX_VISIT_BOOL(AtomicExpr, is_volatile, getVal103, setVal103, initVal103, IsVolatile, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(AtomicExpr, sub_expressions, getVal15, setVal15, initVal15, SubExpressions, Expr, NthStmt)
  MX_EXIT_VISIT_AtomicExpr
MX_END_VISIT_STMT(AtomicExpr)

#ifndef MX_ENTER_VISIT_AsTypeExpr
#  define MX_ENTER_VISIT_AsTypeExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_AsTypeExpr
#  define MX_EXIT_VISIT_AsTypeExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(AsTypeExpr)
  MX_ENTER_VISIT_AsTypeExpr
  MX_VISIT_BASE(AsTypeExpr, Expr)
  MX_VISIT_ENTITY(AsTypeExpr, builtin_token, getVal36, setVal36, initVal36, BuiltinToken, Token, NthStmt, TokenUseSelector::BUILTIN_TOKEN)
  MX_VISIT_ENTITY(AsTypeExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(AsTypeExpr, src_expression, getVal38, setVal38, initVal38, SrcExpression, Expr, NthStmt, StmtUseSelector::SRC_EXPRESSION)
  MX_EXIT_VISIT_AsTypeExpr
MX_END_VISIT_STMT(AsTypeExpr)

#ifndef MX_ENTER_VISIT_ArrayTypeTraitExpr
#  define MX_ENTER_VISIT_ArrayTypeTraitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ArrayTypeTraitExpr
#  define MX_EXIT_VISIT_ArrayTypeTraitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ArrayTypeTraitExpr)
  MX_ENTER_VISIT_ArrayTypeTraitExpr
  MX_VISIT_BASE(ArrayTypeTraitExpr, Expr)
  MX_VISIT_ENTITY(ArrayTypeTraitExpr, dimension_expression, getVal36, setVal36, initVal36, DimensionExpression, Expr, NthStmt, StmtUseSelector::DIMENSION_EXPRESSION)
  MX_VISIT_ENTITY(ArrayTypeTraitExpr, queried_type, getVal37, setVal37, initVal37, QueriedType, Type, NthStmt, TypeUseSelector::QUERIED_TYPE)
  MX_VISIT_ENUM(ArrayTypeTraitExpr, trait, getVal98, setVal98, initVal98, Trait, ArrayTypeTrait, NthStmt)
  MX_EXIT_VISIT_ArrayTypeTraitExpr
MX_END_VISIT_STMT(ArrayTypeTraitExpr)

#ifndef MX_ENTER_VISIT_ArraySubscriptExpr
#  define MX_ENTER_VISIT_ArraySubscriptExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ArraySubscriptExpr
#  define MX_EXIT_VISIT_ArraySubscriptExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ArraySubscriptExpr)
  MX_ENTER_VISIT_ArraySubscriptExpr
  MX_VISIT_BASE(ArraySubscriptExpr, Expr)
  MX_VISIT_ENTITY(ArraySubscriptExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(ArraySubscriptExpr, index, getVal37, setVal37, initVal37, Index, Expr, NthStmt, StmtUseSelector::INDEX)
  MX_VISIT_ENTITY(ArraySubscriptExpr, lhs, getVal38, setVal38, initVal38, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_ENTITY(ArraySubscriptExpr, r_bracket_token, getVal39, setVal39, initVal39, RBracketToken, Token, NthStmt, TokenUseSelector::R_BRACKET_TOKEN)
  MX_VISIT_ENTITY(ArraySubscriptExpr, rhs, getVal40, setVal40, initVal40, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_EXIT_VISIT_ArraySubscriptExpr
MX_END_VISIT_STMT(ArraySubscriptExpr)

#ifndef MX_ENTER_VISIT_ArrayInitLoopExpr
#  define MX_ENTER_VISIT_ArrayInitLoopExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ArrayInitLoopExpr
#  define MX_EXIT_VISIT_ArrayInitLoopExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ArrayInitLoopExpr)
  MX_ENTER_VISIT_ArrayInitLoopExpr
  MX_VISIT_BASE(ArrayInitLoopExpr, Expr)
  MX_VISIT_ENTITY(ArrayInitLoopExpr, common_expression, getVal36, setVal36, initVal36, CommonExpression, OpaqueValueExpr, NthStmt, StmtUseSelector::COMMON_EXPRESSION)
  MX_VISIT_ENTITY(ArrayInitLoopExpr, sub_expression, getVal37, setVal37, initVal37, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_EXIT_VISIT_ArrayInitLoopExpr
MX_END_VISIT_STMT(ArrayInitLoopExpr)

#ifndef MX_ENTER_VISIT_ArrayInitIndexExpr
#  define MX_ENTER_VISIT_ArrayInitIndexExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ArrayInitIndexExpr
#  define MX_EXIT_VISIT_ArrayInitIndexExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ArrayInitIndexExpr)
  MX_ENTER_VISIT_ArrayInitIndexExpr
  MX_VISIT_BASE(ArrayInitIndexExpr, Expr)
  MX_EXIT_VISIT_ArrayInitIndexExpr
MX_END_VISIT_STMT(ArrayInitIndexExpr)

#ifndef MX_ENTER_VISIT_AddrLabelExpr
#  define MX_ENTER_VISIT_AddrLabelExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_AddrLabelExpr
#  define MX_EXIT_VISIT_AddrLabelExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(AddrLabelExpr)
  MX_ENTER_VISIT_AddrLabelExpr
  MX_VISIT_BASE(AddrLabelExpr, Expr)
  MX_VISIT_ENTITY(AddrLabelExpr, amp_amp_token, getVal36, setVal36, initVal36, AmpAmpToken, Token, NthStmt, TokenUseSelector::AMP_AMP_TOKEN)
  MX_VISIT_ENTITY(AddrLabelExpr, label, getVal37, setVal37, initVal37, Label, LabelDecl, NthStmt, DeclUseSelector::LABEL)
  MX_VISIT_ENTITY(AddrLabelExpr, label_token, getVal38, setVal38, initVal38, LabelToken, Token, NthStmt, TokenUseSelector::LABEL_TOKEN)
  MX_EXIT_VISIT_AddrLabelExpr
MX_END_VISIT_STMT(AddrLabelExpr)

#ifndef MX_ENTER_VISIT_AbstractConditionalOperator
#  define MX_ENTER_VISIT_AbstractConditionalOperator MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_AbstractConditionalOperator
#  define MX_EXIT_VISIT_AbstractConditionalOperator MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(AbstractConditionalOperator)
  MX_ENTER_VISIT_AbstractConditionalOperator
  MX_VISIT_BASE(AbstractConditionalOperator, Expr)
  MX_VISIT_ENTITY(AbstractConditionalOperator, colon_token, getVal36, setVal36, initVal36, ColonToken, Token, NthStmt, TokenUseSelector::COLON_TOKEN)
  MX_VISIT_ENTITY(AbstractConditionalOperator, condition, getVal37, setVal37, initVal37, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_ENTITY(AbstractConditionalOperator, false_expression, getVal38, setVal38, initVal38, FalseExpression, Expr, NthStmt, StmtUseSelector::FALSE_EXPRESSION)
  MX_VISIT_ENTITY(AbstractConditionalOperator, question_token, getVal39, setVal39, initVal39, QuestionToken, Token, NthStmt, TokenUseSelector::QUESTION_TOKEN)
  MX_VISIT_ENTITY(AbstractConditionalOperator, true_expression, getVal40, setVal40, initVal40, TrueExpression, Expr, NthStmt, StmtUseSelector::TRUE_EXPRESSION)
  MX_EXIT_VISIT_AbstractConditionalOperator
MX_END_VISIT_STMT(AbstractConditionalOperator)

#ifndef MX_ENTER_VISIT_ConditionalOperator
#  define MX_ENTER_VISIT_ConditionalOperator MX_ENTER_VISIT_AbstractConditionalOperator
#endif
#ifndef MX_EXIT_VISIT_ConditionalOperator
#  define MX_EXIT_VISIT_ConditionalOperator MX_EXIT_VISIT_AbstractConditionalOperator
#endif

MX_BEGIN_VISIT_STMT(ConditionalOperator)
  MX_ENTER_VISIT_ConditionalOperator
  MX_VISIT_BASE(ConditionalOperator, AbstractConditionalOperator)
  MX_VISIT_ENTITY(ConditionalOperator, lhs, getVal41, setVal41, initVal41, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_ENTITY(ConditionalOperator, rhs, getVal42, setVal42, initVal42, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_EXIT_VISIT_ConditionalOperator
MX_END_VISIT_STMT(ConditionalOperator)

#ifndef MX_ENTER_VISIT_BinaryConditionalOperator
#  define MX_ENTER_VISIT_BinaryConditionalOperator MX_ENTER_VISIT_AbstractConditionalOperator
#endif
#ifndef MX_EXIT_VISIT_BinaryConditionalOperator
#  define MX_EXIT_VISIT_BinaryConditionalOperator MX_EXIT_VISIT_AbstractConditionalOperator
#endif

MX_BEGIN_VISIT_STMT(BinaryConditionalOperator)
  MX_ENTER_VISIT_BinaryConditionalOperator
  MX_VISIT_BASE(BinaryConditionalOperator, AbstractConditionalOperator)
  MX_VISIT_ENTITY(BinaryConditionalOperator, common, getVal41, setVal41, initVal41, Common, Expr, NthStmt, StmtUseSelector::COMMON)
  MX_VISIT_ENTITY(BinaryConditionalOperator, opaque_value, getVal42, setVal42, initVal42, OpaqueValue, OpaqueValueExpr, NthStmt, StmtUseSelector::OPAQUE_VALUE)
  MX_EXIT_VISIT_BinaryConditionalOperator
MX_END_VISIT_STMT(BinaryConditionalOperator)

#ifndef MX_ENTER_VISIT_VAArgExpr
#  define MX_ENTER_VISIT_VAArgExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_VAArgExpr
#  define MX_EXIT_VISIT_VAArgExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(VAArgExpr)
  MX_ENTER_VISIT_VAArgExpr
  MX_VISIT_BASE(VAArgExpr, Expr)
  MX_VISIT_ENTITY(VAArgExpr, builtin_token, getVal36, setVal36, initVal36, BuiltinToken, Token, NthStmt, TokenUseSelector::BUILTIN_TOKEN)
  MX_VISIT_ENTITY(VAArgExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(VAArgExpr, sub_expression, getVal38, setVal38, initVal38, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_ENTITY(VAArgExpr, written_type, getVal39, setVal39, initVal39, WrittenType, Type, NthStmt, TypeUseSelector::WRITTEN_TYPE)
  MX_VISIT_BOOL(VAArgExpr, is_microsoft_abi, getVal93, setVal93, initVal93, IsMicrosoftABI, bool, NthStmt)
  MX_EXIT_VISIT_VAArgExpr
MX_END_VISIT_STMT(VAArgExpr)

#ifndef MX_ENTER_VISIT_UnaryOperator
#  define MX_ENTER_VISIT_UnaryOperator MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_UnaryOperator
#  define MX_EXIT_VISIT_UnaryOperator MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(UnaryOperator)
  MX_ENTER_VISIT_UnaryOperator
  MX_VISIT_BASE(UnaryOperator, Expr)
  MX_VISIT_BOOL(UnaryOperator, can_overflow, getVal93, setVal93, initVal93, CanOverflow, bool, NthStmt)
  MX_VISIT_ENUM(UnaryOperator, opcode, getVal98, setVal98, initVal98, Opcode, UnaryOperatorKind, NthStmt)
  MX_VISIT_ENTITY(UnaryOperator, operator_token, getVal36, setVal36, initVal36, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(UnaryOperator, sub_expression, getVal37, setVal37, initVal37, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_BOOL(UnaryOperator, has_stored_fp_features, getVal94, setVal94, initVal94, HasStoredFPFeatures, bool, NthStmt)
  MX_VISIT_BOOL(UnaryOperator, is_arithmetic_operation, getVal95, setVal95, initVal95, IsArithmeticOperation, bool, NthStmt)
  MX_VISIT_BOOL(UnaryOperator, is_decrement_operation, getVal96, setVal96, initVal96, IsDecrementOperation, bool, NthStmt)
  MX_VISIT_BOOL(UnaryOperator, is_increment_decrement_operation, getVal97, setVal97, initVal97, IsIncrementDecrementOperation, bool, NthStmt)
  MX_VISIT_BOOL(UnaryOperator, is_increment_operation, getVal99, setVal99, initVal99, IsIncrementOperation, bool, NthStmt)
  MX_VISIT_BOOL(UnaryOperator, is_postfix, getVal102, setVal102, initVal102, IsPostfix, bool, NthStmt)
  MX_VISIT_BOOL(UnaryOperator, is_prefix, getVal103, setVal103, initVal103, IsPrefix, bool, NthStmt)
  MX_EXIT_VISIT_UnaryOperator
MX_END_VISIT_STMT(UnaryOperator)

#ifndef MX_ENTER_VISIT_UnaryExprOrTypeTraitExpr
#  define MX_ENTER_VISIT_UnaryExprOrTypeTraitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_UnaryExprOrTypeTraitExpr
#  define MX_EXIT_VISIT_UnaryExprOrTypeTraitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(UnaryExprOrTypeTraitExpr)
  MX_ENTER_VISIT_UnaryExprOrTypeTraitExpr
  MX_VISIT_BASE(UnaryExprOrTypeTraitExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(UnaryExprOrTypeTraitExpr, argument_expression, getVal36, setVal36, initVal36, ArgumentExpression, Expr, NthStmt, StmtUseSelector::ARGUMENT_EXPRESSION)
  MX_VISIT_OPTIONAL_ENTITY(UnaryExprOrTypeTraitExpr, argument_type, getVal37, setVal37, initVal37, ArgumentType, Type, NthStmt, TypeUseSelector::ARGUMENT_TYPE)
  MX_VISIT_ENTITY(UnaryExprOrTypeTraitExpr, operator_token, getVal38, setVal38, initVal38, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(UnaryExprOrTypeTraitExpr, r_paren_token, getVal39, setVal39, initVal39, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(UnaryExprOrTypeTraitExpr, type_of_argument, getVal40, setVal40, initVal40, TypeOfArgument, Type, NthStmt, TypeUseSelector::TYPE_OF_ARGUMENT)
  MX_VISIT_BOOL(UnaryExprOrTypeTraitExpr, is_argument_type, getVal95, setVal95, initVal95, IsArgumentType, bool, NthStmt)
  MX_EXIT_VISIT_UnaryExprOrTypeTraitExpr
MX_END_VISIT_STMT(UnaryExprOrTypeTraitExpr)

#ifndef MX_ENTER_VISIT_TypoExpr
#  define MX_ENTER_VISIT_TypoExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_TypoExpr
#  define MX_EXIT_VISIT_TypoExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(TypoExpr)
  MX_ENTER_VISIT_TypoExpr
  MX_VISIT_BASE(TypoExpr, Expr)
  MX_EXIT_VISIT_TypoExpr
MX_END_VISIT_STMT(TypoExpr)

#ifndef MX_ENTER_VISIT_TypeTraitExpr
#  define MX_ENTER_VISIT_TypeTraitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_TypeTraitExpr
#  define MX_EXIT_VISIT_TypeTraitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(TypeTraitExpr)
  MX_ENTER_VISIT_TypeTraitExpr
  MX_VISIT_BASE(TypeTraitExpr, Expr)
  MX_VISIT_ENUM(TypeTraitExpr, trait, getVal98, setVal98, initVal98, Trait, TypeTrait, NthStmt)
  MX_VISIT_OPTIONAL_BOOL(TypeTraitExpr, value, getVal93, setVal93, initVal93, Value, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(TypeTraitExpr, arguments, getVal15, setVal15, initVal15, Arguments, Type, NthStmt)
  MX_EXIT_VISIT_TypeTraitExpr
MX_END_VISIT_STMT(TypeTraitExpr)

#ifndef MX_ENTER_VISIT_SubstNonTypeTemplateParmPackExpr
#  define MX_ENTER_VISIT_SubstNonTypeTemplateParmPackExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_SubstNonTypeTemplateParmPackExpr
#  define MX_EXIT_VISIT_SubstNonTypeTemplateParmPackExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(SubstNonTypeTemplateParmPackExpr)
  MX_ENTER_VISIT_SubstNonTypeTemplateParmPackExpr
  MX_VISIT_BASE(SubstNonTypeTemplateParmPackExpr, Expr)
  MX_VISIT_ENTITY(SubstNonTypeTemplateParmPackExpr, parameter_pack, getVal36, setVal36, initVal36, ParameterPack, NonTypeTemplateParmDecl, NthStmt, DeclUseSelector::PARAMETER_PACK)
  MX_VISIT_ENTITY(SubstNonTypeTemplateParmPackExpr, parameter_pack_token, getVal37, setVal37, initVal37, ParameterPackToken, Token, NthStmt, TokenUseSelector::PARAMETER_PACK_TOKEN)
  MX_EXIT_VISIT_SubstNonTypeTemplateParmPackExpr
MX_END_VISIT_STMT(SubstNonTypeTemplateParmPackExpr)

#ifndef MX_ENTER_VISIT_SubstNonTypeTemplateParmExpr
#  define MX_ENTER_VISIT_SubstNonTypeTemplateParmExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_SubstNonTypeTemplateParmExpr
#  define MX_EXIT_VISIT_SubstNonTypeTemplateParmExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(SubstNonTypeTemplateParmExpr)
  MX_ENTER_VISIT_SubstNonTypeTemplateParmExpr
  MX_VISIT_BASE(SubstNonTypeTemplateParmExpr, Expr)
  MX_VISIT_ENTITY(SubstNonTypeTemplateParmExpr, name_token, getVal36, setVal36, initVal36, NameToken, Token, NthStmt, TokenUseSelector::NAME_TOKEN)
  MX_VISIT_ENTITY(SubstNonTypeTemplateParmExpr, parameter, getVal37, setVal37, initVal37, Parameter, NonTypeTemplateParmDecl, NthStmt, DeclUseSelector::PARAMETER)
  MX_VISIT_ENTITY(SubstNonTypeTemplateParmExpr, parameter_type, getVal38, setVal38, initVal38, ParameterType, Type, NthStmt, TypeUseSelector::PARAMETER_TYPE)
  MX_VISIT_ENTITY(SubstNonTypeTemplateParmExpr, replacement, getVal39, setVal39, initVal39, Replacement, Expr, NthStmt, StmtUseSelector::REPLACEMENT)
  MX_VISIT_BOOL(SubstNonTypeTemplateParmExpr, is_reference_parameter, getVal93, setVal93, initVal93, IsReferenceParameter, bool, NthStmt)
  MX_EXIT_VISIT_SubstNonTypeTemplateParmExpr
MX_END_VISIT_STMT(SubstNonTypeTemplateParmExpr)

#ifndef MX_ENTER_VISIT_StringLiteral
#  define MX_ENTER_VISIT_StringLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_StringLiteral
#  define MX_EXIT_VISIT_StringLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(StringLiteral)
  MX_ENTER_VISIT_StringLiteral
  MX_VISIT_BASE(StringLiteral, Expr)
  MX_VISIT_OPTIONAL_BOOL(StringLiteral, contains_non_ascii, getVal93, setVal93, initVal93, ContainsNonAscii, bool, NthStmt)
  MX_VISIT_OPTIONAL_BOOL(StringLiteral, contains_non_ascii_or_null, getVal95, setVal95, initVal95, ContainsNonAsciiOrNull, bool, NthStmt)
  MX_VISIT_TEXT(StringLiteral, bytes, getVal64, setVal64, initVal64, Bytes, basic_string_view, NthStmt)
  MX_VISIT_OPTIONAL_TEXT(StringLiteral, string, getVal69, setVal69, initVal69, String, basic_string_view, NthStmt)
  MX_VISIT_BOOL(StringLiteral, is_ascii, getVal99, setVal99, initVal99, IsAscii, bool, NthStmt)
  MX_VISIT_BOOL(StringLiteral, is_pascal, getVal102, setVal102, initVal102, IsPascal, bool, NthStmt)
  MX_VISIT_BOOL(StringLiteral, is_utf16, getVal103, setVal103, initVal103, IsUTF16, bool, NthStmt)
  MX_VISIT_BOOL(StringLiteral, is_utf32, getVal104, setVal104, initVal104, IsUTF32, bool, NthStmt)
  MX_VISIT_BOOL(StringLiteral, is_utf8, getVal105, setVal105, initVal105, IsUTF8, bool, NthStmt)
  MX_VISIT_BOOL(StringLiteral, is_wide, getVal106, setVal106, initVal106, IsWide, bool, NthStmt)
  MX_EXIT_VISIT_StringLiteral
MX_END_VISIT_STMT(StringLiteral)

#ifndef MX_ENTER_VISIT_StmtExpr
#  define MX_ENTER_VISIT_StmtExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_StmtExpr
#  define MX_EXIT_VISIT_StmtExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(StmtExpr)
  MX_ENTER_VISIT_StmtExpr
  MX_VISIT_BASE(StmtExpr, Expr)
  MX_VISIT_ENTITY(StmtExpr, l_paren_token, getVal36, setVal36, initVal36, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(StmtExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(StmtExpr, sub_statement, getVal38, setVal38, initVal38, SubStatement, CompoundStmt, NthStmt, StmtUseSelector::SUB_STATEMENT)
  MX_EXIT_VISIT_StmtExpr
MX_END_VISIT_STMT(StmtExpr)

#ifndef MX_ENTER_VISIT_SourceLocExpr
#  define MX_ENTER_VISIT_SourceLocExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_SourceLocExpr
#  define MX_EXIT_VISIT_SourceLocExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(SourceLocExpr)
  MX_ENTER_VISIT_SourceLocExpr
  MX_VISIT_BASE(SourceLocExpr, Expr)
  MX_VISIT_TEXT(SourceLocExpr, builtin_string, getVal64, setVal64, initVal64, BuiltinString, basic_string_view, NthStmt)
  MX_VISIT_ENUM(SourceLocExpr, identifier_kind, getVal98, setVal98, initVal98, IdentifierKind, SourceLocExprIdentKind, NthStmt)
  MX_VISIT_ENTITY(SourceLocExpr, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(SourceLocExpr, is_int_type, getVal93, setVal93, initVal93, IsIntType, bool, NthStmt)
  MX_VISIT_BOOL(SourceLocExpr, is_string_type, getVal94, setVal94, initVal94, IsStringType, bool, NthStmt)
  MX_EXIT_VISIT_SourceLocExpr
MX_END_VISIT_STMT(SourceLocExpr)

#ifndef MX_ENTER_VISIT_SizeOfPackExpr
#  define MX_ENTER_VISIT_SizeOfPackExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_SizeOfPackExpr
#  define MX_EXIT_VISIT_SizeOfPackExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(SizeOfPackExpr)
  MX_ENTER_VISIT_SizeOfPackExpr
  MX_VISIT_BASE(SizeOfPackExpr, Expr)
  MX_VISIT_ENTITY(SizeOfPackExpr, operator_token, getVal36, setVal36, initVal36, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(SizeOfPackExpr, pack, getVal37, setVal37, initVal37, Pack, NamedDecl, NthStmt, DeclUseSelector::PACK)
  MX_VISIT_OPTIONAL_INT(SizeOfPackExpr, pack_length, getVal107, setVal107, initVal107, PackLength, unsigned, NthStmt)
  MX_VISIT_ENTITY(SizeOfPackExpr, pack_token, getVal38, setVal38, initVal38, PackToken, Token, NthStmt, TokenUseSelector::PACK_TOKEN)
  MX_VISIT_OPTIONAL_PSEUDO_LIST(SizeOfPackExpr, partial_arguments, getVal100, setVal100, initVal100, PartialArguments, TemplateArgument, NthStmt)
  MX_VISIT_ENTITY(SizeOfPackExpr, r_paren_token, getVal39, setVal39, initVal39, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(SizeOfPackExpr, is_partially_substituted, getVal95, setVal95, initVal95, IsPartiallySubstituted, bool, NthStmt)
  MX_EXIT_VISIT_SizeOfPackExpr
MX_END_VISIT_STMT(SizeOfPackExpr)

#ifndef MX_ENTER_VISIT_ShuffleVectorExpr
#  define MX_ENTER_VISIT_ShuffleVectorExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ShuffleVectorExpr
#  define MX_EXIT_VISIT_ShuffleVectorExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ShuffleVectorExpr)
  MX_ENTER_VISIT_ShuffleVectorExpr
  MX_VISIT_BASE(ShuffleVectorExpr, Expr)
  MX_VISIT_ENTITY(ShuffleVectorExpr, builtin_token, getVal36, setVal36, initVal36, BuiltinToken, Token, NthStmt, TokenUseSelector::BUILTIN_TOKEN)
  MX_VISIT_ENTITY(ShuffleVectorExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_ShuffleVectorExpr
MX_END_VISIT_STMT(ShuffleVectorExpr)

#ifndef MX_ENTER_VISIT_SYCLUniqueStableNameExpr
#  define MX_ENTER_VISIT_SYCLUniqueStableNameExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_SYCLUniqueStableNameExpr
#  define MX_EXIT_VISIT_SYCLUniqueStableNameExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(SYCLUniqueStableNameExpr)
  MX_ENTER_VISIT_SYCLUniqueStableNameExpr
  MX_VISIT_BASE(SYCLUniqueStableNameExpr, Expr)
  MX_VISIT_TEXT(SYCLUniqueStableNameExpr, compute_name, getVal64, setVal64, initVal64, ComputeName, basic_string, NthStmt)
  MX_VISIT_ENTITY(SYCLUniqueStableNameExpr, l_paren_token, getVal36, setVal36, initVal36, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(SYCLUniqueStableNameExpr, token, getVal37, setVal37, initVal37, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_ENTITY(SYCLUniqueStableNameExpr, r_paren_token, getVal38, setVal38, initVal38, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_SYCLUniqueStableNameExpr
MX_END_VISIT_STMT(SYCLUniqueStableNameExpr)

#ifndef MX_ENTER_VISIT_RequiresExpr
#  define MX_ENTER_VISIT_RequiresExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_RequiresExpr
#  define MX_EXIT_VISIT_RequiresExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(RequiresExpr)
  MX_ENTER_VISIT_RequiresExpr
  MX_VISIT_BASE(RequiresExpr, Expr)
  MX_VISIT_ENTITY(RequiresExpr, body, getVal36, setVal36, initVal36, Body, RequiresExprBodyDecl, NthStmt, DeclUseSelector::BODY)
  MX_VISIT_ENTITY_LIST(RequiresExpr, local_parameters, getVal15, setVal15, initVal15, LocalParameters, ParmVarDecl, NthStmt)
  MX_VISIT_ENTITY(RequiresExpr, r_brace_token, getVal37, setVal37, initVal37, RBraceToken, Token, NthStmt, TokenUseSelector::R_BRACE_TOKEN)
  MX_VISIT_ENTITY(RequiresExpr, requires_keyword_token, getVal38, setVal38, initVal38, RequiresKeywordToken, Token, NthStmt, TokenUseSelector::REQUIRES_KEYWORD_TOKEN)
  MX_VISIT_BOOL(RequiresExpr, is_satisfied, getVal93, setVal93, initVal93, IsSatisfied, bool, NthStmt)
  MX_EXIT_VISIT_RequiresExpr
MX_END_VISIT_STMT(RequiresExpr)

#ifndef MX_ENTER_VISIT_RecoveryExpr
#  define MX_ENTER_VISIT_RecoveryExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_RecoveryExpr
#  define MX_EXIT_VISIT_RecoveryExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(RecoveryExpr)
  MX_ENTER_VISIT_RecoveryExpr
  MX_VISIT_BASE(RecoveryExpr, Expr)
  MX_VISIT_ENTITY_LIST(RecoveryExpr, sub_expressions, getVal15, setVal15, initVal15, SubExpressions, Expr, NthStmt)
  MX_EXIT_VISIT_RecoveryExpr
MX_END_VISIT_STMT(RecoveryExpr)

#ifndef MX_ENTER_VISIT_PseudoObjectExpr
#  define MX_ENTER_VISIT_PseudoObjectExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_PseudoObjectExpr
#  define MX_EXIT_VISIT_PseudoObjectExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(PseudoObjectExpr)
  MX_ENTER_VISIT_PseudoObjectExpr
  MX_VISIT_BASE(PseudoObjectExpr, Expr)
  MX_VISIT_ENTITY(PseudoObjectExpr, result_expression, getVal36, setVal36, initVal36, ResultExpression, Expr, NthStmt, StmtUseSelector::RESULT_EXPRESSION)
  MX_VISIT_ENTITY(PseudoObjectExpr, syntactic_form, getVal37, setVal37, initVal37, SyntacticForm, Expr, NthStmt, StmtUseSelector::SYNTACTIC_FORM)
  MX_VISIT_ENTITY_LIST(PseudoObjectExpr, semantics, getVal15, setVal15, initVal15, Semantics, Expr, NthStmt)
  MX_VISIT_ENTITY_LIST(PseudoObjectExpr, semantic_expressions, getVal21, setVal21, initVal21, SemanticExpressions, Expr, NthStmt)
  MX_EXIT_VISIT_PseudoObjectExpr
MX_END_VISIT_STMT(PseudoObjectExpr)

#ifndef MX_ENTER_VISIT_PredefinedExpr
#  define MX_ENTER_VISIT_PredefinedExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_PredefinedExpr
#  define MX_EXIT_VISIT_PredefinedExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(PredefinedExpr)
  MX_ENTER_VISIT_PredefinedExpr
  MX_VISIT_BASE(PredefinedExpr, Expr)
  MX_VISIT_ENTITY(PredefinedExpr, function_name, getVal36, setVal36, initVal36, FunctionName, StringLiteral, NthStmt, StmtUseSelector::FUNCTION_NAME)
  MX_VISIT_ENUM(PredefinedExpr, identifier_kind, getVal98, setVal98, initVal98, IdentifierKind, PredefinedExprIdentKind, NthStmt)
  MX_VISIT_TEXT(PredefinedExpr, identifier_kind_name, getVal64, setVal64, initVal64, IdentifierKindName, basic_string_view, NthStmt)
  MX_VISIT_ENTITY(PredefinedExpr, token, getVal37, setVal37, initVal37, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_EXIT_VISIT_PredefinedExpr
MX_END_VISIT_STMT(PredefinedExpr)

#ifndef MX_ENTER_VISIT_ParenListExpr
#  define MX_ENTER_VISIT_ParenListExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ParenListExpr
#  define MX_EXIT_VISIT_ParenListExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ParenListExpr)
  MX_ENTER_VISIT_ParenListExpr
  MX_VISIT_BASE(ParenListExpr, Expr)
  MX_VISIT_ENTITY(ParenListExpr, l_paren_token, getVal36, setVal36, initVal36, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(ParenListExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY_LIST(ParenListExpr, expressions, getVal15, setVal15, initVal15, Expressions, Expr, NthStmt)
  MX_EXIT_VISIT_ParenListExpr
MX_END_VISIT_STMT(ParenListExpr)

#ifndef MX_ENTER_VISIT_ParenExpr
#  define MX_ENTER_VISIT_ParenExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ParenExpr
#  define MX_EXIT_VISIT_ParenExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ParenExpr)
  MX_ENTER_VISIT_ParenExpr
  MX_VISIT_BASE(ParenExpr, Expr)
  MX_VISIT_ENTITY(ParenExpr, l_paren_token, getVal36, setVal36, initVal36, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(ParenExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(ParenExpr, sub_expression, getVal38, setVal38, initVal38, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_EXIT_VISIT_ParenExpr
MX_END_VISIT_STMT(ParenExpr)

#ifndef MX_ENTER_VISIT_PackExpansionExpr
#  define MX_ENTER_VISIT_PackExpansionExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_PackExpansionExpr
#  define MX_EXIT_VISIT_PackExpansionExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(PackExpansionExpr)
  MX_ENTER_VISIT_PackExpansionExpr
  MX_VISIT_BASE(PackExpansionExpr, Expr)
  MX_VISIT_ENTITY(PackExpansionExpr, ellipsis_token, getVal36, setVal36, initVal36, EllipsisToken, Token, NthStmt, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_OPTIONAL_INT(PackExpansionExpr, num_expansions, getVal107, setVal107, initVal107, NumExpansions, unsigned, NthStmt)
  MX_VISIT_ENTITY(PackExpansionExpr, pattern, getVal37, setVal37, initVal37, Pattern, Expr, NthStmt, StmtUseSelector::PATTERN)
  MX_EXIT_VISIT_PackExpansionExpr
MX_END_VISIT_STMT(PackExpansionExpr)

#ifndef MX_ENTER_VISIT_OverloadExpr
#  define MX_ENTER_VISIT_OverloadExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_OverloadExpr
#  define MX_EXIT_VISIT_OverloadExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(OverloadExpr)
  MX_ENTER_VISIT_OverloadExpr
  MX_VISIT_BASE(OverloadExpr, Expr)
  MX_VISIT_ENTITY(OverloadExpr, l_angle_token, getVal36, setVal36, initVal36, LAngleToken, Token, NthStmt, TokenUseSelector::L_ANGLE_TOKEN)
  MX_VISIT_ENTITY(OverloadExpr, name_token, getVal37, setVal37, initVal37, NameToken, Token, NthStmt, TokenUseSelector::NAME_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(OverloadExpr, naming_class, getVal38, setVal38, initVal38, NamingClass, CXXRecordDecl, NthStmt, DeclUseSelector::NAMING_CLASS)
  MX_VISIT_ENTITY(OverloadExpr, r_angle_token, getVal39, setVal39, initVal39, RAngleToken, Token, NthStmt, TokenUseSelector::R_ANGLE_TOKEN)
  MX_VISIT_ENTITY(OverloadExpr, template_keyword_token, getVal40, setVal40, initVal40, TemplateKeywordToken, Token, NthStmt, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_BOOL(OverloadExpr, has_explicit_template_arguments, getVal94, setVal94, initVal94, HasExplicitTemplateArguments, bool, NthStmt)
  MX_VISIT_BOOL(OverloadExpr, has_template_keyword, getVal95, setVal95, initVal95, HasTemplateKeyword, bool, NthStmt)
  MX_EXIT_VISIT_OverloadExpr
MX_END_VISIT_STMT(OverloadExpr)

#ifndef MX_ENTER_VISIT_UnresolvedMemberExpr
#  define MX_ENTER_VISIT_UnresolvedMemberExpr MX_ENTER_VISIT_OverloadExpr
#endif
#ifndef MX_EXIT_VISIT_UnresolvedMemberExpr
#  define MX_EXIT_VISIT_UnresolvedMemberExpr MX_EXIT_VISIT_OverloadExpr
#endif

MX_BEGIN_VISIT_STMT(UnresolvedMemberExpr)
  MX_ENTER_VISIT_UnresolvedMemberExpr
  MX_VISIT_BASE(UnresolvedMemberExpr, OverloadExpr)
  MX_VISIT_ENTITY(UnresolvedMemberExpr, base, getVal41, setVal41, initVal41, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(UnresolvedMemberExpr, base_type, getVal42, setVal42, initVal42, BaseType, Type, NthStmt, TypeUseSelector::BASE_TYPE)
  MX_VISIT_ENTITY(UnresolvedMemberExpr, member_token, getVal43, setVal43, initVal43, MemberToken, Token, NthStmt, TokenUseSelector::MEMBER_TOKEN)
  MX_VISIT_ENTITY(UnresolvedMemberExpr, operator_token, getVal44, setVal44, initVal44, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_BOOL(UnresolvedMemberExpr, has_unresolved_using, getVal96, setVal96, initVal96, HasUnresolvedUsing, bool, NthStmt)
  MX_VISIT_BOOL(UnresolvedMemberExpr, is_arrow, getVal97, setVal97, initVal97, IsArrow, bool, NthStmt)
  MX_VISIT_BOOL(UnresolvedMemberExpr, is_implicit_access, getVal99, setVal99, initVal99, IsImplicitAccess, bool, NthStmt)
  MX_EXIT_VISIT_UnresolvedMemberExpr
MX_END_VISIT_STMT(UnresolvedMemberExpr)

#ifndef MX_ENTER_VISIT_UnresolvedLookupExpr
#  define MX_ENTER_VISIT_UnresolvedLookupExpr MX_ENTER_VISIT_OverloadExpr
#endif
#ifndef MX_EXIT_VISIT_UnresolvedLookupExpr
#  define MX_EXIT_VISIT_UnresolvedLookupExpr MX_EXIT_VISIT_OverloadExpr
#endif

MX_BEGIN_VISIT_STMT(UnresolvedLookupExpr)
  MX_ENTER_VISIT_UnresolvedLookupExpr
  MX_VISIT_BASE(UnresolvedLookupExpr, OverloadExpr)
  MX_VISIT_BOOL(UnresolvedLookupExpr, is_overloaded, getVal96, setVal96, initVal96, IsOverloaded, bool, NthStmt)
  MX_VISIT_BOOL(UnresolvedLookupExpr, requires_adl, getVal97, setVal97, initVal97, RequiresADL, bool, NthStmt)
  MX_EXIT_VISIT_UnresolvedLookupExpr
MX_END_VISIT_STMT(UnresolvedLookupExpr)

#ifndef MX_ENTER_VISIT_OpaqueValueExpr
#  define MX_ENTER_VISIT_OpaqueValueExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_OpaqueValueExpr
#  define MX_EXIT_VISIT_OpaqueValueExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(OpaqueValueExpr)
  MX_ENTER_VISIT_OpaqueValueExpr
  MX_VISIT_BASE(OpaqueValueExpr, Expr)
  MX_VISIT_ENTITY(OpaqueValueExpr, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_ENTITY(OpaqueValueExpr, source_expression, getVal37, setVal37, initVal37, SourceExpression, Expr, NthStmt, StmtUseSelector::SOURCE_EXPRESSION)
  MX_VISIT_BOOL(OpaqueValueExpr, is_unique, getVal93, setVal93, initVal93, IsUnique, bool, NthStmt)
  MX_EXIT_VISIT_OpaqueValueExpr
MX_END_VISIT_STMT(OpaqueValueExpr)

#ifndef MX_ENTER_VISIT_OffsetOfExpr
#  define MX_ENTER_VISIT_OffsetOfExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_OffsetOfExpr
#  define MX_EXIT_VISIT_OffsetOfExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(OffsetOfExpr)
  MX_ENTER_VISIT_OffsetOfExpr
  MX_VISIT_BASE(OffsetOfExpr, Expr)
  MX_VISIT_ENTITY(OffsetOfExpr, operator_token, getVal36, setVal36, initVal36, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(OffsetOfExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_OffsetOfExpr
MX_END_VISIT_STMT(OffsetOfExpr)

#ifndef MX_ENTER_VISIT_ObjCSubscriptRefExpr
#  define MX_ENTER_VISIT_ObjCSubscriptRefExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCSubscriptRefExpr
#  define MX_EXIT_VISIT_ObjCSubscriptRefExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCSubscriptRefExpr)
  MX_ENTER_VISIT_ObjCSubscriptRefExpr
  MX_VISIT_BASE(ObjCSubscriptRefExpr, Expr)
  MX_VISIT_ENTITY(ObjCSubscriptRefExpr, at_index_method_declaration, getVal36, setVal36, initVal36, AtIndexMethodDeclaration, ObjCMethodDecl, NthStmt, DeclUseSelector::AT_INDEX_METHOD_DECLARATION)
  MX_VISIT_ENTITY(ObjCSubscriptRefExpr, base_expression, getVal37, setVal37, initVal37, BaseExpression, Expr, NthStmt, StmtUseSelector::BASE_EXPRESSION)
  MX_VISIT_ENTITY(ObjCSubscriptRefExpr, key_expression, getVal38, setVal38, initVal38, KeyExpression, Expr, NthStmt, StmtUseSelector::KEY_EXPRESSION)
  MX_VISIT_ENTITY(ObjCSubscriptRefExpr, r_bracket_token, getVal39, setVal39, initVal39, RBracketToken, Token, NthStmt, TokenUseSelector::R_BRACKET_TOKEN)
  MX_VISIT_BOOL(ObjCSubscriptRefExpr, is_array_subscript_reference_expression, getVal93, setVal93, initVal93, IsArraySubscriptReferenceExpression, bool, NthStmt)
  MX_EXIT_VISIT_ObjCSubscriptRefExpr
MX_END_VISIT_STMT(ObjCSubscriptRefExpr)

#ifndef MX_ENTER_VISIT_ObjCStringLiteral
#  define MX_ENTER_VISIT_ObjCStringLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCStringLiteral
#  define MX_EXIT_VISIT_ObjCStringLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCStringLiteral)
  MX_ENTER_VISIT_ObjCStringLiteral
  MX_VISIT_BASE(ObjCStringLiteral, Expr)
  MX_VISIT_ENTITY(ObjCStringLiteral, at_token, getVal36, setVal36, initVal36, AtToken, Token, NthStmt, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCStringLiteral, string, getVal37, setVal37, initVal37, String, StringLiteral, NthStmt, StmtUseSelector::STRING)
  MX_EXIT_VISIT_ObjCStringLiteral
MX_END_VISIT_STMT(ObjCStringLiteral)

#ifndef MX_ENTER_VISIT_ObjCSelectorExpr
#  define MX_ENTER_VISIT_ObjCSelectorExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCSelectorExpr
#  define MX_EXIT_VISIT_ObjCSelectorExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCSelectorExpr)
  MX_ENTER_VISIT_ObjCSelectorExpr
  MX_VISIT_BASE(ObjCSelectorExpr, Expr)
  MX_VISIT_ENTITY(ObjCSelectorExpr, at_token, getVal36, setVal36, initVal36, AtToken, Token, NthStmt, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCSelectorExpr, r_paren_token, getVal37, setVal37, initVal37, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_ObjCSelectorExpr
MX_END_VISIT_STMT(ObjCSelectorExpr)

#ifndef MX_ENTER_VISIT_ObjCProtocolExpr
#  define MX_ENTER_VISIT_ObjCProtocolExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCProtocolExpr
#  define MX_EXIT_VISIT_ObjCProtocolExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCProtocolExpr)
  MX_ENTER_VISIT_ObjCProtocolExpr
  MX_VISIT_BASE(ObjCProtocolExpr, Expr)
  MX_VISIT_ENTITY(ObjCProtocolExpr, at_token, getVal36, setVal36, initVal36, AtToken, Token, NthStmt, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCProtocolExpr, protocol, getVal37, setVal37, initVal37, Protocol, ObjCProtocolDecl, NthStmt, DeclUseSelector::PROTOCOL)
  MX_VISIT_ENTITY(ObjCProtocolExpr, protocol_id_token, getVal38, setVal38, initVal38, ProtocolIdToken, Token, NthStmt, TokenUseSelector::PROTOCOL_ID_TOKEN)
  MX_VISIT_ENTITY(ObjCProtocolExpr, r_paren_token, getVal39, setVal39, initVal39, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_ObjCProtocolExpr
MX_END_VISIT_STMT(ObjCProtocolExpr)

#ifndef MX_ENTER_VISIT_ObjCPropertyRefExpr
#  define MX_ENTER_VISIT_ObjCPropertyRefExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCPropertyRefExpr
#  define MX_EXIT_VISIT_ObjCPropertyRefExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCPropertyRefExpr)
  MX_ENTER_VISIT_ObjCPropertyRefExpr
  MX_VISIT_BASE(ObjCPropertyRefExpr, Expr)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, class_receiver, getVal37, setVal37, initVal37, ClassReceiver, ObjCInterfaceDecl, NthStmt, DeclUseSelector::CLASS_RECEIVER)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, explicit_property, getVal38, setVal38, initVal38, ExplicitProperty, ObjCPropertyDecl, NthStmt, DeclUseSelector::EXPLICIT_PROPERTY)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, implicit_property_getter, getVal39, setVal39, initVal39, ImplicitPropertyGetter, ObjCMethodDecl, NthStmt, DeclUseSelector::IMPLICIT_PROPERTY_GETTER)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, implicit_property_setter, getVal40, setVal40, initVal40, ImplicitPropertySetter, ObjCMethodDecl, NthStmt, DeclUseSelector::IMPLICIT_PROPERTY_SETTER)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, token, getVal41, setVal41, initVal41, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, receiver_token, getVal42, setVal42, initVal42, ReceiverToken, Token, NthStmt, TokenUseSelector::RECEIVER_TOKEN)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, receiver_type, getVal43, setVal43, initVal43, ReceiverType, Type, NthStmt, TypeUseSelector::RECEIVER_TYPE)
  MX_VISIT_ENTITY(ObjCPropertyRefExpr, super_receiver_type, getVal44, setVal44, initVal44, SuperReceiverType, Type, NthStmt, TypeUseSelector::SUPER_RECEIVER_TYPE)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_class_receiver, getVal93, setVal93, initVal93, IsClassReceiver, bool, NthStmt)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_explicit_property, getVal94, setVal94, initVal94, IsExplicitProperty, bool, NthStmt)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_implicit_property, getVal95, setVal95, initVal95, IsImplicitProperty, bool, NthStmt)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_messaging_getter, getVal96, setVal96, initVal96, IsMessagingGetter, bool, NthStmt)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_messaging_setter, getVal97, setVal97, initVal97, IsMessagingSetter, bool, NthStmt)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_object_receiver, getVal99, setVal99, initVal99, IsObjectReceiver, bool, NthStmt)
  MX_VISIT_BOOL(ObjCPropertyRefExpr, is_super_receiver, getVal102, setVal102, initVal102, IsSuperReceiver, bool, NthStmt)
  MX_EXIT_VISIT_ObjCPropertyRefExpr
MX_END_VISIT_STMT(ObjCPropertyRefExpr)

#ifndef MX_ENTER_VISIT_ObjCMessageExpr
#  define MX_ENTER_VISIT_ObjCMessageExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCMessageExpr
#  define MX_EXIT_VISIT_ObjCMessageExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCMessageExpr)
  MX_ENTER_VISIT_ObjCMessageExpr
  MX_VISIT_BASE(ObjCMessageExpr, Expr)
  MX_VISIT_ENTITY_LIST(ObjCMessageExpr, arguments, getVal15, setVal15, initVal15, Arguments, Expr, NthStmt)
  MX_VISIT_ENTITY(ObjCMessageExpr, call_return_type, getVal36, setVal36, initVal36, CallReturnType, Type, NthStmt, TypeUseSelector::CALL_RETURN_TYPE)
  MX_VISIT_ENTITY(ObjCMessageExpr, class_receiver, getVal37, setVal37, initVal37, ClassReceiver, Type, NthStmt, TypeUseSelector::CLASS_RECEIVER)
  MX_VISIT_ENTITY(ObjCMessageExpr, class_receiver_type, getVal38, setVal38, initVal38, ClassReceiverType, Type, NthStmt, TypeUseSelector::CLASS_RECEIVER_TYPE)
  MX_VISIT_ENTITY(ObjCMessageExpr, instance_receiver, getVal39, setVal39, initVal39, InstanceReceiver, Expr, NthStmt, StmtUseSelector::INSTANCE_RECEIVER)
  MX_VISIT_ENTITY(ObjCMessageExpr, left_token, getVal40, setVal40, initVal40, LeftToken, Token, NthStmt, TokenUseSelector::LEFT_TOKEN)
  MX_VISIT_ENTITY(ObjCMessageExpr, method_declaration, getVal41, setVal41, initVal41, MethodDeclaration, ObjCMethodDecl, NthStmt, DeclUseSelector::METHOD_DECLARATION)
  MX_VISIT_ENUM(ObjCMessageExpr, method_family, getVal98, setVal98, initVal98, MethodFamily, ObjCMethodFamily, NthStmt)
  MX_VISIT_ENTITY(ObjCMessageExpr, receiver_interface, getVal42, setVal42, initVal42, ReceiverInterface, ObjCInterfaceDecl, NthStmt, DeclUseSelector::RECEIVER_INTERFACE)
  MX_VISIT_ENUM(ObjCMessageExpr, receiver_kind, getVal101, setVal101, initVal101, ReceiverKind, ObjCMessageExprReceiverKind, NthStmt)
  MX_VISIT_ENTITY(ObjCMessageExpr, receiver_type, getVal45, setVal45, initVal45, ReceiverType, Type, NthStmt, TypeUseSelector::RECEIVER_TYPE)
  MX_VISIT_ENTITY(ObjCMessageExpr, right_token, getVal46, setVal46, initVal46, RightToken, Token, NthStmt, TokenUseSelector::RIGHT_TOKEN)
  MX_VISIT_ENTITY(ObjCMessageExpr, selector_start_token, getVal47, setVal47, initVal47, SelectorStartToken, Token, NthStmt, TokenUseSelector::SELECTOR_START_TOKEN)
  MX_VISIT_ENTITY(ObjCMessageExpr, super_token, getVal48, setVal48, initVal48, SuperToken, Token, NthStmt, TokenUseSelector::SUPER_TOKEN)
  MX_VISIT_ENTITY(ObjCMessageExpr, super_type, getVal49, setVal49, initVal49, SuperType, Type, NthStmt, TypeUseSelector::SUPER_TYPE)
  MX_VISIT_BOOL(ObjCMessageExpr, is_class_message, getVal93, setVal93, initVal93, IsClassMessage, bool, NthStmt)
  MX_VISIT_BOOL(ObjCMessageExpr, is_delegate_initializer_call, getVal94, setVal94, initVal94, IsDelegateInitializerCall, bool, NthStmt)
  MX_VISIT_BOOL(ObjCMessageExpr, is_implicit, getVal95, setVal95, initVal95, IsImplicit, bool, NthStmt)
  MX_VISIT_BOOL(ObjCMessageExpr, is_instance_message, getVal96, setVal96, initVal96, IsInstanceMessage, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(ObjCMessageExpr, selector_tokens, getVal21, setVal21, initVal21, SelectorTokens, Token, NthStmt)
  MX_EXIT_VISIT_ObjCMessageExpr
MX_END_VISIT_STMT(ObjCMessageExpr)

#ifndef MX_ENTER_VISIT_ObjCIvarRefExpr
#  define MX_ENTER_VISIT_ObjCIvarRefExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCIvarRefExpr
#  define MX_EXIT_VISIT_ObjCIvarRefExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCIvarRefExpr)
  MX_ENTER_VISIT_ObjCIvarRefExpr
  MX_VISIT_BASE(ObjCIvarRefExpr, Expr)
  MX_VISIT_ENTITY(ObjCIvarRefExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(ObjCIvarRefExpr, declaration, getVal37, setVal37, initVal37, Declaration, ObjCIvarDecl, NthStmt, DeclUseSelector::DECLARATION)
  MX_VISIT_ENTITY(ObjCIvarRefExpr, token, getVal38, setVal38, initVal38, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_ENTITY(ObjCIvarRefExpr, operation_token, getVal39, setVal39, initVal39, OperationToken, Token, NthStmt, TokenUseSelector::OPERATION_TOKEN)
  MX_VISIT_BOOL(ObjCIvarRefExpr, is_arrow, getVal93, setVal93, initVal93, IsArrow, bool, NthStmt)
  MX_VISIT_BOOL(ObjCIvarRefExpr, is_free_instance_variable, getVal94, setVal94, initVal94, IsFreeInstanceVariable, bool, NthStmt)
  MX_EXIT_VISIT_ObjCIvarRefExpr
MX_END_VISIT_STMT(ObjCIvarRefExpr)

#ifndef MX_ENTER_VISIT_ObjCIsaExpr
#  define MX_ENTER_VISIT_ObjCIsaExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCIsaExpr
#  define MX_EXIT_VISIT_ObjCIsaExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCIsaExpr)
  MX_ENTER_VISIT_ObjCIsaExpr
  MX_VISIT_BASE(ObjCIsaExpr, Expr)
  MX_VISIT_ENTITY(ObjCIsaExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(ObjCIsaExpr, base_token_end, getVal37, setVal37, initVal37, BaseTokenEnd, Token, NthStmt, TokenUseSelector::BASE_TOKEN_END)
  MX_VISIT_ENTITY(ObjCIsaExpr, isa_member_token, getVal38, setVal38, initVal38, IsaMemberToken, Token, NthStmt, TokenUseSelector::ISA_MEMBER_TOKEN)
  MX_VISIT_ENTITY(ObjCIsaExpr, operation_token, getVal39, setVal39, initVal39, OperationToken, Token, NthStmt, TokenUseSelector::OPERATION_TOKEN)
  MX_VISIT_BOOL(ObjCIsaExpr, is_arrow, getVal93, setVal93, initVal93, IsArrow, bool, NthStmt)
  MX_EXIT_VISIT_ObjCIsaExpr
MX_END_VISIT_STMT(ObjCIsaExpr)

#ifndef MX_ENTER_VISIT_ObjCIndirectCopyRestoreExpr
#  define MX_ENTER_VISIT_ObjCIndirectCopyRestoreExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCIndirectCopyRestoreExpr
#  define MX_EXIT_VISIT_ObjCIndirectCopyRestoreExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCIndirectCopyRestoreExpr)
  MX_ENTER_VISIT_ObjCIndirectCopyRestoreExpr
  MX_VISIT_BASE(ObjCIndirectCopyRestoreExpr, Expr)
  MX_VISIT_ENTITY(ObjCIndirectCopyRestoreExpr, sub_expression, getVal36, setVal36, initVal36, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_BOOL(ObjCIndirectCopyRestoreExpr, should_copy, getVal93, setVal93, initVal93, ShouldCopy, bool, NthStmt)
  MX_EXIT_VISIT_ObjCIndirectCopyRestoreExpr
MX_END_VISIT_STMT(ObjCIndirectCopyRestoreExpr)

#ifndef MX_ENTER_VISIT_ObjCEncodeExpr
#  define MX_ENTER_VISIT_ObjCEncodeExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCEncodeExpr
#  define MX_EXIT_VISIT_ObjCEncodeExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCEncodeExpr)
  MX_ENTER_VISIT_ObjCEncodeExpr
  MX_VISIT_BASE(ObjCEncodeExpr, Expr)
  MX_VISIT_ENTITY(ObjCEncodeExpr, at_token, getVal36, setVal36, initVal36, AtToken, Token, NthStmt, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCEncodeExpr, encoded_type, getVal37, setVal37, initVal37, EncodedType, Type, NthStmt, TypeUseSelector::ENCODED_TYPE)
  MX_VISIT_ENTITY(ObjCEncodeExpr, r_paren_token, getVal38, setVal38, initVal38, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_ObjCEncodeExpr
MX_END_VISIT_STMT(ObjCEncodeExpr)

#ifndef MX_ENTER_VISIT_ObjCDictionaryLiteral
#  define MX_ENTER_VISIT_ObjCDictionaryLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCDictionaryLiteral
#  define MX_EXIT_VISIT_ObjCDictionaryLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCDictionaryLiteral)
  MX_ENTER_VISIT_ObjCDictionaryLiteral
  MX_VISIT_BASE(ObjCDictionaryLiteral, Expr)
  MX_VISIT_ENTITY(ObjCDictionaryLiteral, dictionary_with_objects_method, getVal36, setVal36, initVal36, DictionaryWithObjectsMethod, ObjCMethodDecl, NthStmt, DeclUseSelector::DICTIONARY_WITH_OBJECTS_METHOD)
  MX_EXIT_VISIT_ObjCDictionaryLiteral
MX_END_VISIT_STMT(ObjCDictionaryLiteral)

#ifndef MX_ENTER_VISIT_ObjCBoxedExpr
#  define MX_ENTER_VISIT_ObjCBoxedExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCBoxedExpr
#  define MX_EXIT_VISIT_ObjCBoxedExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCBoxedExpr)
  MX_ENTER_VISIT_ObjCBoxedExpr
  MX_VISIT_BASE(ObjCBoxedExpr, Expr)
  MX_VISIT_ENTITY(ObjCBoxedExpr, at_token, getVal36, setVal36, initVal36, AtToken, Token, NthStmt, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCBoxedExpr, boxing_method, getVal37, setVal37, initVal37, BoxingMethod, ObjCMethodDecl, NthStmt, DeclUseSelector::BOXING_METHOD)
  MX_VISIT_ENTITY(ObjCBoxedExpr, sub_expression, getVal38, setVal38, initVal38, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_BOOL(ObjCBoxedExpr, is_expressible_as_constant_initializer, getVal93, setVal93, initVal93, IsExpressibleAsConstantInitializer, bool, NthStmt)
  MX_EXIT_VISIT_ObjCBoxedExpr
MX_END_VISIT_STMT(ObjCBoxedExpr)

#ifndef MX_ENTER_VISIT_ObjCBoolLiteralExpr
#  define MX_ENTER_VISIT_ObjCBoolLiteralExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCBoolLiteralExpr
#  define MX_EXIT_VISIT_ObjCBoolLiteralExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCBoolLiteralExpr)
  MX_ENTER_VISIT_ObjCBoolLiteralExpr
  MX_VISIT_BASE(ObjCBoolLiteralExpr, Expr)
  MX_VISIT_ENTITY(ObjCBoolLiteralExpr, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(ObjCBoolLiteralExpr, value, getVal93, setVal93, initVal93, Value, bool, NthStmt)
  MX_EXIT_VISIT_ObjCBoolLiteralExpr
MX_END_VISIT_STMT(ObjCBoolLiteralExpr)

#ifndef MX_ENTER_VISIT_ObjCAvailabilityCheckExpr
#  define MX_ENTER_VISIT_ObjCAvailabilityCheckExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCAvailabilityCheckExpr
#  define MX_EXIT_VISIT_ObjCAvailabilityCheckExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCAvailabilityCheckExpr)
  MX_ENTER_VISIT_ObjCAvailabilityCheckExpr
  MX_VISIT_BASE(ObjCAvailabilityCheckExpr, Expr)
  MX_VISIT_BOOL(ObjCAvailabilityCheckExpr, has_version, getVal93, setVal93, initVal93, HasVersion, bool, NthStmt)
  MX_EXIT_VISIT_ObjCAvailabilityCheckExpr
MX_END_VISIT_STMT(ObjCAvailabilityCheckExpr)

#ifndef MX_ENTER_VISIT_ObjCArrayLiteral
#  define MX_ENTER_VISIT_ObjCArrayLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ObjCArrayLiteral
#  define MX_EXIT_VISIT_ObjCArrayLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ObjCArrayLiteral)
  MX_ENTER_VISIT_ObjCArrayLiteral
  MX_VISIT_BASE(ObjCArrayLiteral, Expr)
  MX_VISIT_ENTITY(ObjCArrayLiteral, array_with_objects_method, getVal36, setVal36, initVal36, ArrayWithObjectsMethod, ObjCMethodDecl, NthStmt, DeclUseSelector::ARRAY_WITH_OBJECTS_METHOD)
  MX_VISIT_ENTITY_LIST(ObjCArrayLiteral, elements, getVal15, setVal15, initVal15, Elements, Expr, NthStmt)
  MX_EXIT_VISIT_ObjCArrayLiteral
MX_END_VISIT_STMT(ObjCArrayLiteral)

#ifndef MX_ENTER_VISIT_OMPIteratorExpr
#  define MX_ENTER_VISIT_OMPIteratorExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_OMPIteratorExpr
#  define MX_EXIT_VISIT_OMPIteratorExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(OMPIteratorExpr)
  MX_ENTER_VISIT_OMPIteratorExpr
  MX_VISIT_BASE(OMPIteratorExpr, Expr)
  MX_VISIT_ENTITY(OMPIteratorExpr, iterator_kw_token, getVal36, setVal36, initVal36, IteratorKwToken, Token, NthStmt, TokenUseSelector::ITERATOR_KW_TOKEN)
  MX_VISIT_ENTITY(OMPIteratorExpr, l_paren_token, getVal37, setVal37, initVal37, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(OMPIteratorExpr, r_paren_token, getVal38, setVal38, initVal38, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_OMPIteratorExpr
MX_END_VISIT_STMT(OMPIteratorExpr)

#ifndef MX_ENTER_VISIT_OMPArrayShapingExpr
#  define MX_ENTER_VISIT_OMPArrayShapingExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_OMPArrayShapingExpr
#  define MX_EXIT_VISIT_OMPArrayShapingExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(OMPArrayShapingExpr)
  MX_ENTER_VISIT_OMPArrayShapingExpr
  MX_VISIT_BASE(OMPArrayShapingExpr, Expr)
  MX_VISIT_ENTITY(OMPArrayShapingExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY_LIST(OMPArrayShapingExpr, dimensions, getVal15, setVal15, initVal15, Dimensions, Expr, NthStmt)
  MX_VISIT_ENTITY(OMPArrayShapingExpr, l_paren_token, getVal37, setVal37, initVal37, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(OMPArrayShapingExpr, r_paren_token, getVal38, setVal38, initVal38, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_OMPArrayShapingExpr
MX_END_VISIT_STMT(OMPArrayShapingExpr)

#ifndef MX_ENTER_VISIT_OMPArraySectionExpr
#  define MX_ENTER_VISIT_OMPArraySectionExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_OMPArraySectionExpr
#  define MX_EXIT_VISIT_OMPArraySectionExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(OMPArraySectionExpr)
  MX_ENTER_VISIT_OMPArraySectionExpr
  MX_VISIT_BASE(OMPArraySectionExpr, Expr)
  MX_VISIT_ENTITY(OMPArraySectionExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(OMPArraySectionExpr, first_colon_token, getVal37, setVal37, initVal37, FirstColonToken, Token, NthStmt, TokenUseSelector::FIRST_COLON_TOKEN)
  MX_VISIT_ENTITY(OMPArraySectionExpr, second_colon_token, getVal38, setVal38, initVal38, SecondColonToken, Token, NthStmt, TokenUseSelector::SECOND_COLON_TOKEN)
  MX_VISIT_ENTITY(OMPArraySectionExpr, length, getVal39, setVal39, initVal39, Length, Expr, NthStmt, StmtUseSelector::LENGTH)
  MX_VISIT_ENTITY(OMPArraySectionExpr, lower_bound, getVal40, setVal40, initVal40, LowerBound, Expr, NthStmt, StmtUseSelector::LOWER_BOUND)
  MX_VISIT_ENTITY(OMPArraySectionExpr, r_bracket_token, getVal41, setVal41, initVal41, RBracketToken, Token, NthStmt, TokenUseSelector::R_BRACKET_TOKEN)
  MX_VISIT_ENTITY(OMPArraySectionExpr, stride, getVal42, setVal42, initVal42, Stride, Expr, NthStmt, StmtUseSelector::STRIDE)
  MX_EXIT_VISIT_OMPArraySectionExpr
MX_END_VISIT_STMT(OMPArraySectionExpr)

#ifndef MX_ENTER_VISIT_NoInitExpr
#  define MX_ENTER_VISIT_NoInitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_NoInitExpr
#  define MX_EXIT_VISIT_NoInitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(NoInitExpr)
  MX_ENTER_VISIT_NoInitExpr
  MX_VISIT_BASE(NoInitExpr, Expr)
  MX_EXIT_VISIT_NoInitExpr
MX_END_VISIT_STMT(NoInitExpr)

#ifndef MX_ENTER_VISIT_MemberExpr
#  define MX_ENTER_VISIT_MemberExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_MemberExpr
#  define MX_EXIT_VISIT_MemberExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(MemberExpr)
  MX_ENTER_VISIT_MemberExpr
  MX_VISIT_BASE(MemberExpr, Expr)
  MX_VISIT_ENTITY(MemberExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(MemberExpr, l_angle_token, getVal37, setVal37, initVal37, LAngleToken, Token, NthStmt, TokenUseSelector::L_ANGLE_TOKEN)
  MX_VISIT_ENTITY(MemberExpr, member_declaration, getVal38, setVal38, initVal38, MemberDeclaration, ValueDecl, NthStmt, DeclUseSelector::MEMBER_DECLARATION)
  MX_VISIT_ENTITY(MemberExpr, member_token, getVal39, setVal39, initVal39, MemberToken, Token, NthStmt, TokenUseSelector::MEMBER_TOKEN)
  MX_VISIT_ENTITY(MemberExpr, operator_token, getVal40, setVal40, initVal40, OperatorToken, Token, NthStmt, TokenUseSelector::OPERATOR_TOKEN)
  MX_VISIT_ENTITY(MemberExpr, r_angle_token, getVal41, setVal41, initVal41, RAngleToken, Token, NthStmt, TokenUseSelector::R_ANGLE_TOKEN)
  MX_VISIT_ENTITY(MemberExpr, template_keyword_token, getVal42, setVal42, initVal42, TemplateKeywordToken, Token, NthStmt, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_BOOL(MemberExpr, had_multiple_candidates, getVal93, setVal93, initVal93, HadMultipleCandidates, bool, NthStmt)
  MX_VISIT_BOOL(MemberExpr, has_explicit_template_arguments, getVal94, setVal94, initVal94, HasExplicitTemplateArguments, bool, NthStmt)
  MX_VISIT_BOOL(MemberExpr, has_qualifier, getVal95, setVal95, initVal95, HasQualifier, bool, NthStmt)
  MX_VISIT_BOOL(MemberExpr, has_template_keyword, getVal96, setVal96, initVal96, HasTemplateKeyword, bool, NthStmt)
  MX_VISIT_BOOL(MemberExpr, is_arrow, getVal97, setVal97, initVal97, IsArrow, bool, NthStmt)
  MX_VISIT_BOOL(MemberExpr, is_implicit_access, getVal99, setVal99, initVal99, IsImplicitAccess, bool, NthStmt)
  MX_VISIT_ENUM(MemberExpr, is_non_odr_use, getVal98, setVal98, initVal98, IsNonOdrUse, NonOdrUseReason, NthStmt)
  MX_EXIT_VISIT_MemberExpr
MX_END_VISIT_STMT(MemberExpr)

#ifndef MX_ENTER_VISIT_MatrixSubscriptExpr
#  define MX_ENTER_VISIT_MatrixSubscriptExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_MatrixSubscriptExpr
#  define MX_EXIT_VISIT_MatrixSubscriptExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(MatrixSubscriptExpr)
  MX_ENTER_VISIT_MatrixSubscriptExpr
  MX_VISIT_BASE(MatrixSubscriptExpr, Expr)
  MX_VISIT_ENTITY(MatrixSubscriptExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(MatrixSubscriptExpr, column_index, getVal37, setVal37, initVal37, ColumnIndex, Expr, NthStmt, StmtUseSelector::COLUMN_INDEX)
  MX_VISIT_ENTITY(MatrixSubscriptExpr, r_bracket_token, getVal38, setVal38, initVal38, RBracketToken, Token, NthStmt, TokenUseSelector::R_BRACKET_TOKEN)
  MX_VISIT_ENTITY(MatrixSubscriptExpr, row_index, getVal39, setVal39, initVal39, RowIndex, Expr, NthStmt, StmtUseSelector::ROW_INDEX)
  MX_VISIT_BOOL(MatrixSubscriptExpr, is_incomplete, getVal93, setVal93, initVal93, IsIncomplete, bool, NthStmt)
  MX_EXIT_VISIT_MatrixSubscriptExpr
MX_END_VISIT_STMT(MatrixSubscriptExpr)

#ifndef MX_ENTER_VISIT_MaterializeTemporaryExpr
#  define MX_ENTER_VISIT_MaterializeTemporaryExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_MaterializeTemporaryExpr
#  define MX_EXIT_VISIT_MaterializeTemporaryExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(MaterializeTemporaryExpr)
  MX_ENTER_VISIT_MaterializeTemporaryExpr
  MX_VISIT_BASE(MaterializeTemporaryExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(MaterializeTemporaryExpr, extending_declaration, getVal36, setVal36, initVal36, ExtendingDeclaration, ValueDecl, NthStmt, DeclUseSelector::EXTENDING_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(MaterializeTemporaryExpr, lifetime_extended_temporary_declaration, getVal37, setVal37, initVal37, LifetimeExtendedTemporaryDeclaration, LifetimeExtendedTemporaryDecl, NthStmt, DeclUseSelector::LIFETIME_EXTENDED_TEMPORARY_DECLARATION)
  MX_VISIT_ENUM(MaterializeTemporaryExpr, storage_duration, getVal98, setVal98, initVal98, StorageDuration, StorageDuration, NthStmt)
  MX_VISIT_ENTITY(MaterializeTemporaryExpr, sub_expression, getVal38, setVal38, initVal38, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_VISIT_BOOL(MaterializeTemporaryExpr, is_bound_to_lvalue_reference, getVal95, setVal95, initVal95, IsBoundToLvalueReference, bool, NthStmt)
  MX_VISIT_BOOL(MaterializeTemporaryExpr, is_usable_in_constant_expressions, getVal96, setVal96, initVal96, IsUsableInConstantExpressions, bool, NthStmt)
  MX_EXIT_VISIT_MaterializeTemporaryExpr
MX_END_VISIT_STMT(MaterializeTemporaryExpr)

#ifndef MX_ENTER_VISIT_MSPropertySubscriptExpr
#  define MX_ENTER_VISIT_MSPropertySubscriptExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_MSPropertySubscriptExpr
#  define MX_EXIT_VISIT_MSPropertySubscriptExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(MSPropertySubscriptExpr)
  MX_ENTER_VISIT_MSPropertySubscriptExpr
  MX_VISIT_BASE(MSPropertySubscriptExpr, Expr)
  MX_VISIT_ENTITY(MSPropertySubscriptExpr, base, getVal36, setVal36, initVal36, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_ENTITY(MSPropertySubscriptExpr, index, getVal37, setVal37, initVal37, Index, Expr, NthStmt, StmtUseSelector::INDEX)
  MX_VISIT_ENTITY(MSPropertySubscriptExpr, r_bracket_token, getVal38, setVal38, initVal38, RBracketToken, Token, NthStmt, TokenUseSelector::R_BRACKET_TOKEN)
  MX_EXIT_VISIT_MSPropertySubscriptExpr
MX_END_VISIT_STMT(MSPropertySubscriptExpr)

#ifndef MX_ENTER_VISIT_MSPropertyRefExpr
#  define MX_ENTER_VISIT_MSPropertyRefExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_MSPropertyRefExpr
#  define MX_EXIT_VISIT_MSPropertyRefExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(MSPropertyRefExpr)
  MX_ENTER_VISIT_MSPropertyRefExpr
  MX_VISIT_BASE(MSPropertyRefExpr, Expr)
  MX_VISIT_ENTITY(MSPropertyRefExpr, base_expression, getVal36, setVal36, initVal36, BaseExpression, Expr, NthStmt, StmtUseSelector::BASE_EXPRESSION)
  MX_VISIT_ENTITY(MSPropertyRefExpr, member_token, getVal37, setVal37, initVal37, MemberToken, Token, NthStmt, TokenUseSelector::MEMBER_TOKEN)
  MX_VISIT_ENTITY(MSPropertyRefExpr, property_declaration, getVal38, setVal38, initVal38, PropertyDeclaration, MSPropertyDecl, NthStmt, DeclUseSelector::PROPERTY_DECLARATION)
  MX_VISIT_BOOL(MSPropertyRefExpr, is_arrow, getVal93, setVal93, initVal93, IsArrow, bool, NthStmt)
  MX_VISIT_BOOL(MSPropertyRefExpr, is_implicit_access, getVal94, setVal94, initVal94, IsImplicitAccess, bool, NthStmt)
  MX_EXIT_VISIT_MSPropertyRefExpr
MX_END_VISIT_STMT(MSPropertyRefExpr)

#ifndef MX_ENTER_VISIT_LambdaExpr
#  define MX_ENTER_VISIT_LambdaExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_LambdaExpr
#  define MX_EXIT_VISIT_LambdaExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(LambdaExpr)
  MX_ENTER_VISIT_LambdaExpr
  MX_VISIT_BASE(LambdaExpr, Expr)
  MX_VISIT_ENTITY(LambdaExpr, body, getVal36, setVal36, initVal36, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(LambdaExpr, call_operator, getVal37, setVal37, initVal37, CallOperator, CXXMethodDecl, NthStmt, DeclUseSelector::CALL_OPERATOR)
  MX_VISIT_ENUM(LambdaExpr, capture_default, getVal98, setVal98, initVal98, CaptureDefault, LambdaCaptureDefault, NthStmt)
  MX_VISIT_ENTITY(LambdaExpr, capture_default_token, getVal38, setVal38, initVal38, CaptureDefaultToken, Token, NthStmt, TokenUseSelector::CAPTURE_DEFAULT_TOKEN)
  MX_VISIT_ENTITY(LambdaExpr, compound_statement_body, getVal39, setVal39, initVal39, CompoundStatementBody, CompoundStmt, NthStmt, StmtUseSelector::COMPOUND_STATEMENT_BODY)
  MX_VISIT_ENTITY_LIST(LambdaExpr, explicit_template_parameters, getVal15, setVal15, initVal15, ExplicitTemplateParameters, NamedDecl, NthStmt)
  MX_VISIT_ENTITY(LambdaExpr, lambda_class, getVal42, setVal42, initVal42, LambdaClass, CXXRecordDecl, NthStmt, DeclUseSelector::LAMBDA_CLASS)
  MX_VISIT_OPTIONAL_PSEUDO(LambdaExpr, template_parameter_list, getVal107, setVal107, initVal107, TemplateParameterList, TemplateParameterList, NthStmt)
  MX_VISIT_OPTIONAL_ENTITY(LambdaExpr, trailing_requires_clause, getVal43, setVal43, initVal43, TrailingRequiresClause, Expr, NthStmt, StmtUseSelector::TRAILING_REQUIRES_CLAUSE)
  MX_VISIT_BOOL(LambdaExpr, has_explicit_parameters, getVal95, setVal95, initVal95, HasExplicitParameters, bool, NthStmt)
  MX_VISIT_BOOL(LambdaExpr, has_explicit_result_type, getVal96, setVal96, initVal96, HasExplicitResultType, bool, NthStmt)
  MX_VISIT_BOOL(LambdaExpr, is_generic_lambda, getVal97, setVal97, initVal97, IsGenericLambda, bool, NthStmt)
  MX_VISIT_BOOL(LambdaExpr, is_mutable, getVal99, setVal99, initVal99, IsMutable, bool, NthStmt)
  MX_EXIT_VISIT_LambdaExpr
MX_END_VISIT_STMT(LambdaExpr)

#ifndef MX_ENTER_VISIT_IntegerLiteral
#  define MX_ENTER_VISIT_IntegerLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_IntegerLiteral
#  define MX_EXIT_VISIT_IntegerLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(IntegerLiteral)
  MX_ENTER_VISIT_IntegerLiteral
  MX_VISIT_BASE(IntegerLiteral, Expr)
  MX_VISIT_ENTITY(IntegerLiteral, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_EXIT_VISIT_IntegerLiteral
MX_END_VISIT_STMT(IntegerLiteral)

#ifndef MX_ENTER_VISIT_InitListExpr
#  define MX_ENTER_VISIT_InitListExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_InitListExpr
#  define MX_EXIT_VISIT_InitListExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(InitListExpr)
  MX_ENTER_VISIT_InitListExpr
  MX_VISIT_BASE(InitListExpr, Expr)
  MX_VISIT_OPTIONAL_ENTITY(InitListExpr, array_filler, getVal36, setVal36, initVal36, ArrayFiller, Expr, NthStmt, StmtUseSelector::ARRAY_FILLER)
  MX_VISIT_OPTIONAL_ENTITY(InitListExpr, initialized_field_in_union, getVal37, setVal37, initVal37, InitializedFieldInUnion, FieldDecl, NthStmt, DeclUseSelector::INITIALIZED_FIELD_IN_UNION)
  MX_VISIT_ENTITY(InitListExpr, l_brace_token, getVal38, setVal38, initVal38, LBraceToken, Token, NthStmt, TokenUseSelector::L_BRACE_TOKEN)
  MX_VISIT_ENTITY(InitListExpr, r_brace_token, getVal39, setVal39, initVal39, RBraceToken, Token, NthStmt, TokenUseSelector::R_BRACE_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(InitListExpr, semantic_form, getVal40, setVal40, initVal40, SemanticForm, InitListExpr, NthStmt, StmtUseSelector::SEMANTIC_FORM)
  MX_VISIT_OPTIONAL_ENTITY(InitListExpr, syntactic_form, getVal41, setVal41, initVal41, SyntacticForm, InitListExpr, NthStmt, StmtUseSelector::SYNTACTIC_FORM)
  MX_VISIT_BOOL(InitListExpr, had_array_range_designator, getVal97, setVal97, initVal97, HadArrayRangeDesignator, bool, NthStmt)
  MX_VISIT_BOOL(InitListExpr, has_array_filler, getVal99, setVal99, initVal99, HasArrayFiller, bool, NthStmt)
  MX_VISIT_ENTITY_LIST(InitListExpr, initializers, getVal15, setVal15, initVal15, Initializers, Expr, NthStmt)
  MX_VISIT_BOOL(InitListExpr, is_explicit, getVal102, setVal102, initVal102, IsExplicit, bool, NthStmt)
  MX_VISIT_BOOL(InitListExpr, is_semantic_form, getVal103, setVal103, initVal103, IsSemanticForm, bool, NthStmt)
  MX_VISIT_BOOL(InitListExpr, is_string_literal_initializer, getVal104, setVal104, initVal104, IsStringLiteralInitializer, bool, NthStmt)
  MX_VISIT_BOOL(InitListExpr, is_syntactic_form, getVal105, setVal105, initVal105, IsSyntacticForm, bool, NthStmt)
  MX_VISIT_OPTIONAL_BOOL(InitListExpr, is_transparent, getVal106, setVal106, initVal106, IsTransparent, bool, NthStmt)
  MX_EXIT_VISIT_InitListExpr
MX_END_VISIT_STMT(InitListExpr)

#ifndef MX_ENTER_VISIT_ImplicitValueInitExpr
#  define MX_ENTER_VISIT_ImplicitValueInitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ImplicitValueInitExpr
#  define MX_EXIT_VISIT_ImplicitValueInitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ImplicitValueInitExpr)
  MX_ENTER_VISIT_ImplicitValueInitExpr
  MX_VISIT_BASE(ImplicitValueInitExpr, Expr)
  MX_EXIT_VISIT_ImplicitValueInitExpr
MX_END_VISIT_STMT(ImplicitValueInitExpr)

#ifndef MX_ENTER_VISIT_ImaginaryLiteral
#  define MX_ENTER_VISIT_ImaginaryLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ImaginaryLiteral
#  define MX_EXIT_VISIT_ImaginaryLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ImaginaryLiteral)
  MX_ENTER_VISIT_ImaginaryLiteral
  MX_VISIT_BASE(ImaginaryLiteral, Expr)
  MX_VISIT_ENTITY(ImaginaryLiteral, sub_expression, getVal36, setVal36, initVal36, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_EXIT_VISIT_ImaginaryLiteral
MX_END_VISIT_STMT(ImaginaryLiteral)

#ifndef MX_ENTER_VISIT_GenericSelectionExpr
#  define MX_ENTER_VISIT_GenericSelectionExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_GenericSelectionExpr
#  define MX_EXIT_VISIT_GenericSelectionExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(GenericSelectionExpr)
  MX_ENTER_VISIT_GenericSelectionExpr
  MX_VISIT_BASE(GenericSelectionExpr, Expr)
  MX_VISIT_ENTITY_LIST(GenericSelectionExpr, association_expressions, getVal15, setVal15, initVal15, AssociationExpressions, Expr, NthStmt)
  MX_VISIT_ENTITY(GenericSelectionExpr, controlling_expression, getVal36, setVal36, initVal36, ControllingExpression, Expr, NthStmt, StmtUseSelector::CONTROLLING_EXPRESSION)
  MX_VISIT_ENTITY(GenericSelectionExpr, default_token, getVal37, setVal37, initVal37, DefaultToken, Token, NthStmt, TokenUseSelector::DEFAULT_TOKEN)
  MX_VISIT_ENTITY(GenericSelectionExpr, generic_token, getVal38, setVal38, initVal38, GenericToken, Token, NthStmt, TokenUseSelector::GENERIC_TOKEN)
  MX_VISIT_ENTITY(GenericSelectionExpr, r_paren_token, getVal39, setVal39, initVal39, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_ENTITY(GenericSelectionExpr, result_expression, getVal40, setVal40, initVal40, ResultExpression, Expr, NthStmt, StmtUseSelector::RESULT_EXPRESSION)
  MX_VISIT_BOOL(GenericSelectionExpr, is_result_dependent, getVal93, setVal93, initVal93, IsResultDependent, bool, NthStmt)
  MX_EXIT_VISIT_GenericSelectionExpr
MX_END_VISIT_STMT(GenericSelectionExpr)

#ifndef MX_ENTER_VISIT_GNUNullExpr
#  define MX_ENTER_VISIT_GNUNullExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_GNUNullExpr
#  define MX_EXIT_VISIT_GNUNullExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(GNUNullExpr)
  MX_ENTER_VISIT_GNUNullExpr
  MX_VISIT_BASE(GNUNullExpr, Expr)
  MX_VISIT_ENTITY(GNUNullExpr, token_token, getVal36, setVal36, initVal36, TokenToken, Token, NthStmt, TokenUseSelector::TOKEN_TOKEN)
  MX_EXIT_VISIT_GNUNullExpr
MX_END_VISIT_STMT(GNUNullExpr)

#ifndef MX_ENTER_VISIT_FunctionParmPackExpr
#  define MX_ENTER_VISIT_FunctionParmPackExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_FunctionParmPackExpr
#  define MX_EXIT_VISIT_FunctionParmPackExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(FunctionParmPackExpr)
  MX_ENTER_VISIT_FunctionParmPackExpr
  MX_VISIT_BASE(FunctionParmPackExpr, Expr)
  MX_VISIT_ENTITY(FunctionParmPackExpr, parameter_pack, getVal36, setVal36, initVal36, ParameterPack, VarDecl, NthStmt, DeclUseSelector::PARAMETER_PACK)
  MX_VISIT_ENTITY(FunctionParmPackExpr, parameter_pack_token, getVal37, setVal37, initVal37, ParameterPackToken, Token, NthStmt, TokenUseSelector::PARAMETER_PACK_TOKEN)
  MX_VISIT_ENTITY_LIST(FunctionParmPackExpr, expansions, getVal15, setVal15, initVal15, Expansions, VarDecl, NthStmt)
  MX_EXIT_VISIT_FunctionParmPackExpr
MX_END_VISIT_STMT(FunctionParmPackExpr)

#ifndef MX_ENTER_VISIT_FullExpr
#  define MX_ENTER_VISIT_FullExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_FullExpr
#  define MX_EXIT_VISIT_FullExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(FullExpr)
  MX_ENTER_VISIT_FullExpr
  MX_VISIT_BASE(FullExpr, Expr)
  MX_VISIT_ENTITY(FullExpr, sub_expression, getVal36, setVal36, initVal36, SubExpression, Expr, NthStmt, StmtUseSelector::SUB_EXPRESSION)
  MX_EXIT_VISIT_FullExpr
MX_END_VISIT_STMT(FullExpr)

#ifndef MX_ENTER_VISIT_ExprWithCleanups
#  define MX_ENTER_VISIT_ExprWithCleanups MX_ENTER_VISIT_FullExpr
#endif
#ifndef MX_EXIT_VISIT_ExprWithCleanups
#  define MX_EXIT_VISIT_ExprWithCleanups MX_EXIT_VISIT_FullExpr
#endif

MX_BEGIN_VISIT_STMT(ExprWithCleanups)
  MX_ENTER_VISIT_ExprWithCleanups
  MX_VISIT_BASE(ExprWithCleanups, FullExpr)
  MX_VISIT_BOOL(ExprWithCleanups, cleanups_have_side_effects, getVal93, setVal93, initVal93, CleanupsHaveSideEffects, bool, NthStmt)
  MX_EXIT_VISIT_ExprWithCleanups
MX_END_VISIT_STMT(ExprWithCleanups)

#ifndef MX_ENTER_VISIT_ConstantExpr
#  define MX_ENTER_VISIT_ConstantExpr MX_ENTER_VISIT_FullExpr
#endif
#ifndef MX_EXIT_VISIT_ConstantExpr
#  define MX_EXIT_VISIT_ConstantExpr MX_EXIT_VISIT_FullExpr
#endif

MX_BEGIN_VISIT_STMT(ConstantExpr)
  MX_ENTER_VISIT_ConstantExpr
  MX_VISIT_BASE(ConstantExpr, FullExpr)
  MX_VISIT_ENUM(ConstantExpr, result_storage_kind, getVal98, setVal98, initVal98, ResultStorageKind, ConstantExprResultStorageKind, NthStmt)
  MX_VISIT_BOOL(ConstantExpr, has_ap_value_result, getVal93, setVal93, initVal93, HasAPValueResult, bool, NthStmt)
  MX_VISIT_BOOL(ConstantExpr, is_immediate_invocation, getVal94, setVal94, initVal94, IsImmediateInvocation, bool, NthStmt)
  MX_EXIT_VISIT_ConstantExpr
MX_END_VISIT_STMT(ConstantExpr)

#ifndef MX_ENTER_VISIT_FloatingLiteral
#  define MX_ENTER_VISIT_FloatingLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_FloatingLiteral
#  define MX_EXIT_VISIT_FloatingLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(FloatingLiteral)
  MX_ENTER_VISIT_FloatingLiteral
  MX_VISIT_BASE(FloatingLiteral, Expr)
  MX_VISIT_ENTITY(FloatingLiteral, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_VISIT_BOOL(FloatingLiteral, is_exact, getVal93, setVal93, initVal93, IsExact, bool, NthStmt)
  MX_EXIT_VISIT_FloatingLiteral
MX_END_VISIT_STMT(FloatingLiteral)

#ifndef MX_ENTER_VISIT_FixedPointLiteral
#  define MX_ENTER_VISIT_FixedPointLiteral MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_FixedPointLiteral
#  define MX_EXIT_VISIT_FixedPointLiteral MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(FixedPointLiteral)
  MX_ENTER_VISIT_FixedPointLiteral
  MX_VISIT_BASE(FixedPointLiteral, Expr)
  MX_VISIT_ENTITY(FixedPointLiteral, token, getVal36, setVal36, initVal36, Token, Token, NthStmt, TokenUseSelector::TOKEN)
  MX_EXIT_VISIT_FixedPointLiteral
MX_END_VISIT_STMT(FixedPointLiteral)

#ifndef MX_ENTER_VISIT_ExtVectorElementExpr
#  define MX_ENTER_VISIT_ExtVectorElementExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ExtVectorElementExpr
#  define MX_EXIT_VISIT_ExtVectorElementExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ExtVectorElementExpr)
  MX_ENTER_VISIT_ExtVectorElementExpr
  MX_VISIT_BASE(ExtVectorElementExpr, Expr)
  MX_VISIT_BOOL(ExtVectorElementExpr, contains_duplicate_elements, getVal93, setVal93, initVal93, ContainsDuplicateElements, bool, NthStmt)
  MX_VISIT_ENTITY(ExtVectorElementExpr, accessor_token, getVal36, setVal36, initVal36, AccessorToken, Token, NthStmt, TokenUseSelector::ACCESSOR_TOKEN)
  MX_VISIT_ENTITY(ExtVectorElementExpr, base, getVal37, setVal37, initVal37, Base, Expr, NthStmt, StmtUseSelector::BASE)
  MX_VISIT_BOOL(ExtVectorElementExpr, is_arrow, getVal94, setVal94, initVal94, IsArrow, bool, NthStmt)
  MX_EXIT_VISIT_ExtVectorElementExpr
MX_END_VISIT_STMT(ExtVectorElementExpr)

#ifndef MX_ENTER_VISIT_ExpressionTraitExpr
#  define MX_ENTER_VISIT_ExpressionTraitExpr MX_ENTER_VISIT_Expr
#endif
#ifndef MX_EXIT_VISIT_ExpressionTraitExpr
#  define MX_EXIT_VISIT_ExpressionTraitExpr MX_EXIT_VISIT_Expr
#endif

MX_BEGIN_VISIT_STMT(ExpressionTraitExpr)
  MX_ENTER_VISIT_ExpressionTraitExpr
  MX_VISIT_BASE(ExpressionTraitExpr, Expr)
  MX_VISIT_ENTITY(ExpressionTraitExpr, queried_expression, getVal36, setVal36, initVal36, QueriedExpression, Expr, NthStmt, StmtUseSelector::QUERIED_EXPRESSION)
  MX_VISIT_ENUM(ExpressionTraitExpr, trait, getVal98, setVal98, initVal98, Trait, ExpressionTrait, NthStmt)
  MX_VISIT_BOOL(ExpressionTraitExpr, value, getVal93, setVal93, initVal93, Value, bool, NthStmt)
  MX_EXIT_VISIT_ExpressionTraitExpr
MX_END_VISIT_STMT(ExpressionTraitExpr)

#ifndef MX_ENTER_VISIT_AttributedStmt
#  define MX_ENTER_VISIT_AttributedStmt MX_ENTER_VISIT_ValueStmt
#endif
#ifndef MX_EXIT_VISIT_AttributedStmt
#  define MX_EXIT_VISIT_AttributedStmt MX_EXIT_VISIT_ValueStmt
#endif

MX_BEGIN_VISIT_STMT(AttributedStmt)
  MX_ENTER_VISIT_AttributedStmt
  MX_VISIT_BASE(AttributedStmt, ValueStmt)
  MX_VISIT_ENTITY(AttributedStmt, attribute_token, getVal9, setVal9, initVal9, AttributeToken, Token, NthStmt, TokenUseSelector::ATTRIBUTE_TOKEN)
  MX_VISIT_ENTITY(AttributedStmt, sub_statement, getVal10, setVal10, initVal10, SubStatement, Stmt, NthStmt, StmtUseSelector::SUB_STATEMENT)
  MX_EXIT_VISIT_AttributedStmt
MX_END_VISIT_STMT(AttributedStmt)

#ifndef MX_ENTER_VISIT_SwitchStmt
#  define MX_ENTER_VISIT_SwitchStmt MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_SwitchStmt
#  define MX_EXIT_VISIT_SwitchStmt MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_STMT(SwitchStmt)
  MX_ENTER_VISIT_SwitchStmt
  MX_VISIT_BASE(SwitchStmt, Stmt)
  MX_VISIT_ENTITY(SwitchStmt, body, getVal8, setVal8, initVal8, Body, Stmt, NthStmt, StmtUseSelector::BODY)
  MX_VISIT_ENTITY(SwitchStmt, condition, getVal9, setVal9, initVal9, Condition, Expr, NthStmt, StmtUseSelector::CONDITION)
  MX_VISIT_OPTIONAL_ENTITY(SwitchStmt, condition_variable, getVal10, setVal10, initVal10, ConditionVariable, VarDecl, NthStmt, DeclUseSelector::CONDITION_VARIABLE)
  MX_VISIT_OPTIONAL_ENTITY(SwitchStmt, condition_variable_declaration_statement, getVal12, setVal12, initVal12, ConditionVariableDeclarationStatement, DeclStmt, NthStmt, StmtUseSelector::CONDITION_VARIABLE_DECLARATION_STATEMENT)
  MX_VISIT_OPTIONAL_ENTITY(SwitchStmt, initializer, getVal13, setVal13, initVal13, Initializer, Stmt, NthStmt, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENTITY(SwitchStmt, l_paren_token, getVal16, setVal16, initVal16, LParenToken, Token, NthStmt, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENTITY(SwitchStmt, r_paren_token, getVal17, setVal17, initVal17, RParenToken, Token, NthStmt, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(SwitchStmt, first_switch_case, getVal18, setVal18, initVal18, FirstSwitchCase, SwitchCase, NthStmt, StmtUseSelector::FIRST_SWITCH_CASE)
  MX_VISIT_ENTITY(SwitchStmt, switch_token, getVal25, setVal25, initVal25, SwitchToken, Token, NthStmt, TokenUseSelector::SWITCH_TOKEN)
  MX_VISIT_BOOL(SwitchStmt, has_initializer_storage, getVal56, setVal56, initVal56, HasInitializerStorage, bool, NthStmt)
  MX_VISIT_BOOL(SwitchStmt, has_variable_storage, getVal57, setVal57, initVal57, HasVariableStorage, bool, NthStmt)
  MX_VISIT_BOOL(SwitchStmt, is_all_enum_cases_covered, getVal58, setVal58, initVal58, IsAllEnumCasesCovered, bool, NthStmt)
  MX_EXIT_VISIT_SwitchStmt
MX_END_VISIT_STMT(SwitchStmt)

#ifndef MX_ENTER_VISIT_SwitchCase
#  define MX_ENTER_VISIT_SwitchCase MX_ENTER_VISIT_Stmt
#endif
#ifndef MX_EXIT_VISIT_SwitchCase
#  define MX_EXIT_VISIT_SwitchCase MX_EXIT_VISIT_Stmt
#endif

MX_BEGIN_VISIT_ABSTRACT_STMT(SwitchCase)
  MX_ENTER_VISIT_SwitchCase
  MX_VISIT_BASE(SwitchCase, Stmt)
  MX_VISIT_ENTITY(SwitchCase, colon_token, getVal8, setVal8, initVal8, ColonToken, Token, NthStmt, TokenUseSelector::COLON_TOKEN)
  MX_VISIT_ENTITY(SwitchCase, keyword_token, getVal9, setVal9, initVal9, KeywordToken, Token, NthStmt, TokenUseSelector::KEYWORD_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(SwitchCase, next_switch_case, getVal10, setVal10, initVal10, NextSwitchCase, SwitchCase, NthStmt, StmtUseSelector::NEXT_SWITCH_CASE)
  MX_VISIT_ENTITY(SwitchCase, sub_statement, getVal12, setVal12, initVal12, SubStatement, Stmt, NthStmt, StmtUseSelector::SUB_STATEMENT)
  MX_EXIT_VISIT_SwitchCase
MX_END_VISIT_STMT(SwitchCase)

#ifndef MX_ENTER_VISIT_DefaultStmt
#  define MX_ENTER_VISIT_DefaultStmt MX_ENTER_VISIT_SwitchCase
#endif
#ifndef MX_EXIT_VISIT_DefaultStmt
#  define MX_EXIT_VISIT_DefaultStmt MX_EXIT_VISIT_SwitchCase
#endif

MX_BEGIN_VISIT_STMT(DefaultStmt)
  MX_ENTER_VISIT_DefaultStmt
  MX_VISIT_BASE(DefaultStmt, SwitchCase)
  MX_VISIT_ENTITY(DefaultStmt, default_token, getVal13, setVal13, initVal13, DefaultToken, Token, NthStmt, TokenUseSelector::DEFAULT_TOKEN)
  MX_EXIT_VISIT_DefaultStmt
MX_END_VISIT_STMT(DefaultStmt)

#ifndef MX_ENTER_VISIT_CaseStmt
#  define MX_ENTER_VISIT_CaseStmt MX_ENTER_VISIT_SwitchCase
#endif
#ifndef MX_EXIT_VISIT_CaseStmt
#  define MX_EXIT_VISIT_CaseStmt MX_EXIT_VISIT_SwitchCase
#endif

MX_BEGIN_VISIT_STMT(CaseStmt)
  MX_ENTER_VISIT_CaseStmt
  MX_VISIT_BASE(CaseStmt, SwitchCase)
  MX_VISIT_BOOL(CaseStmt, case_statement_is_gnu_range, getVal14, setVal14, initVal14, CaseStatementIsGNURange, bool, NthStmt)
  MX_VISIT_ENTITY(CaseStmt, case_token, getVal13, setVal13, initVal13, CaseToken, Token, NthStmt, TokenUseSelector::CASE_TOKEN)
  MX_VISIT_ENTITY(CaseStmt, ellipsis_token, getVal16, setVal16, initVal16, EllipsisToken, Token, NthStmt, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_ENTITY(CaseStmt, lhs, getVal17, setVal17, initVal17, LHS, Expr, NthStmt, StmtUseSelector::LHS)
  MX_VISIT_OPTIONAL_ENTITY(CaseStmt, rhs, getVal18, setVal18, initVal18, RHS, Expr, NthStmt, StmtUseSelector::RHS)
  MX_EXIT_VISIT_CaseStmt
MX_END_VISIT_STMT(CaseStmt)

#ifndef MX_ENTER_VISIT_Decl
#  define MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_Decl
#  define MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_ABSTRACT_DECL(Decl)
  MX_ENTER_VISIT_Decl
  MX_VISIT_DECL_LINK(Decl, parent_declaration, getVal0, setVal0, initVal0)
  MX_VISIT_STMT_LINK(Decl, parent_statement, getVal1, setVal1, initVal1)
  MX_VISIT_BOOL(Decl, is_definition, getVal2, setVal2, initVal2, IsThisDeclarationADefinition, bool, NthDecl)
  MX_VISIT_ENUM(Decl, access, getVal3, setVal3, initVal3, Access, AccessSpecifier, NthDecl)
  MX_VISIT_ENUM(Decl, availability, getVal4, setVal4, initVal4, Availability, AvailabilityResult, NthDecl)
  MX_VISIT_OPTIONAL_PSEUDO(Decl, described_template_parameters, getVal5, setVal5, initVal5, DescribedTemplateParameters, TemplateParameterList, NthDecl)
  MX_VISIT_ENUM(Decl, friend_object_kind, getVal7, setVal7, initVal7, FriendObjectKind, DeclFriendObjectKind, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(Decl, function_type, getVal8, setVal8, initVal8, FunctionType, FunctionType, NthDecl, TypeUseSelector::FUNCTION_TYPE)
  MX_VISIT_ENUM(Decl, module_ownership_kind, getVal10, setVal10, initVal10, ModuleOwnershipKind, DeclModuleOwnershipKind, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(Decl, non_closure_context, getVal11, setVal11, initVal11, NonClosureContext, Decl, NthDecl, DeclUseSelector::NON_CLOSURE_CONTEXT)
  MX_VISIT_BOOL(Decl, has_attributes, getVal13, setVal13, initVal13, HasAttributes, bool, NthDecl)
  MX_VISIT_BOOL(Decl, has_defining_attribute, getVal14, setVal14, initVal14, HasDefiningAttribute, bool, NthDecl)
  MX_VISIT_BOOL(Decl, has_owning_module, getVal15, setVal15, initVal15, HasOwningModule, bool, NthDecl)
  MX_VISIT_BOOL(Decl, has_tag_identifier_namespace, getVal16, setVal16, initVal16, HasTagIdentifierNamespace, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_defined_outside_function_or_method, getVal17, setVal17, initVal17, IsDefinedOutsideFunctionOrMethod, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_deprecated, getVal18, setVal18, initVal18, IsDeprecated, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_function_or_function_template, getVal19, setVal19, initVal19, IsFunctionOrFunctionTemplate, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_implicit, getVal20, setVal20, initVal20, IsImplicit, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_in_anonymous_namespace, getVal21, setVal21, initVal21, IsInAnonymousNamespace, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_in_export_declaration_context, getVal22, setVal22, initVal22, IsInExportDeclarationContext, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_in_local_scope_for_instantiation, getVal23, setVal23, initVal23, IsInLocalScopeForInstantiation, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_in_std_namespace, getVal24, setVal24, initVal24, IsInStdNamespace, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_invalid_declaration, getVal25, setVal25, initVal25, IsInvalidDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_module_private, getVal26, setVal26, initVal26, IsModulePrivate, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_out_of_line, getVal27, setVal27, initVal27, IsOutOfLine, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_parameter_pack, getVal28, setVal28, initVal28, IsParameterPack, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_template_declaration, getVal29, setVal29, initVal29, IsTemplateDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_template_parameter, getVal30, setVal30, initVal30, IsTemplateParameter, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_template_parameter_pack, getVal31, setVal31, initVal31, IsTemplateParameterPack, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_templated, getVal32, setVal32, initVal32, IsTemplated, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_top_level_declaration_in_obj_c_container, getVal33, setVal33, initVal33, IsTopLevelDeclarationInObjCContainer, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_unavailable, getVal34, setVal34, initVal34, IsUnavailable, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_unconditionally_visible, getVal35, setVal35, initVal35, IsUnconditionallyVisible, bool, NthDecl)
  MX_VISIT_BOOL(Decl, is_weak_imported, getVal36, setVal36, initVal36, IsWeakImported, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(Decl, redeclarations_visible_in_translation_unit, getVal37, setVal37, initVal37, Redeclarations, Decl, NthDecl)
  MX_VISIT_ENUM(Decl, kind, getVal38, setVal38, initVal38, Kind, DeclKind, NthDecl)
  MX_VISIT_ENTITY(Decl, token, getVal39, setVal39, initVal39, Token, Token, NthDecl, TokenUseSelector::TOKEN)
  MX_EXIT_VISIT_Decl
MX_END_VISIT_DECL(Decl)

#ifndef MX_ENTER_VISIT_ClassScopeFunctionSpecializationDecl
#  define MX_ENTER_VISIT_ClassScopeFunctionSpecializationDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_ClassScopeFunctionSpecializationDecl
#  define MX_EXIT_VISIT_ClassScopeFunctionSpecializationDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(ClassScopeFunctionSpecializationDecl)
  MX_ENTER_VISIT_ClassScopeFunctionSpecializationDecl
  MX_VISIT_BASE(ClassScopeFunctionSpecializationDecl, Decl)
  MX_VISIT_ENTITY(ClassScopeFunctionSpecializationDecl, specialization, getVal42, setVal42, initVal42, Specialization, CXXMethodDecl, NthDecl, DeclUseSelector::SPECIALIZATION)
  MX_VISIT_BOOL(ClassScopeFunctionSpecializationDecl, has_explicit_template_arguments, getVal43, setVal43, initVal43, HasExplicitTemplateArguments, bool, NthDecl)
  MX_EXIT_VISIT_ClassScopeFunctionSpecializationDecl
MX_END_VISIT_DECL(ClassScopeFunctionSpecializationDecl)

#ifndef MX_ENTER_VISIT_CapturedDecl
#  define MX_ENTER_VISIT_CapturedDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_CapturedDecl
#  define MX_EXIT_VISIT_CapturedDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(CapturedDecl)
  MX_ENTER_VISIT_CapturedDecl
  MX_VISIT_BASE(CapturedDecl, Decl)
  MX_VISIT_ENTITY(CapturedDecl, context_parameter, getVal42, setVal42, initVal42, ContextParameter, ImplicitParamDecl, NthDecl, DeclUseSelector::CONTEXT_PARAMETER)
  MX_VISIT_BOOL(CapturedDecl, is_nothrow, getVal43, setVal43, initVal43, IsNothrow, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(CapturedDecl, parameters, getVal44, setVal44, initVal44, Parameters, ImplicitParamDecl, NthDecl)
  MX_VISIT_DECL_CONTEXT(CapturedDecl, declarations_in_context, getVal45, setVal45, initVal45, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_CapturedDecl
MX_END_VISIT_DECL(CapturedDecl)

#ifndef MX_ENTER_VISIT_BlockDecl
#  define MX_ENTER_VISIT_BlockDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_BlockDecl
#  define MX_EXIT_VISIT_BlockDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(BlockDecl)
  MX_ENTER_VISIT_BlockDecl
  MX_VISIT_BASE(BlockDecl, Decl)
  MX_VISIT_BOOL(BlockDecl, block_missing_return_type, getVal43, setVal43, initVal43, BlockMissingReturnType, bool, NthDecl)
  MX_VISIT_BOOL(BlockDecl, can_avoid_copy_to_heap, getVal46, setVal46, initVal46, CanAvoidCopyToHeap, bool, NthDecl)
  MX_VISIT_BOOL(BlockDecl, captures_cxx_this, getVal47, setVal47, initVal47, CapturesCXXThis, bool, NthDecl)
  MX_VISIT_BOOL(BlockDecl, does_not_escape, getVal48, setVal48, initVal48, DoesNotEscape, bool, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(BlockDecl, block_mangling_context_declaration, getVal42, setVal42, initVal42, BlockManglingContextDeclaration, Decl, NthDecl, DeclUseSelector::BLOCK_MANGLING_CONTEXT_DECLARATION)
  MX_VISIT_ENTITY(BlockDecl, caret_token, getVal50, setVal50, initVal50, CaretToken, Token, NthDecl, TokenUseSelector::CARET_TOKEN)
  MX_VISIT_ENTITY(BlockDecl, compound_body, getVal51, setVal51, initVal51, CompoundBody, CompoundStmt, NthDecl, StmtUseSelector::COMPOUND_BODY)
  MX_VISIT_ENTITY(BlockDecl, signature_as_written, getVal52, setVal52, initVal52, SignatureAsWritten, Type, NthDecl, TypeUseSelector::SIGNATURE_AS_WRITTEN)
  MX_VISIT_BOOL(BlockDecl, has_captures, getVal53, setVal53, initVal53, HasCaptures, bool, NthDecl)
  MX_VISIT_BOOL(BlockDecl, is_conversion_from_lambda, getVal54, setVal54, initVal54, IsConversionFromLambda, bool, NthDecl)
  MX_VISIT_BOOL(BlockDecl, is_variadic, getVal55, setVal55, initVal55, IsVariadic, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(BlockDecl, parameters, getVal44, setVal44, initVal44, Parameters, ParmVarDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(BlockDecl, parameter_declarations, getVal45, setVal45, initVal45, ParameterDeclarations, ParmVarDecl, NthDecl)
  MX_VISIT_DECL_CONTEXT(BlockDecl, declarations_in_context, getVal56, setVal56, initVal56, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_BlockDecl
MX_END_VISIT_DECL(BlockDecl)

#ifndef MX_ENTER_VISIT_AccessSpecDecl
#  define MX_ENTER_VISIT_AccessSpecDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_AccessSpecDecl
#  define MX_EXIT_VISIT_AccessSpecDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(AccessSpecDecl)
  MX_ENTER_VISIT_AccessSpecDecl
  MX_VISIT_BASE(AccessSpecDecl, Decl)
  MX_VISIT_ENTITY(AccessSpecDecl, access_specifier_token, getVal42, setVal42, initVal42, AccessSpecifierToken, Token, NthDecl, TokenUseSelector::ACCESS_SPECIFIER_TOKEN)
  MX_VISIT_ENTITY(AccessSpecDecl, colon_token, getVal50, setVal50, initVal50, ColonToken, Token, NthDecl, TokenUseSelector::COLON_TOKEN)
  MX_EXIT_VISIT_AccessSpecDecl
MX_END_VISIT_DECL(AccessSpecDecl)

#ifndef MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl
#  define MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl
#  define MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_ABSTRACT_DECL(OMPDeclarativeDirectiveDecl)
  MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl
  MX_VISIT_BASE(OMPDeclarativeDirectiveDecl, Decl)
  MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl
MX_END_VISIT_DECL(OMPDeclarativeDirectiveDecl)

#ifndef MX_ENTER_VISIT_OMPThreadPrivateDecl
#  define MX_ENTER_VISIT_OMPThreadPrivateDecl MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl
#endif
#ifndef MX_EXIT_VISIT_OMPThreadPrivateDecl
#  define MX_EXIT_VISIT_OMPThreadPrivateDecl MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl
#endif

MX_BEGIN_VISIT_DECL(OMPThreadPrivateDecl)
  MX_ENTER_VISIT_OMPThreadPrivateDecl
  MX_VISIT_BASE(OMPThreadPrivateDecl, OMPDeclarativeDirectiveDecl)
  MX_VISIT_ENTITY_LIST(OMPThreadPrivateDecl, varlists, getVal44, setVal44, initVal44, Varlists, Expr, NthDecl)
  MX_EXIT_VISIT_OMPThreadPrivateDecl
MX_END_VISIT_DECL(OMPThreadPrivateDecl)

#ifndef MX_ENTER_VISIT_OMPRequiresDecl
#  define MX_ENTER_VISIT_OMPRequiresDecl MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl
#endif
#ifndef MX_EXIT_VISIT_OMPRequiresDecl
#  define MX_EXIT_VISIT_OMPRequiresDecl MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl
#endif

MX_BEGIN_VISIT_DECL(OMPRequiresDecl)
  MX_ENTER_VISIT_OMPRequiresDecl
  MX_VISIT_BASE(OMPRequiresDecl, OMPDeclarativeDirectiveDecl)
  MX_EXIT_VISIT_OMPRequiresDecl
MX_END_VISIT_DECL(OMPRequiresDecl)

#ifndef MX_ENTER_VISIT_OMPAllocateDecl
#  define MX_ENTER_VISIT_OMPAllocateDecl MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl
#endif
#ifndef MX_EXIT_VISIT_OMPAllocateDecl
#  define MX_EXIT_VISIT_OMPAllocateDecl MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl
#endif

MX_BEGIN_VISIT_DECL(OMPAllocateDecl)
  MX_ENTER_VISIT_OMPAllocateDecl
  MX_VISIT_BASE(OMPAllocateDecl, OMPDeclarativeDirectiveDecl)
  MX_VISIT_ENTITY_LIST(OMPAllocateDecl, varlists, getVal44, setVal44, initVal44, Varlists, Expr, NthDecl)
  MX_EXIT_VISIT_OMPAllocateDecl
MX_END_VISIT_DECL(OMPAllocateDecl)

#ifndef MX_ENTER_VISIT_TranslationUnitDecl
#  define MX_ENTER_VISIT_TranslationUnitDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_TranslationUnitDecl
#  define MX_EXIT_VISIT_TranslationUnitDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(TranslationUnitDecl)
  MX_ENTER_VISIT_TranslationUnitDecl
  MX_VISIT_DECL_CONTEXT(TranslationUnitDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_TranslationUnitDecl
MX_END_VISIT_DECL(TranslationUnitDecl)

#ifndef MX_ENTER_VISIT_StaticAssertDecl
#  define MX_ENTER_VISIT_StaticAssertDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_StaticAssertDecl
#  define MX_EXIT_VISIT_StaticAssertDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(StaticAssertDecl)
  MX_ENTER_VISIT_StaticAssertDecl
  MX_VISIT_BASE(StaticAssertDecl, Decl)
  MX_VISIT_ENTITY(StaticAssertDecl, assert_expression, getVal42, setVal42, initVal42, AssertExpression, Expr, NthDecl, StmtUseSelector::ASSERT_EXPRESSION)
  MX_VISIT_ENTITY(StaticAssertDecl, message, getVal50, setVal50, initVal50, Message, StringLiteral, NthDecl, StmtUseSelector::MESSAGE)
  MX_VISIT_ENTITY(StaticAssertDecl, r_paren_token, getVal51, setVal51, initVal51, RParenToken, Token, NthDecl, TokenUseSelector::R_PAREN_TOKEN)
  MX_VISIT_BOOL(StaticAssertDecl, is_failed, getVal43, setVal43, initVal43, IsFailed, bool, NthDecl)
  MX_EXIT_VISIT_StaticAssertDecl
MX_END_VISIT_DECL(StaticAssertDecl)

#ifndef MX_ENTER_VISIT_RequiresExprBodyDecl
#  define MX_ENTER_VISIT_RequiresExprBodyDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_RequiresExprBodyDecl
#  define MX_EXIT_VISIT_RequiresExprBodyDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(RequiresExprBodyDecl)
  MX_ENTER_VISIT_RequiresExprBodyDecl
  MX_VISIT_BASE(RequiresExprBodyDecl, Decl)
  MX_VISIT_DECL_CONTEXT(RequiresExprBodyDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_RequiresExprBodyDecl
MX_END_VISIT_DECL(RequiresExprBodyDecl)

#ifndef MX_ENTER_VISIT_PragmaDetectMismatchDecl
#  define MX_ENTER_VISIT_PragmaDetectMismatchDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_PragmaDetectMismatchDecl
#  define MX_EXIT_VISIT_PragmaDetectMismatchDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(PragmaDetectMismatchDecl)
  MX_ENTER_VISIT_PragmaDetectMismatchDecl
  MX_VISIT_BASE(PragmaDetectMismatchDecl, Decl)
  MX_VISIT_TEXT(PragmaDetectMismatchDecl, name, getVal57, setVal57, initVal57, Name, basic_string_view, NthDecl)
  MX_VISIT_TEXT(PragmaDetectMismatchDecl, value, getVal58, setVal58, initVal58, Value, basic_string_view, NthDecl)
  MX_EXIT_VISIT_PragmaDetectMismatchDecl
MX_END_VISIT_DECL(PragmaDetectMismatchDecl)

#ifndef MX_ENTER_VISIT_PragmaCommentDecl
#  define MX_ENTER_VISIT_PragmaCommentDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_PragmaCommentDecl
#  define MX_EXIT_VISIT_PragmaCommentDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(PragmaCommentDecl)
  MX_ENTER_VISIT_PragmaCommentDecl
  MX_VISIT_BASE(PragmaCommentDecl, Decl)
  MX_VISIT_TEXT(PragmaCommentDecl, argument, getVal57, setVal57, initVal57, Argument, basic_string_view, NthDecl)
  MX_VISIT_ENUM(PragmaCommentDecl, comment_kind, getVal59, setVal59, initVal59, CommentKind, PragmaMSCommentKind, NthDecl)
  MX_EXIT_VISIT_PragmaCommentDecl
MX_END_VISIT_DECL(PragmaCommentDecl)

#ifndef MX_ENTER_VISIT_ObjCPropertyImplDecl
#  define MX_ENTER_VISIT_ObjCPropertyImplDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_ObjCPropertyImplDecl
#  define MX_EXIT_VISIT_ObjCPropertyImplDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(ObjCPropertyImplDecl)
  MX_ENTER_VISIT_ObjCPropertyImplDecl
  MX_VISIT_BASE(ObjCPropertyImplDecl, Decl)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, getter_cxx_constructor, getVal42, setVal42, initVal42, GetterCXXConstructor, Expr, NthDecl, StmtUseSelector::GETTER_CXX_CONSTRUCTOR)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, getter_method_declaration, getVal50, setVal50, initVal50, GetterMethodDeclaration, ObjCMethodDecl, NthDecl, DeclUseSelector::GETTER_METHOD_DECLARATION)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, property_declaration, getVal51, setVal51, initVal51, PropertyDeclaration, ObjCPropertyDecl, NthDecl, DeclUseSelector::PROPERTY_DECLARATION)
  MX_VISIT_ENUM(ObjCPropertyImplDecl, property_implementation, getVal59, setVal59, initVal59, PropertyImplementation, ObjCPropertyImplDeclKind, NthDecl)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, property_instance_variable_declaration, getVal52, setVal52, initVal52, PropertyInstanceVariableDeclaration, ObjCIvarDecl, NthDecl, DeclUseSelector::PROPERTY_INSTANCE_VARIABLE_DECLARATION)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, property_instance_variable_declaration_token, getVal60, setVal60, initVal60, PropertyInstanceVariableDeclarationToken, Token, NthDecl, TokenUseSelector::PROPERTY_INSTANCE_VARIABLE_DECLARATION_TOKEN)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, setter_cxx_assignment, getVal61, setVal61, initVal61, SetterCXXAssignment, Expr, NthDecl, StmtUseSelector::SETTER_CXX_ASSIGNMENT)
  MX_VISIT_ENTITY(ObjCPropertyImplDecl, setter_method_declaration, getVal62, setVal62, initVal62, SetterMethodDeclaration, ObjCMethodDecl, NthDecl, DeclUseSelector::SETTER_METHOD_DECLARATION)
  MX_VISIT_BOOL(ObjCPropertyImplDecl, is_instance_variable_name_specified, getVal43, setVal43, initVal43, IsInstanceVariableNameSpecified, bool, NthDecl)
  MX_EXIT_VISIT_ObjCPropertyImplDecl
MX_END_VISIT_DECL(ObjCPropertyImplDecl)

#ifndef MX_ENTER_VISIT_NamedDecl
#  define MX_ENTER_VISIT_NamedDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_NamedDecl
#  define MX_EXIT_VISIT_NamedDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(NamedDecl)
  MX_ENTER_VISIT_NamedDecl
  MX_VISIT_BASE(NamedDecl, Decl)
  MX_VISIT_ENUM(NamedDecl, formal_linkage, getVal59, setVal59, initVal59, FormalLinkage, Linkage, NthDecl)
  MX_VISIT_TEXT(NamedDecl, name, getVal57, setVal57, initVal57, Name, basic_string, NthDecl)
  MX_VISIT_OPTIONAL_ENUM(NamedDecl, obj_cf_string_formatting_family, getVal63, setVal63, initVal63, ObjCFStringFormattingFamily, ObjCStringFormatFamily, NthDecl)
  MX_VISIT_TEXT(NamedDecl, qualified_name_as_string, getVal58, setVal58, initVal58, QualifiedNameAsString, basic_string, NthDecl)
  MX_VISIT_ENTITY(NamedDecl, underlying_declaration, getVal42, setVal42, initVal42, UnderlyingDeclaration, NamedDecl, NthDecl, DeclUseSelector::UNDERLYING_DECLARATION)
  MX_VISIT_ENUM(NamedDecl, visibility, getVal64, setVal64, initVal64, Visibility, Visibility, NthDecl)
  MX_VISIT_BOOL(NamedDecl, has_external_formal_linkage, getVal46, setVal46, initVal46, HasExternalFormalLinkage, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, has_linkage, getVal47, setVal47, initVal47, HasLinkage, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, has_linkage_been_computed, getVal48, setVal48, initVal48, HasLinkageBeenComputed, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, is_cxx_class_member, getVal49, setVal49, initVal49, IsCXXClassMember, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, is_cxx_instance_member, getVal53, setVal53, initVal53, IsCXXInstanceMember, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, is_externally_declarable, getVal54, setVal54, initVal54, IsExternallyDeclarable, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, is_externally_visible, getVal55, setVal55, initVal55, IsExternallyVisible, bool, NthDecl)
  MX_VISIT_BOOL(NamedDecl, is_linkage_valid, getVal65, setVal65, initVal65, IsLinkageValid, bool, NthDecl)
  MX_EXIT_VISIT_NamedDecl
MX_END_VISIT_DECL(NamedDecl)

#ifndef MX_ENTER_VISIT_LabelDecl
#  define MX_ENTER_VISIT_LabelDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_LabelDecl
#  define MX_EXIT_VISIT_LabelDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(LabelDecl)
  MX_ENTER_VISIT_LabelDecl
  MX_VISIT_BASE(LabelDecl, NamedDecl)
  MX_VISIT_TEXT(LabelDecl, ms_assembly_label, getVal66, setVal66, initVal66, MSAssemblyLabel, basic_string_view, NthDecl)
  MX_VISIT_ENTITY(LabelDecl, statement, getVal50, setVal50, initVal50, Statement, LabelStmt, NthDecl, StmtUseSelector::STATEMENT)
  MX_VISIT_BOOL(LabelDecl, is_gnu_local, getVal67, setVal67, initVal67, IsGnuLocal, bool, NthDecl)
  MX_VISIT_BOOL(LabelDecl, is_ms_assembly_label, getVal68, setVal68, initVal68, IsMSAssemblyLabel, bool, NthDecl)
  MX_VISIT_BOOL(LabelDecl, is_resolved_ms_assembly_label, getVal69, setVal69, initVal69, IsResolvedMSAssemblyLabel, bool, NthDecl)
  MX_EXIT_VISIT_LabelDecl
MX_END_VISIT_DECL(LabelDecl)

#ifndef MX_ENTER_VISIT_BaseUsingDecl
#  define MX_ENTER_VISIT_BaseUsingDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_BaseUsingDecl
#  define MX_EXIT_VISIT_BaseUsingDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(BaseUsingDecl)
  MX_ENTER_VISIT_BaseUsingDecl
  MX_VISIT_BASE(BaseUsingDecl, NamedDecl)
  MX_VISIT_ENTITY_LIST(BaseUsingDecl, shadows, getVal44, setVal44, initVal44, Shadows, UsingShadowDecl, NthDecl)
  MX_EXIT_VISIT_BaseUsingDecl
MX_END_VISIT_DECL(BaseUsingDecl)

#ifndef MX_ENTER_VISIT_UsingEnumDecl
#  define MX_ENTER_VISIT_UsingEnumDecl MX_ENTER_VISIT_BaseUsingDecl
#endif
#ifndef MX_EXIT_VISIT_UsingEnumDecl
#  define MX_EXIT_VISIT_UsingEnumDecl MX_EXIT_VISIT_BaseUsingDecl
#endif

MX_BEGIN_VISIT_DECL(UsingEnumDecl)
  MX_ENTER_VISIT_UsingEnumDecl
  MX_VISIT_BASE(UsingEnumDecl, BaseUsingDecl)
  MX_VISIT_ENTITY(UsingEnumDecl, enum_declaration, getVal50, setVal50, initVal50, EnumDeclaration, EnumDecl, NthDecl, DeclUseSelector::ENUM_DECLARATION)
  MX_VISIT_ENTITY(UsingEnumDecl, enum_token, getVal51, setVal51, initVal51, EnumToken, Token, NthDecl, TokenUseSelector::ENUM_TOKEN)
  MX_VISIT_ENTITY(UsingEnumDecl, using_token, getVal52, setVal52, initVal52, UsingToken, Token, NthDecl, TokenUseSelector::USING_TOKEN)
  MX_EXIT_VISIT_UsingEnumDecl
MX_END_VISIT_DECL(UsingEnumDecl)

#ifndef MX_ENTER_VISIT_UsingDecl
#  define MX_ENTER_VISIT_UsingDecl MX_ENTER_VISIT_BaseUsingDecl
#endif
#ifndef MX_EXIT_VISIT_UsingDecl
#  define MX_EXIT_VISIT_UsingDecl MX_EXIT_VISIT_BaseUsingDecl
#endif

MX_BEGIN_VISIT_DECL(UsingDecl)
  MX_ENTER_VISIT_UsingDecl
  MX_VISIT_BASE(UsingDecl, BaseUsingDecl)
  MX_VISIT_ENTITY(UsingDecl, using_token, getVal50, setVal50, initVal50, UsingToken, Token, NthDecl, TokenUseSelector::USING_TOKEN)
  MX_VISIT_BOOL(UsingDecl, has_typename, getVal67, setVal67, initVal67, HasTypename, bool, NthDecl)
  MX_VISIT_BOOL(UsingDecl, is_access_declaration, getVal68, setVal68, initVal68, IsAccessDeclaration, bool, NthDecl)
  MX_EXIT_VISIT_UsingDecl
MX_END_VISIT_DECL(UsingDecl)

#ifndef MX_ENTER_VISIT_ValueDecl
#  define MX_ENTER_VISIT_ValueDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_ValueDecl
#  define MX_EXIT_VISIT_ValueDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(ValueDecl)
  MX_ENTER_VISIT_ValueDecl
  MX_VISIT_BASE(ValueDecl, NamedDecl)
  MX_VISIT_ENTITY(ValueDecl, type, getVal50, setVal50, initVal50, Type, Type, NthDecl, TypeUseSelector::TYPE)
  MX_VISIT_BOOL(ValueDecl, is_weak, getVal67, setVal67, initVal67, IsWeak, bool, NthDecl)
  MX_EXIT_VISIT_ValueDecl
MX_END_VISIT_DECL(ValueDecl)

#ifndef MX_ENTER_VISIT_UnresolvedUsingValueDecl
#  define MX_ENTER_VISIT_UnresolvedUsingValueDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_UnresolvedUsingValueDecl
#  define MX_EXIT_VISIT_UnresolvedUsingValueDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(UnresolvedUsingValueDecl)
  MX_ENTER_VISIT_UnresolvedUsingValueDecl
  MX_VISIT_BASE(UnresolvedUsingValueDecl, ValueDecl)
  MX_VISIT_ENTITY(UnresolvedUsingValueDecl, ellipsis_token, getVal51, setVal51, initVal51, EllipsisToken, Token, NthDecl, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_ENTITY(UnresolvedUsingValueDecl, using_token, getVal52, setVal52, initVal52, UsingToken, Token, NthDecl, TokenUseSelector::USING_TOKEN)
  MX_VISIT_BOOL(UnresolvedUsingValueDecl, is_access_declaration, getVal68, setVal68, initVal68, IsAccessDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(UnresolvedUsingValueDecl, is_pack_expansion, getVal69, setVal69, initVal69, IsPackExpansion, bool, NthDecl)
  MX_EXIT_VISIT_UnresolvedUsingValueDecl
MX_END_VISIT_DECL(UnresolvedUsingValueDecl)

#ifndef MX_ENTER_VISIT_TemplateParamObjectDecl
#  define MX_ENTER_VISIT_TemplateParamObjectDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_TemplateParamObjectDecl
#  define MX_EXIT_VISIT_TemplateParamObjectDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(TemplateParamObjectDecl)
  MX_ENTER_VISIT_TemplateParamObjectDecl
  MX_VISIT_BASE(TemplateParamObjectDecl, ValueDecl)
  MX_EXIT_VISIT_TemplateParamObjectDecl
MX_END_VISIT_DECL(TemplateParamObjectDecl)

#ifndef MX_ENTER_VISIT_OMPDeclareReductionDecl
#  define MX_ENTER_VISIT_OMPDeclareReductionDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_OMPDeclareReductionDecl
#  define MX_EXIT_VISIT_OMPDeclareReductionDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(OMPDeclareReductionDecl)
  MX_ENTER_VISIT_OMPDeclareReductionDecl
  MX_VISIT_BASE(OMPDeclareReductionDecl, ValueDecl)
  MX_VISIT_ENTITY(OMPDeclareReductionDecl, combiner, getVal51, setVal51, initVal51, Combiner, Expr, NthDecl, StmtUseSelector::COMBINER)
  MX_VISIT_ENTITY(OMPDeclareReductionDecl, combiner_in, getVal52, setVal52, initVal52, CombinerIn, Expr, NthDecl, StmtUseSelector::COMBINER_IN)
  MX_VISIT_ENTITY(OMPDeclareReductionDecl, combiner_out, getVal60, setVal60, initVal60, CombinerOut, Expr, NthDecl, StmtUseSelector::COMBINER_OUT)
  MX_VISIT_ENTITY(OMPDeclareReductionDecl, initializer_original, getVal61, setVal61, initVal61, InitializerOriginal, Expr, NthDecl, StmtUseSelector::INITIALIZER_ORIGINAL)
  MX_VISIT_ENTITY(OMPDeclareReductionDecl, initializer_private, getVal62, setVal62, initVal62, InitializerPrivate, Expr, NthDecl, StmtUseSelector::INITIALIZER_PRIVATE)
  MX_VISIT_ENTITY(OMPDeclareReductionDecl, initializer, getVal70, setVal70, initVal70, Initializer, Expr, NthDecl, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENUM(OMPDeclareReductionDecl, initializer_kind, getVal71, setVal71, initVal71, InitializerKind, OMPDeclareReductionDeclInitKind, NthDecl)
  MX_VISIT_DECL_CONTEXT(OMPDeclareReductionDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_OMPDeclareReductionDecl
MX_END_VISIT_DECL(OMPDeclareReductionDecl)

#ifndef MX_ENTER_VISIT_MSGuidDecl
#  define MX_ENTER_VISIT_MSGuidDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_MSGuidDecl
#  define MX_EXIT_VISIT_MSGuidDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(MSGuidDecl)
  MX_ENTER_VISIT_MSGuidDecl
  MX_VISIT_BASE(MSGuidDecl, ValueDecl)
  MX_EXIT_VISIT_MSGuidDecl
MX_END_VISIT_DECL(MSGuidDecl)

#ifndef MX_ENTER_VISIT_IndirectFieldDecl
#  define MX_ENTER_VISIT_IndirectFieldDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_IndirectFieldDecl
#  define MX_EXIT_VISIT_IndirectFieldDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(IndirectFieldDecl)
  MX_ENTER_VISIT_IndirectFieldDecl
  MX_VISIT_BASE(IndirectFieldDecl, ValueDecl)
  MX_VISIT_ENTITY_LIST(IndirectFieldDecl, chain, getVal44, setVal44, initVal44, Chain, NamedDecl, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(IndirectFieldDecl, anonymous_field, getVal51, setVal51, initVal51, AnonymousField, FieldDecl, NthDecl, DeclUseSelector::ANONYMOUS_FIELD)
  MX_VISIT_OPTIONAL_ENTITY(IndirectFieldDecl, variable_declaration, getVal52, setVal52, initVal52, VariableDeclaration, VarDecl, NthDecl, DeclUseSelector::VARIABLE_DECLARATION)
  MX_EXIT_VISIT_IndirectFieldDecl
MX_END_VISIT_DECL(IndirectFieldDecl)

#ifndef MX_ENTER_VISIT_EnumConstantDecl
#  define MX_ENTER_VISIT_EnumConstantDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_EnumConstantDecl
#  define MX_EXIT_VISIT_EnumConstantDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(EnumConstantDecl)
  MX_ENTER_VISIT_EnumConstantDecl
  MX_VISIT_BASE(EnumConstantDecl, ValueDecl)
  MX_VISIT_OPTIONAL_ENTITY(EnumConstantDecl, initializer_expression, getVal51, setVal51, initVal51, InitializerExpression, Expr, NthDecl, StmtUseSelector::INITIALIZER_EXPRESSION)
  MX_EXIT_VISIT_EnumConstantDecl
MX_END_VISIT_DECL(EnumConstantDecl)

#ifndef MX_ENTER_VISIT_DeclaratorDecl
#  define MX_ENTER_VISIT_DeclaratorDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_DeclaratorDecl
#  define MX_EXIT_VISIT_DeclaratorDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(DeclaratorDecl)
  MX_ENTER_VISIT_DeclaratorDecl
  MX_VISIT_BASE(DeclaratorDecl, ValueDecl)
  MX_VISIT_ENTITY(DeclaratorDecl, first_inner_token, getVal51, setVal51, initVal51, FirstInnerToken, Token, NthDecl, TokenUseSelector::FIRST_INNER_TOKEN)
  MX_VISIT_ENTITY(DeclaratorDecl, first_outer_token, getVal52, setVal52, initVal52, FirstOuterToken, Token, NthDecl, TokenUseSelector::FIRST_OUTER_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(DeclaratorDecl, trailing_requires_clause, getVal60, setVal60, initVal60, TrailingRequiresClause, Expr, NthDecl, StmtUseSelector::TRAILING_REQUIRES_CLAUSE)
  MX_VISIT_ENTITY(DeclaratorDecl, type_spec_end_token, getVal61, setVal61, initVal61, TypeSpecEndToken, Token, NthDecl, TokenUseSelector::TYPE_SPEC_END_TOKEN)
  MX_VISIT_ENTITY(DeclaratorDecl, type_spec_start_token, getVal62, setVal62, initVal62, TypeSpecStartToken, Token, NthDecl, TokenUseSelector::TYPE_SPEC_START_TOKEN)
  MX_VISIT_PSEUDO_LIST(DeclaratorDecl, template_parameter_lists, getVal72, setVal72, initVal72, TemplateParameterLists, TemplateParameterList, NthDecl)
  MX_EXIT_VISIT_DeclaratorDecl
MX_END_VISIT_DECL(DeclaratorDecl)

#ifndef MX_ENTER_VISIT_VarDecl
#  define MX_ENTER_VISIT_VarDecl MX_ENTER_VISIT_DeclaratorDecl
#endif
#ifndef MX_EXIT_VISIT_VarDecl
#  define MX_EXIT_VISIT_VarDecl MX_EXIT_VISIT_DeclaratorDecl
#endif

MX_BEGIN_VISIT_DECL(VarDecl)
  MX_ENTER_VISIT_VarDecl
  MX_VISIT_BASE(VarDecl, DeclaratorDecl)
  MX_VISIT_OPTIONAL_ENTITY(VarDecl, acting_definition, getVal70, setVal70, initVal70, ActingDefinition, VarDecl, NthDecl, DeclUseSelector::ACTING_DEFINITION)
  MX_VISIT_OPTIONAL_ENTITY(VarDecl, initializer, getVal73, setVal73, initVal73, Initializer, Expr, NthDecl, StmtUseSelector::INITIALIZER)
  MX_VISIT_ENUM(VarDecl, initializer_style, getVal71, setVal71, initVal71, InitializerStyle, VarDeclInitializationStyle, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(VarDecl, initializing_declaration, getVal75, setVal75, initVal75, InitializingDeclaration, VarDecl, NthDecl, DeclUseSelector::INITIALIZING_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY(VarDecl, instantiated_from_static_data_member, getVal77, setVal77, initVal77, InstantiatedFromStaticDataMember, VarDecl, NthDecl, DeclUseSelector::INSTANTIATED_FROM_STATIC_DATA_MEMBER)
  MX_VISIT_ENUM(VarDecl, language_linkage, getVal79, setVal79, initVal79, LanguageLinkage, LanguageLinkage, NthDecl)
  MX_VISIT_ENTITY(VarDecl, point_of_instantiation, getVal80, setVal80, initVal80, PointOfInstantiation, Token, NthDecl, TokenUseSelector::POINT_OF_INSTANTIATION)
  MX_VISIT_ENUM(VarDecl, storage_class, getVal81, setVal81, initVal81, StorageClass, StorageClass, NthDecl)
  MX_VISIT_ENUM(VarDecl, storage_duration, getVal82, setVal82, initVal82, StorageDuration, StorageDuration, NthDecl)
  MX_VISIT_ENUM(VarDecl, tls_kind, getVal83, setVal83, initVal83, TLSKind, VarDeclTLSKind, NthDecl)
  MX_VISIT_ENUM(VarDecl, tsc_spec, getVal84, setVal84, initVal84, TSCSpec, ThreadStorageClassSpecifier, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(VarDecl, template_instantiation_pattern, getVal85, setVal85, initVal85, TemplateInstantiationPattern, VarDecl, NthDecl, DeclUseSelector::TEMPLATE_INSTANTIATION_PATTERN)
  MX_VISIT_ENUM(VarDecl, template_specialization_kind, getVal87, setVal87, initVal87, TemplateSpecializationKind, TemplateSpecializationKind, NthDecl)
  MX_VISIT_ENUM(VarDecl, template_specialization_kind_for_instantiation, getVal88, setVal88, initVal88, TemplateSpecializationKindForInstantiation, TemplateSpecializationKind, NthDecl)
  MX_VISIT_BOOL(VarDecl, has_constant_initialization, getVal89, setVal89, initVal89, HasConstantInitialization, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, has_dependent_alignment, getVal90, setVal90, initVal90, HasDependentAlignment, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, has_external_storage, getVal91, setVal91, initVal91, HasExternalStorage, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, has_global_storage, getVal92, setVal92, initVal92, HasGlobalStorage, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(VarDecl, has_ice_initializer, getVal93, setVal93, initVal93, HasICEInitializer, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, has_initializer, getVal95, setVal95, initVal95, HasInitializer, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, has_local_storage, getVal96, setVal96, initVal96, HasLocalStorage, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_arc_pseudo_strong, getVal97, setVal97, initVal97, IsARCPseudoStrong, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_cxx_for_range_declaration, getVal98, setVal98, initVal98, IsCXXForRangeDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_constexpr, getVal99, setVal99, initVal99, IsConstexpr, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_direct_initializer, getVal100, setVal100, initVal100, IsDirectInitializer, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_escaping_byref, getVal101, setVal101, initVal101, IsEscapingByref, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_exception_variable, getVal102, setVal102, initVal102, IsExceptionVariable, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_extern_c, getVal103, setVal103, initVal103, IsExternC, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_file_variable_declaration, getVal104, setVal104, initVal104, IsFileVariableDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_function_or_method_variable_declaration, getVal105, setVal105, initVal105, IsFunctionOrMethodVariableDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_in_extern_c_context, getVal106, setVal106, initVal106, IsInExternCContext, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_in_extern_cxx_context, getVal107, setVal107, initVal107, IsInExternCXXContext, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_initializer_capture, getVal108, setVal108, initVal108, IsInitializerCapture, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_inline, getVal109, setVal109, initVal109, IsInline, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_inline_specified, getVal110, setVal110, initVal110, IsInlineSpecified, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_known_to_be_defined, getVal111, setVal111, initVal111, IsKnownToBeDefined, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_local_variable_declaration, getVal112, setVal112, initVal112, IsLocalVariableDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_local_variable_declaration_or_parm, getVal113, setVal113, initVal113, IsLocalVariableDeclarationOrParm, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_nrvo_variable, getVal114, setVal114, initVal114, IsNRVOVariable, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_no_destroy, getVal115, setVal115, initVal115, IsNoDestroy, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_non_escaping_byref, getVal116, setVal116, initVal116, IsNonEscapingByref, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_obj_c_for_declaration, getVal117, setVal117, initVal117, IsObjCForDeclaration, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_previous_declaration_in_same_block_scope, getVal118, setVal118, initVal118, IsPreviousDeclarationInSameBlockScope, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_static_data_member, getVal119, setVal119, initVal119, IsStaticDataMember, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_static_local, getVal120, setVal120, initVal120, IsStaticLocal, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_this_declaration_a_demoted_definition, getVal121, setVal121, initVal121, IsThisDeclarationADemotedDefinition, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, is_usable_in_constant_expressions, getVal122, setVal122, initVal122, IsUsableInConstantExpressions, bool, NthDecl)
  MX_VISIT_BOOL(VarDecl, might_be_usable_in_constant_expressions, getVal123, setVal123, initVal123, MightBeUsableInConstantExpressions, bool, NthDecl)
  MX_VISIT_ENUM(VarDecl, needs_destruction, getVal124, setVal124, initVal124, NeedsDestruction, QualTypeDestructionKind, NthDecl)
  MX_EXIT_VISIT_VarDecl
MX_END_VISIT_DECL(VarDecl)

#ifndef MX_ENTER_VISIT_ParmVarDecl
#  define MX_ENTER_VISIT_ParmVarDecl MX_ENTER_VISIT_VarDecl
#endif
#ifndef MX_EXIT_VISIT_ParmVarDecl
#  define MX_EXIT_VISIT_ParmVarDecl MX_EXIT_VISIT_VarDecl
#endif

MX_BEGIN_VISIT_DECL(ParmVarDecl)
  MX_ENTER_VISIT_ParmVarDecl
  MX_VISIT_BASE(ParmVarDecl, VarDecl)
  MX_VISIT_OPTIONAL_ENTITY(ParmVarDecl, default_argument, getVal125, setVal125, initVal125, DefaultArgument, Expr, NthDecl, StmtUseSelector::DEFAULT_ARGUMENT)
  MX_VISIT_ENUM(ParmVarDecl, obj_c_decl_qualifier, getVal129, setVal129, initVal129, ObjCDeclQualifier, DeclObjCDeclQualifier, NthDecl)
  MX_VISIT_ENTITY(ParmVarDecl, original_type, getVal130, setVal130, initVal130, OriginalType, Type, NthDecl, TypeUseSelector::ORIGINAL_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(ParmVarDecl, uninstantiated_default_argument, getVal131, setVal131, initVal131, UninstantiatedDefaultArgument, Expr, NthDecl, StmtUseSelector::UNINSTANTIATED_DEFAULT_ARGUMENT)
  MX_VISIT_BOOL(ParmVarDecl, has_default_argument, getVal133, setVal133, initVal133, HasDefaultArgument, bool, NthDecl)
  MX_VISIT_BOOL(ParmVarDecl, has_inherited_default_argument, getVal134, setVal134, initVal134, HasInheritedDefaultArgument, bool, NthDecl)
  MX_VISIT_BOOL(ParmVarDecl, has_uninstantiated_default_argument, getVal135, setVal135, initVal135, HasUninstantiatedDefaultArgument, bool, NthDecl)
  MX_VISIT_BOOL(ParmVarDecl, has_unparsed_default_argument, getVal136, setVal136, initVal136, HasUnparsedDefaultArgument, bool, NthDecl)
  MX_VISIT_BOOL(ParmVarDecl, is_destroyed_in_callee, getVal137, setVal137, initVal137, IsDestroyedInCallee, bool, NthDecl)
  MX_VISIT_BOOL(ParmVarDecl, is_knr_promoted, getVal138, setVal138, initVal138, IsKNRPromoted, bool, NthDecl)
  MX_VISIT_BOOL(ParmVarDecl, is_obj_c_method_parameter, getVal139, setVal139, initVal139, IsObjCMethodParameter, bool, NthDecl)
  MX_EXIT_VISIT_ParmVarDecl
MX_END_VISIT_DECL(ParmVarDecl)

#ifndef MX_ENTER_VISIT_OMPCapturedExprDecl
#  define MX_ENTER_VISIT_OMPCapturedExprDecl MX_ENTER_VISIT_VarDecl
#endif
#ifndef MX_EXIT_VISIT_OMPCapturedExprDecl
#  define MX_EXIT_VISIT_OMPCapturedExprDecl MX_EXIT_VISIT_VarDecl
#endif

MX_BEGIN_VISIT_DECL(OMPCapturedExprDecl)
  MX_ENTER_VISIT_OMPCapturedExprDecl
  MX_VISIT_BASE(OMPCapturedExprDecl, VarDecl)
  MX_EXIT_VISIT_OMPCapturedExprDecl
MX_END_VISIT_DECL(OMPCapturedExprDecl)

#ifndef MX_ENTER_VISIT_ImplicitParamDecl
#  define MX_ENTER_VISIT_ImplicitParamDecl MX_ENTER_VISIT_VarDecl
#endif
#ifndef MX_EXIT_VISIT_ImplicitParamDecl
#  define MX_EXIT_VISIT_ImplicitParamDecl MX_EXIT_VISIT_VarDecl
#endif

MX_BEGIN_VISIT_DECL(ImplicitParamDecl)
  MX_ENTER_VISIT_ImplicitParamDecl
  MX_VISIT_BASE(ImplicitParamDecl, VarDecl)
  MX_VISIT_ENUM(ImplicitParamDecl, parameter_kind, getVal129, setVal129, initVal129, ParameterKind, ImplicitParamDeclImplicitParamKind, NthDecl)
  MX_EXIT_VISIT_ImplicitParamDecl
MX_END_VISIT_DECL(ImplicitParamDecl)

#ifndef MX_ENTER_VISIT_DecompositionDecl
#  define MX_ENTER_VISIT_DecompositionDecl MX_ENTER_VISIT_VarDecl
#endif
#ifndef MX_EXIT_VISIT_DecompositionDecl
#  define MX_EXIT_VISIT_DecompositionDecl MX_EXIT_VISIT_VarDecl
#endif

MX_BEGIN_VISIT_DECL(DecompositionDecl)
  MX_ENTER_VISIT_DecompositionDecl
  MX_VISIT_BASE(DecompositionDecl, VarDecl)
  MX_VISIT_ENTITY_LIST(DecompositionDecl, bindings, getVal44, setVal44, initVal44, Bindings, BindingDecl, NthDecl)
  MX_EXIT_VISIT_DecompositionDecl
MX_END_VISIT_DECL(DecompositionDecl)

#ifndef MX_ENTER_VISIT_VarTemplateSpecializationDecl
#  define MX_ENTER_VISIT_VarTemplateSpecializationDecl MX_ENTER_VISIT_VarDecl
#endif
#ifndef MX_EXIT_VISIT_VarTemplateSpecializationDecl
#  define MX_EXIT_VISIT_VarTemplateSpecializationDecl MX_EXIT_VISIT_VarDecl
#endif

MX_BEGIN_VISIT_DECL(VarTemplateSpecializationDecl)
  MX_ENTER_VISIT_VarTemplateSpecializationDecl
  MX_VISIT_BASE(VarTemplateSpecializationDecl, VarDecl)
  MX_VISIT_ENTITY(VarTemplateSpecializationDecl, extern_token, getVal125, setVal125, initVal125, ExternToken, Token, NthDecl, TokenUseSelector::EXTERN_TOKEN)
  MX_VISIT_ENUM(VarTemplateSpecializationDecl, specialization_kind, getVal129, setVal129, initVal129, SpecializationKind, TemplateSpecializationKind, NthDecl)
  MX_VISIT_PSEUDO_LIST(VarTemplateSpecializationDecl, template_arguments, getVal140, setVal140, initVal140, TemplateArguments, TemplateArgument, NthDecl)
  MX_VISIT_PSEUDO_LIST(VarTemplateSpecializationDecl, template_instantiation_arguments, getVal141, setVal141, initVal141, TemplateInstantiationArguments, TemplateArgument, NthDecl)
  MX_VISIT_ENTITY(VarTemplateSpecializationDecl, template_keyword_token, getVal127, setVal127, initVal127, TemplateKeywordToken, Token, NthDecl, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_ENTITY(VarTemplateSpecializationDecl, type_as_written, getVal128, setVal128, initVal128, TypeAsWritten, Type, NthDecl, TypeUseSelector::TYPE_AS_WRITTEN)
  MX_VISIT_BOOL(VarTemplateSpecializationDecl, is_class_scope_explicit_specialization, getVal126, setVal126, initVal126, IsClassScopeExplicitSpecialization, bool, NthDecl)
  MX_VISIT_BOOL(VarTemplateSpecializationDecl, is_explicit_instantiation_or_specialization, getVal132, setVal132, initVal132, IsExplicitInstantiationOrSpecialization, bool, NthDecl)
  MX_VISIT_BOOL(VarTemplateSpecializationDecl, is_explicit_specialization, getVal133, setVal133, initVal133, IsExplicitSpecialization, bool, NthDecl)
  MX_EXIT_VISIT_VarTemplateSpecializationDecl
MX_END_VISIT_DECL(VarTemplateSpecializationDecl)

#ifndef MX_ENTER_VISIT_VarTemplatePartialSpecializationDecl
#  define MX_ENTER_VISIT_VarTemplatePartialSpecializationDecl MX_ENTER_VISIT_VarTemplateSpecializationDecl
#endif
#ifndef MX_EXIT_VISIT_VarTemplatePartialSpecializationDecl
#  define MX_EXIT_VISIT_VarTemplatePartialSpecializationDecl MX_EXIT_VISIT_VarTemplateSpecializationDecl
#endif

MX_BEGIN_VISIT_DECL(VarTemplatePartialSpecializationDecl)
  MX_ENTER_VISIT_VarTemplatePartialSpecializationDecl
  MX_EXIT_VISIT_VarTemplatePartialSpecializationDecl
MX_END_VISIT_DECL(VarTemplatePartialSpecializationDecl)

#ifndef MX_ENTER_VISIT_NonTypeTemplateParmDecl
#  define MX_ENTER_VISIT_NonTypeTemplateParmDecl MX_ENTER_VISIT_DeclaratorDecl
#endif
#ifndef MX_EXIT_VISIT_NonTypeTemplateParmDecl
#  define MX_EXIT_VISIT_NonTypeTemplateParmDecl MX_EXIT_VISIT_DeclaratorDecl
#endif

MX_BEGIN_VISIT_DECL(NonTypeTemplateParmDecl)
  MX_ENTER_VISIT_NonTypeTemplateParmDecl
  MX_VISIT_BASE(NonTypeTemplateParmDecl, DeclaratorDecl)
  MX_VISIT_BOOL(NonTypeTemplateParmDecl, default_argument_was_inherited, getVal69, setVal69, initVal69, DefaultArgumentWasInherited, bool, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(NonTypeTemplateParmDecl, default_argument, getVal70, setVal70, initVal70, DefaultArgument, Expr, NthDecl, StmtUseSelector::DEFAULT_ARGUMENT)
  MX_VISIT_ENTITY(NonTypeTemplateParmDecl, default_argument_token, getVal73, setVal73, initVal73, DefaultArgumentToken, Token, NthDecl, TokenUseSelector::DEFAULT_ARGUMENT_TOKEN)
  MX_VISIT_OPTIONAL_INT(NonTypeTemplateParmDecl, num_expansion_types, getVal142, setVal142, initVal142, NumExpansionTypes, unsigned, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(NonTypeTemplateParmDecl, placeholder_type_constraint, getVal75, setVal75, initVal75, PlaceholderTypeConstraint, Expr, NthDecl, StmtUseSelector::PLACEHOLDER_TYPE_CONSTRAINT)
  MX_VISIT_BOOL(NonTypeTemplateParmDecl, has_default_argument, getVal86, setVal86, initVal86, HasDefaultArgument, bool, NthDecl)
  MX_VISIT_BOOL(NonTypeTemplateParmDecl, has_placeholder_type_constraint, getVal89, setVal89, initVal89, HasPlaceholderTypeConstraint, bool, NthDecl)
  MX_VISIT_BOOL(NonTypeTemplateParmDecl, is_expanded_parameter_pack, getVal90, setVal90, initVal90, IsExpandedParameterPack, bool, NthDecl)
  MX_VISIT_BOOL(NonTypeTemplateParmDecl, is_pack_expansion, getVal91, setVal91, initVal91, IsPackExpansion, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(NonTypeTemplateParmDecl, expansion_types, getVal44, setVal44, initVal44, ExpansionTypes, Type, NthDecl)
  MX_EXIT_VISIT_NonTypeTemplateParmDecl
MX_END_VISIT_DECL(NonTypeTemplateParmDecl)

#ifndef MX_ENTER_VISIT_MSPropertyDecl
#  define MX_ENTER_VISIT_MSPropertyDecl MX_ENTER_VISIT_DeclaratorDecl
#endif
#ifndef MX_EXIT_VISIT_MSPropertyDecl
#  define MX_EXIT_VISIT_MSPropertyDecl MX_EXIT_VISIT_DeclaratorDecl
#endif

MX_BEGIN_VISIT_DECL(MSPropertyDecl)
  MX_ENTER_VISIT_MSPropertyDecl
  MX_VISIT_BASE(MSPropertyDecl, DeclaratorDecl)
  MX_VISIT_BOOL(MSPropertyDecl, has_getter, getVal69, setVal69, initVal69, HasGetter, bool, NthDecl)
  MX_VISIT_BOOL(MSPropertyDecl, has_setter, getVal74, setVal74, initVal74, HasSetter, bool, NthDecl)
  MX_EXIT_VISIT_MSPropertyDecl
MX_END_VISIT_DECL(MSPropertyDecl)

#ifndef MX_ENTER_VISIT_FunctionDecl
#  define MX_ENTER_VISIT_FunctionDecl MX_ENTER_VISIT_DeclaratorDecl
#endif
#ifndef MX_EXIT_VISIT_FunctionDecl
#  define MX_EXIT_VISIT_FunctionDecl MX_EXIT_VISIT_DeclaratorDecl
#endif

MX_BEGIN_VISIT_DECL(FunctionDecl)
  MX_ENTER_VISIT_FunctionDecl
  MX_VISIT_BASE(FunctionDecl, DeclaratorDecl)
  MX_VISIT_BOOL(FunctionDecl, uses_fp_intrin, getVal69, setVal69, initVal69, UsesFPIntrin, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(FunctionDecl, does_declaration_force_externally_visible_definition, getVal74, setVal74, initVal74, DoesDeclarationForceExternallyVisibleDefinition, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, does_this_declaration_have_a_body, getVal78, setVal78, initVal78, DoesThisDeclarationHaveABody, bool, NthDecl)
  MX_VISIT_ENTITY(FunctionDecl, call_result_type, getVal70, setVal70, initVal70, CallResultType, Type, NthDecl, TypeUseSelector::CALL_RESULT_TYPE)
  MX_VISIT_ENUM(FunctionDecl, constexpr_kind, getVal71, setVal71, initVal71, ConstexprKind, ConstexprSpecKind, NthDecl)
  MX_VISIT_ENTITY(FunctionDecl, declared_return_type, getVal73, setVal73, initVal73, DeclaredReturnType, Type, NthDecl, TypeUseSelector::DECLARED_RETURN_TYPE)
  MX_VISIT_ENTITY(FunctionDecl, ellipsis_token, getVal75, setVal75, initVal75, EllipsisToken, Token, NthDecl, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_ENUM(FunctionDecl, exception_spec_type, getVal79, setVal79, initVal79, ExceptionSpecType, ExceptionSpecificationType, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(FunctionDecl, instantiated_from_member_function, getVal85, setVal85, initVal85, InstantiatedFromMemberFunction, FunctionDecl, NthDecl, DeclUseSelector::INSTANTIATED_FROM_MEMBER_FUNCTION)
  MX_VISIT_ENUM(FunctionDecl, language_linkage, getVal81, setVal81, initVal81, LanguageLinkage, LanguageLinkage, NthDecl)
  MX_VISIT_ENUM(FunctionDecl, multi_version_kind, getVal82, setVal82, initVal82, MultiVersionKind, MultiVersionKind, NthDecl)
  MX_VISIT_OPTIONAL_INT(FunctionDecl, odr_hash, getVal142, setVal142, initVal142, ODRHash, unsigned, NthDecl)
  MX_VISIT_ENUM(FunctionDecl, overloaded_operator, getVal83, setVal83, initVal83, OverloadedOperator, OverloadedOperatorKind, NthDecl)
  MX_VISIT_ENTITY(FunctionDecl, point_of_instantiation, getVal128, setVal128, initVal128, PointOfInstantiation, Token, NthDecl, TokenUseSelector::POINT_OF_INSTANTIATION)
  MX_VISIT_ENTITY(FunctionDecl, return_type, getVal130, setVal130, initVal130, ReturnType, Type, NthDecl, TypeUseSelector::RETURN_TYPE)
  MX_VISIT_ENUM(FunctionDecl, storage_class, getVal84, setVal84, initVal84, StorageClass, StorageClass, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(FunctionDecl, template_instantiation_pattern, getVal144, setVal144, initVal144, TemplateInstantiationPattern, FunctionDecl, NthDecl, DeclUseSelector::TEMPLATE_INSTANTIATION_PATTERN)
  MX_VISIT_ENUM(FunctionDecl, template_specialization_kind, getVal87, setVal87, initVal87, TemplateSpecializationKind, TemplateSpecializationKind, NthDecl)
  MX_VISIT_ENUM(FunctionDecl, template_specialization_kind_for_instantiation, getVal88, setVal88, initVal88, TemplateSpecializationKindForInstantiation, TemplateSpecializationKind, NthDecl)
  MX_VISIT_ENUM(FunctionDecl, templated_kind, getVal124, setVal124, initVal124, TemplatedKind, FunctionDeclTemplatedKind, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_implicit_return_zero, getVal91, setVal91, initVal91, HasImplicitReturnZero, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_inherited_prototype, getVal92, setVal92, initVal92, HasInheritedPrototype, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_one_parameter_or_default_arguments, getVal93, setVal93, initVal93, HasOneParameterOrDefaultArguments, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_prototype, getVal94, setVal94, initVal94, HasPrototype, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_skipped_body, getVal95, setVal95, initVal95, HasSkippedBody, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_trivial_body, getVal96, setVal96, initVal96, HasTrivialBody, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, has_written_prototype, getVal97, setVal97, initVal97, HasWrittenPrototype, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, instantiation_is_pending, getVal98, setVal98, initVal98, InstantiationIsPending, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_cpu_dispatch_multi_version, getVal99, setVal99, initVal99, IsCPUDispatchMultiVersion, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_cpu_specific_multi_version, getVal100, setVal100, initVal100, IsCPUSpecificMultiVersion, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_consteval, getVal101, setVal101, initVal101, IsConsteval, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_constexpr, getVal102, setVal102, initVal102, IsConstexpr, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_constexpr_specified, getVal103, setVal103, initVal103, IsConstexprSpecified, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_defaulted, getVal104, setVal104, initVal104, IsDefaulted, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_deleted, getVal105, setVal105, initVal105, IsDeleted, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_deleted_as_written, getVal106, setVal106, initVal106, IsDeletedAsWritten, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_destroying_operator_delete, getVal107, setVal107, initVal107, IsDestroyingOperatorDelete, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_explicitly_defaulted, getVal108, setVal108, initVal108, IsExplicitlyDefaulted, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_extern_c, getVal109, setVal109, initVal109, IsExternC, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_function_template_specialization, getVal110, setVal110, initVal110, IsFunctionTemplateSpecialization, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_global, getVal111, setVal111, initVal111, IsGlobal, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_implicitly_instantiable, getVal112, setVal112, initVal112, IsImplicitlyInstantiable, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_in_extern_c_context, getVal113, setVal113, initVal113, IsInExternCContext, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_in_extern_cxx_context, getVal114, setVal114, initVal114, IsInExternCXXContext, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_inline_builtin_declaration, getVal115, setVal115, initVal115, IsInlineBuiltinDeclaration, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(FunctionDecl, is_inline_definition_externally_visible, getVal116, setVal116, initVal116, IsInlineDefinitionExternallyVisible, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_inline_specified, getVal118, setVal118, initVal118, IsInlineSpecified, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_inlined, getVal119, setVal119, initVal119, IsInlined, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_late_template_parsed, getVal120, setVal120, initVal120, IsLateTemplateParsed, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(FunctionDecl, is_ms_extern_inline, getVal121, setVal121, initVal121, IsMSExternInline, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_msvcrt_entry_point, getVal123, setVal123, initVal123, IsMSVCRTEntryPoint, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_main, getVal126, setVal126, initVal126, IsMain, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_multi_version, getVal132, setVal132, initVal132, IsMultiVersion, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_no_return, getVal133, setVal133, initVal133, IsNoReturn, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_overloaded_operator, getVal134, setVal134, initVal134, IsOverloadedOperator, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_pure, getVal135, setVal135, initVal135, IsPure, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_replaceable_global_allocation_function, getVal136, setVal136, initVal136, IsReplaceableGlobalAllocationFunction, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(FunctionDecl, is_reserved_global_placement_operator, getVal137, setVal137, initVal137, IsReservedGlobalPlacementOperator, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_static, getVal139, setVal139, initVal139, IsStatic, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_target_clones_multi_version, getVal145, setVal145, initVal145, IsTargetClonesMultiVersion, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_target_multi_version, getVal146, setVal146, initVal146, IsTargetMultiVersion, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_template_instantiation, getVal147, setVal147, initVal147, IsTemplateInstantiation, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_definition, getVal148, setVal148, initVal148, IsThisDeclarationADefinition, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_this_declaration_instantiated_from_a_friend_definition, getVal149, setVal149, initVal149, IsThisDeclarationInstantiatedFromAFriendDefinition, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_trivial, getVal150, setVal150, initVal150, IsTrivial, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_trivial_for_call, getVal151, setVal151, initVal151, IsTrivialForCall, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_user_provided, getVal152, setVal152, initVal152, IsUserProvided, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_variadic, getVal153, setVal153, initVal153, IsVariadic, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, is_virtual_as_written, getVal154, setVal154, initVal154, IsVirtualAsWritten, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(FunctionDecl, parameters, getVal44, setVal44, initVal44, Parameters, ParmVarDecl, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, uses_seh_try, getVal155, setVal155, initVal155, UsesSEHTry, bool, NthDecl)
  MX_VISIT_BOOL(FunctionDecl, will_have_body, getVal156, setVal156, initVal156, WillHaveBody, bool, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(FunctionDecl, body, getVal157, setVal157, initVal157, Body, Stmt, NthDecl, StmtUseSelector::BODY)
  MX_VISIT_DECL_CONTEXT(FunctionDecl, declarations_in_context, getVal45, setVal45, initVal45, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_FunctionDecl
MX_END_VISIT_DECL(FunctionDecl)

#ifndef MX_ENTER_VISIT_CXXMethodDecl
#  define MX_ENTER_VISIT_CXXMethodDecl MX_ENTER_VISIT_FunctionDecl
#endif
#ifndef MX_EXIT_VISIT_CXXMethodDecl
#  define MX_EXIT_VISIT_CXXMethodDecl MX_EXIT_VISIT_FunctionDecl
#endif

MX_BEGIN_VISIT_DECL(CXXMethodDecl)
  MX_ENTER_VISIT_CXXMethodDecl
  MX_VISIT_BASE(CXXMethodDecl, FunctionDecl)
  MX_VISIT_ENUM(CXXMethodDecl, reference_qualifier, getVal129, setVal129, initVal129, ReferenceQualifier, RefQualifierKind, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXMethodDecl, this_object_type, getVal159, setVal159, initVal159, ThisObjectType, Type, NthDecl, TypeUseSelector::THIS_OBJECT_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(CXXMethodDecl, this_type, getVal161, setVal161, initVal161, ThisType, Type, NthDecl, TypeUseSelector::THIS_TYPE)
  MX_VISIT_BOOL(CXXMethodDecl, has_inline_body, getVal163, setVal163, initVal163, HasInlineBody, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_const, getVal164, setVal164, initVal164, IsConst, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_copy_assignment_operator, getVal165, setVal165, initVal165, IsCopyAssignmentOperator, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_instance, getVal166, setVal166, initVal166, IsInstance, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_lambda_static_invoker, getVal167, setVal167, initVal167, IsLambdaStaticInvoker, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_move_assignment_operator, getVal168, setVal168, initVal168, IsMoveAssignmentOperator, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_virtual, getVal169, setVal169, initVal169, IsVirtual, bool, NthDecl)
  MX_VISIT_BOOL(CXXMethodDecl, is_volatile, getVal170, setVal170, initVal170, IsVolatile, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(CXXMethodDecl, overridden_methods, getVal56, setVal56, initVal56, OverriddenMethods, CXXMethodDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(CXXMethodDecl, parameter_declarations, getVal171, setVal171, initVal171, ParameterDeclarations, ParmVarDecl, NthDecl)
  MX_EXIT_VISIT_CXXMethodDecl
MX_END_VISIT_DECL(CXXMethodDecl)

#ifndef MX_ENTER_VISIT_CXXDestructorDecl
#  define MX_ENTER_VISIT_CXXDestructorDecl MX_ENTER_VISIT_CXXMethodDecl
#endif
#ifndef MX_EXIT_VISIT_CXXDestructorDecl
#  define MX_EXIT_VISIT_CXXDestructorDecl MX_EXIT_VISIT_CXXMethodDecl
#endif

MX_BEGIN_VISIT_DECL(CXXDestructorDecl)
  MX_ENTER_VISIT_CXXDestructorDecl
  MX_VISIT_BASE(CXXDestructorDecl, CXXMethodDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXDestructorDecl, operator_delete, getVal172, setVal172, initVal172, OperatorDelete, FunctionDecl, NthDecl, DeclUseSelector::OPERATOR_DELETE)
  MX_VISIT_OPTIONAL_ENTITY(CXXDestructorDecl, operator_delete_this_argument, getVal174, setVal174, initVal174, OperatorDeleteThisArgument, Expr, NthDecl, StmtUseSelector::OPERATOR_DELETE_THIS_ARGUMENT)
  MX_EXIT_VISIT_CXXDestructorDecl
MX_END_VISIT_DECL(CXXDestructorDecl)

#ifndef MX_ENTER_VISIT_CXXConversionDecl
#  define MX_ENTER_VISIT_CXXConversionDecl MX_ENTER_VISIT_CXXMethodDecl
#endif
#ifndef MX_EXIT_VISIT_CXXConversionDecl
#  define MX_EXIT_VISIT_CXXConversionDecl MX_EXIT_VISIT_CXXMethodDecl
#endif

MX_BEGIN_VISIT_DECL(CXXConversionDecl)
  MX_ENTER_VISIT_CXXConversionDecl
  MX_VISIT_BASE(CXXConversionDecl, CXXMethodDecl)
  MX_VISIT_ENTITY(CXXConversionDecl, conversion_type, getVal172, setVal172, initVal172, ConversionType, Type, NthDecl, TypeUseSelector::CONVERSION_TYPE)
  MX_VISIT_BOOL(CXXConversionDecl, is_explicit, getVal173, setVal173, initVal173, IsExplicit, bool, NthDecl)
  MX_VISIT_BOOL(CXXConversionDecl, is_lambda_to_block_pointer_conversion, getVal175, setVal175, initVal175, IsLambdaToBlockPointerConversion, bool, NthDecl)
  MX_EXIT_VISIT_CXXConversionDecl
MX_END_VISIT_DECL(CXXConversionDecl)

#ifndef MX_ENTER_VISIT_CXXConstructorDecl
#  define MX_ENTER_VISIT_CXXConstructorDecl MX_ENTER_VISIT_CXXMethodDecl
#endif
#ifndef MX_EXIT_VISIT_CXXConstructorDecl
#  define MX_EXIT_VISIT_CXXConstructorDecl MX_EXIT_VISIT_CXXMethodDecl
#endif

MX_BEGIN_VISIT_DECL(CXXConstructorDecl)
  MX_ENTER_VISIT_CXXConstructorDecl
  MX_VISIT_BASE(CXXConstructorDecl, CXXMethodDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXConstructorDecl, target_constructor, getVal172, setVal172, initVal172, TargetConstructor, CXXConstructorDecl, NthDecl, DeclUseSelector::TARGET_CONSTRUCTOR)
  MX_VISIT_BOOL(CXXConstructorDecl, is_default_constructor, getVal175, setVal175, initVal175, IsDefaultConstructor, bool, NthDecl)
  MX_VISIT_BOOL(CXXConstructorDecl, is_delegating_constructor, getVal176, setVal176, initVal176, IsDelegatingConstructor, bool, NthDecl)
  MX_VISIT_BOOL(CXXConstructorDecl, is_explicit, getVal177, setVal177, initVal177, IsExplicit, bool, NthDecl)
  MX_VISIT_BOOL(CXXConstructorDecl, is_inheriting_constructor, getVal178, setVal178, initVal178, IsInheritingConstructor, bool, NthDecl)
  MX_VISIT_BOOL(CXXConstructorDecl, is_specialization_copying_object, getVal179, setVal179, initVal179, IsSpecializationCopyingObject, bool, NthDecl)
  MX_EXIT_VISIT_CXXConstructorDecl
MX_END_VISIT_DECL(CXXConstructorDecl)

#ifndef MX_ENTER_VISIT_CXXDeductionGuideDecl
#  define MX_ENTER_VISIT_CXXDeductionGuideDecl MX_ENTER_VISIT_FunctionDecl
#endif
#ifndef MX_EXIT_VISIT_CXXDeductionGuideDecl
#  define MX_EXIT_VISIT_CXXDeductionGuideDecl MX_EXIT_VISIT_FunctionDecl
#endif

MX_BEGIN_VISIT_DECL(CXXDeductionGuideDecl)
  MX_ENTER_VISIT_CXXDeductionGuideDecl
  MX_VISIT_BASE(CXXDeductionGuideDecl, FunctionDecl)
  MX_VISIT_ENTITY(CXXDeductionGuideDecl, corresponding_constructor, getVal159, setVal159, initVal159, CorrespondingConstructor, CXXConstructorDecl, NthDecl, DeclUseSelector::CORRESPONDING_CONSTRUCTOR)
  MX_VISIT_BOOL(CXXDeductionGuideDecl, is_copy_deduction_candidate, getVal160, setVal160, initVal160, IsCopyDeductionCandidate, bool, NthDecl)
  MX_VISIT_BOOL(CXXDeductionGuideDecl, is_explicit, getVal162, setVal162, initVal162, IsExplicit, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(CXXDeductionGuideDecl, parameter_declarations, getVal56, setVal56, initVal56, ParameterDeclarations, ParmVarDecl, NthDecl)
  MX_EXIT_VISIT_CXXDeductionGuideDecl
MX_END_VISIT_DECL(CXXDeductionGuideDecl)

#ifndef MX_ENTER_VISIT_FieldDecl
#  define MX_ENTER_VISIT_FieldDecl MX_ENTER_VISIT_DeclaratorDecl
#endif
#ifndef MX_EXIT_VISIT_FieldDecl
#  define MX_EXIT_VISIT_FieldDecl MX_EXIT_VISIT_DeclaratorDecl
#endif

MX_BEGIN_VISIT_DECL(FieldDecl)
  MX_ENTER_VISIT_FieldDecl
  MX_VISIT_BASE(FieldDecl, DeclaratorDecl)
  MX_VISIT_OPTIONAL_ENTITY(FieldDecl, bit_width, getVal70, setVal70, initVal70, BitWidth, Expr, NthDecl, StmtUseSelector::BIT_WIDTH)
  MX_VISIT_OPTIONAL_ENTITY(FieldDecl, captured_vla_type, getVal73, setVal73, initVal73, CapturedVLAType, VariableArrayType, NthDecl, TypeUseSelector::CAPTURED_VLA_TYPE)
  MX_VISIT_ENUM(FieldDecl, in_class_initializer_style, getVal71, setVal71, initVal71, InClassInitializerStyle, InClassInitStyle, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(FieldDecl, in_class_initializer, getVal75, setVal75, initVal75, InClassInitializer, Expr, NthDecl, StmtUseSelector::IN_CLASS_INITIALIZER)
  MX_VISIT_BOOL(FieldDecl, has_captured_vla_type, getVal78, setVal78, initVal78, HasCapturedVLAType, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, has_in_class_initializer, getVal86, setVal86, initVal86, HasInClassInitializer, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, is_anonymous_struct_or_union, getVal89, setVal89, initVal89, IsAnonymousStructOrUnion, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, is_bit_field, getVal90, setVal90, initVal90, IsBitField, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, is_mutable, getVal91, setVal91, initVal91, IsMutable, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, is_unnamed_bitfield, getVal92, setVal92, initVal92, IsUnnamedBitfield, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, is_zero_length_bit_field, getVal93, setVal93, initVal93, IsZeroLengthBitField, bool, NthDecl)
  MX_VISIT_BOOL(FieldDecl, is_zero_size, getVal94, setVal94, initVal94, IsZeroSize, bool, NthDecl)
  MX_EXIT_VISIT_FieldDecl
MX_END_VISIT_DECL(FieldDecl)

#ifndef MX_ENTER_VISIT_ObjCIvarDecl
#  define MX_ENTER_VISIT_ObjCIvarDecl MX_ENTER_VISIT_FieldDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCIvarDecl
#  define MX_EXIT_VISIT_ObjCIvarDecl MX_EXIT_VISIT_FieldDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCIvarDecl)
  MX_ENTER_VISIT_ObjCIvarDecl
  MX_VISIT_BASE(ObjCIvarDecl, FieldDecl)
  MX_VISIT_ENUM(ObjCIvarDecl, access_control, getVal79, setVal79, initVal79, AccessControl, ObjCIvarDeclAccessControl, NthDecl)
  MX_VISIT_ENUM(ObjCIvarDecl, canonical_access_control, getVal81, setVal81, initVal81, CanonicalAccessControl, ObjCIvarDeclAccessControl, NthDecl)
  MX_VISIT_ENTITY(ObjCIvarDecl, containing_interface, getVal77, setVal77, initVal77, ContainingInterface, ObjCInterfaceDecl, NthDecl, DeclUseSelector::CONTAINING_INTERFACE)
  MX_VISIT_ENTITY(ObjCIvarDecl, next_instance_variable, getVal80, setVal80, initVal80, NextInstanceVariable, ObjCIvarDecl, NthDecl, DeclUseSelector::NEXT_INSTANCE_VARIABLE)
  MX_VISIT_BOOL(ObjCIvarDecl, synthesize, getVal95, setVal95, initVal95, Synthesize, bool, NthDecl)
  MX_EXIT_VISIT_ObjCIvarDecl
MX_END_VISIT_DECL(ObjCIvarDecl)

#ifndef MX_ENTER_VISIT_ObjCAtDefsFieldDecl
#  define MX_ENTER_VISIT_ObjCAtDefsFieldDecl MX_ENTER_VISIT_FieldDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCAtDefsFieldDecl
#  define MX_EXIT_VISIT_ObjCAtDefsFieldDecl MX_EXIT_VISIT_FieldDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCAtDefsFieldDecl)
  MX_ENTER_VISIT_ObjCAtDefsFieldDecl
  MX_VISIT_BASE(ObjCAtDefsFieldDecl, FieldDecl)
  MX_EXIT_VISIT_ObjCAtDefsFieldDecl
MX_END_VISIT_DECL(ObjCAtDefsFieldDecl)

#ifndef MX_ENTER_VISIT_BindingDecl
#  define MX_ENTER_VISIT_BindingDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_BindingDecl
#  define MX_EXIT_VISIT_BindingDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_DECL(BindingDecl)
  MX_ENTER_VISIT_BindingDecl
  MX_VISIT_BASE(BindingDecl, ValueDecl)
  MX_VISIT_ENTITY(BindingDecl, binding, getVal51, setVal51, initVal51, Binding, Expr, NthDecl, StmtUseSelector::BINDING)
  MX_VISIT_ENTITY(BindingDecl, decomposed_declaration, getVal52, setVal52, initVal52, DecomposedDeclaration, ValueDecl, NthDecl, DeclUseSelector::DECOMPOSED_DECLARATION)
  MX_VISIT_ENTITY(BindingDecl, holding_variable, getVal60, setVal60, initVal60, HoldingVariable, VarDecl, NthDecl, DeclUseSelector::HOLDING_VARIABLE)
  MX_EXIT_VISIT_BindingDecl
MX_END_VISIT_DECL(BindingDecl)

#ifndef MX_ENTER_VISIT_OMPDeclarativeDirectiveValueDecl
#  define MX_ENTER_VISIT_OMPDeclarativeDirectiveValueDecl MX_ENTER_VISIT_ValueDecl
#endif
#ifndef MX_EXIT_VISIT_OMPDeclarativeDirectiveValueDecl
#  define MX_EXIT_VISIT_OMPDeclarativeDirectiveValueDecl MX_EXIT_VISIT_ValueDecl
#endif

MX_BEGIN_VISIT_ABSTRACT_DECL(OMPDeclarativeDirectiveValueDecl)
  MX_ENTER_VISIT_OMPDeclarativeDirectiveValueDecl
  MX_VISIT_BASE(OMPDeclarativeDirectiveValueDecl, ValueDecl)
  MX_EXIT_VISIT_OMPDeclarativeDirectiveValueDecl
MX_END_VISIT_DECL(OMPDeclarativeDirectiveValueDecl)

#ifndef MX_ENTER_VISIT_OMPDeclareMapperDecl
#  define MX_ENTER_VISIT_OMPDeclareMapperDecl MX_ENTER_VISIT_OMPDeclarativeDirectiveValueDecl
#endif
#ifndef MX_EXIT_VISIT_OMPDeclareMapperDecl
#  define MX_EXIT_VISIT_OMPDeclareMapperDecl MX_EXIT_VISIT_OMPDeclarativeDirectiveValueDecl
#endif

MX_BEGIN_VISIT_DECL(OMPDeclareMapperDecl)
  MX_ENTER_VISIT_OMPDeclareMapperDecl
  MX_VISIT_BASE(OMPDeclareMapperDecl, OMPDeclarativeDirectiveValueDecl)
  MX_VISIT_ENTITY(OMPDeclareMapperDecl, mapper_variable_reference, getVal51, setVal51, initVal51, MapperVariableReference, Expr, NthDecl, StmtUseSelector::MAPPER_VARIABLE_REFERENCE)
  MX_VISIT_DECL_CONTEXT(OMPDeclareMapperDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_OMPDeclareMapperDecl
MX_END_VISIT_DECL(OMPDeclareMapperDecl)

#ifndef MX_ENTER_VISIT_UsingShadowDecl
#  define MX_ENTER_VISIT_UsingShadowDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_UsingShadowDecl
#  define MX_EXIT_VISIT_UsingShadowDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(UsingShadowDecl)
  MX_ENTER_VISIT_UsingShadowDecl
  MX_VISIT_BASE(UsingShadowDecl, NamedDecl)
  MX_VISIT_ENTITY(UsingShadowDecl, introducer, getVal50, setVal50, initVal50, Introducer, BaseUsingDecl, NthDecl, DeclUseSelector::INTRODUCER)
  MX_VISIT_OPTIONAL_ENTITY(UsingShadowDecl, next_using_shadow_declaration, getVal51, setVal51, initVal51, NextUsingShadowDeclaration, UsingShadowDecl, NthDecl, DeclUseSelector::NEXT_USING_SHADOW_DECLARATION)
  MX_VISIT_ENTITY(UsingShadowDecl, target_declaration, getVal52, setVal52, initVal52, TargetDeclaration, NamedDecl, NthDecl, DeclUseSelector::TARGET_DECLARATION)
  MX_EXIT_VISIT_UsingShadowDecl
MX_END_VISIT_DECL(UsingShadowDecl)

#ifndef MX_ENTER_VISIT_ConstructorUsingShadowDecl
#  define MX_ENTER_VISIT_ConstructorUsingShadowDecl MX_ENTER_VISIT_UsingShadowDecl
#endif
#ifndef MX_EXIT_VISIT_ConstructorUsingShadowDecl
#  define MX_EXIT_VISIT_ConstructorUsingShadowDecl MX_EXIT_VISIT_UsingShadowDecl
#endif

MX_BEGIN_VISIT_DECL(ConstructorUsingShadowDecl)
  MX_ENTER_VISIT_ConstructorUsingShadowDecl
  MX_VISIT_BASE(ConstructorUsingShadowDecl, UsingShadowDecl)
  MX_VISIT_BOOL(ConstructorUsingShadowDecl, constructs_virtual_base, getVal68, setVal68, initVal68, ConstructsVirtualBase, bool, NthDecl)
  MX_VISIT_ENTITY(ConstructorUsingShadowDecl, constructed_base_class, getVal60, setVal60, initVal60, ConstructedBaseClass, CXXRecordDecl, NthDecl, DeclUseSelector::CONSTRUCTED_BASE_CLASS)
  MX_VISIT_OPTIONAL_ENTITY(ConstructorUsingShadowDecl, constructed_base_class_shadow_declaration, getVal61, setVal61, initVal61, ConstructedBaseClassShadowDeclaration, ConstructorUsingShadowDecl, NthDecl, DeclUseSelector::CONSTRUCTED_BASE_CLASS_SHADOW_DECLARATION)
  MX_VISIT_ENTITY(ConstructorUsingShadowDecl, nominated_base_class, getVal62, setVal62, initVal62, NominatedBaseClass, CXXRecordDecl, NthDecl, DeclUseSelector::NOMINATED_BASE_CLASS)
  MX_VISIT_OPTIONAL_ENTITY(ConstructorUsingShadowDecl, nominated_base_class_shadow_declaration, getVal70, setVal70, initVal70, NominatedBaseClassShadowDeclaration, ConstructorUsingShadowDecl, NthDecl, DeclUseSelector::NOMINATED_BASE_CLASS_SHADOW_DECLARATION)
  MX_EXIT_VISIT_ConstructorUsingShadowDecl
MX_END_VISIT_DECL(ConstructorUsingShadowDecl)

#ifndef MX_ENTER_VISIT_UsingPackDecl
#  define MX_ENTER_VISIT_UsingPackDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_UsingPackDecl
#  define MX_EXIT_VISIT_UsingPackDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(UsingPackDecl)
  MX_ENTER_VISIT_UsingPackDecl
  MX_VISIT_BASE(UsingPackDecl, NamedDecl)
  MX_VISIT_ENTITY_LIST(UsingPackDecl, expansions, getVal44, setVal44, initVal44, Expansions, NamedDecl, NthDecl)
  MX_VISIT_ENTITY(UsingPackDecl, instantiated_from_using_declaration, getVal50, setVal50, initVal50, InstantiatedFromUsingDeclaration, NamedDecl, NthDecl, DeclUseSelector::INSTANTIATED_FROM_USING_DECLARATION)
  MX_EXIT_VISIT_UsingPackDecl
MX_END_VISIT_DECL(UsingPackDecl)

#ifndef MX_ENTER_VISIT_UsingDirectiveDecl
#  define MX_ENTER_VISIT_UsingDirectiveDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_UsingDirectiveDecl
#  define MX_EXIT_VISIT_UsingDirectiveDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(UsingDirectiveDecl)
  MX_ENTER_VISIT_UsingDirectiveDecl
  MX_VISIT_BASE(UsingDirectiveDecl, NamedDecl)
  MX_VISIT_ENTITY(UsingDirectiveDecl, identifier_token, getVal50, setVal50, initVal50, IdentifierToken, Token, NthDecl, TokenUseSelector::IDENTIFIER_TOKEN)
  MX_VISIT_ENTITY(UsingDirectiveDecl, namespace_key_token, getVal51, setVal51, initVal51, NamespaceKeyToken, Token, NthDecl, TokenUseSelector::NAMESPACE_KEY_TOKEN)
  MX_VISIT_ENTITY(UsingDirectiveDecl, nominated_namespace_as_written, getVal52, setVal52, initVal52, NominatedNamespaceAsWritten, NamedDecl, NthDecl, DeclUseSelector::NOMINATED_NAMESPACE_AS_WRITTEN)
  MX_VISIT_ENTITY(UsingDirectiveDecl, using_token, getVal60, setVal60, initVal60, UsingToken, Token, NthDecl, TokenUseSelector::USING_TOKEN)
  MX_EXIT_VISIT_UsingDirectiveDecl
MX_END_VISIT_DECL(UsingDirectiveDecl)

#ifndef MX_ENTER_VISIT_UnresolvedUsingIfExistsDecl
#  define MX_ENTER_VISIT_UnresolvedUsingIfExistsDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_UnresolvedUsingIfExistsDecl
#  define MX_EXIT_VISIT_UnresolvedUsingIfExistsDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(UnresolvedUsingIfExistsDecl)
  MX_ENTER_VISIT_UnresolvedUsingIfExistsDecl
  MX_VISIT_BASE(UnresolvedUsingIfExistsDecl, NamedDecl)
  MX_EXIT_VISIT_UnresolvedUsingIfExistsDecl
MX_END_VISIT_DECL(UnresolvedUsingIfExistsDecl)

#ifndef MX_ENTER_VISIT_TypeDecl
#  define MX_ENTER_VISIT_TypeDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_TypeDecl
#  define MX_EXIT_VISIT_TypeDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(TypeDecl)
  MX_ENTER_VISIT_TypeDecl
  MX_VISIT_BASE(TypeDecl, NamedDecl)
  MX_VISIT_OPTIONAL_ENTITY(TypeDecl, type_for_declaration, getVal50, setVal50, initVal50, TypeForDeclaration, Type, NthDecl, TypeUseSelector::TYPE_FOR_DECLARATION)
  MX_EXIT_VISIT_TypeDecl
MX_END_VISIT_DECL(TypeDecl)

#ifndef MX_ENTER_VISIT_TemplateTypeParmDecl
#  define MX_ENTER_VISIT_TemplateTypeParmDecl MX_ENTER_VISIT_TypeDecl
#endif
#ifndef MX_EXIT_VISIT_TemplateTypeParmDecl
#  define MX_EXIT_VISIT_TemplateTypeParmDecl MX_EXIT_VISIT_TypeDecl
#endif

MX_BEGIN_VISIT_DECL(TemplateTypeParmDecl)
  MX_ENTER_VISIT_TemplateTypeParmDecl
  MX_VISIT_BASE(TemplateTypeParmDecl, TypeDecl)
  MX_VISIT_BOOL(TemplateTypeParmDecl, default_argument_was_inherited, getVal68, setVal68, initVal68, DefaultArgumentWasInherited, bool, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(TemplateTypeParmDecl, default_argument, getVal51, setVal51, initVal51, DefaultArgument, Type, NthDecl, TypeUseSelector::DEFAULT_ARGUMENT)
  MX_VISIT_OPTIONAL_ENTITY(TemplateTypeParmDecl, default_argument_info, getVal52, setVal52, initVal52, DefaultArgumentInfo, Type, NthDecl, TypeUseSelector::DEFAULT_ARGUMENT_INFO)
  MX_VISIT_ENTITY(TemplateTypeParmDecl, default_argument_token, getVal60, setVal60, initVal60, DefaultArgumentToken, Token, NthDecl, TokenUseSelector::DEFAULT_ARGUMENT_TOKEN)
  MX_VISIT_BOOL(TemplateTypeParmDecl, has_default_argument, getVal76, setVal76, initVal76, HasDefaultArgument, bool, NthDecl)
  MX_VISIT_BOOL(TemplateTypeParmDecl, has_type_constraint, getVal78, setVal78, initVal78, HasTypeConstraint, bool, NthDecl)
  MX_VISIT_BOOL(TemplateTypeParmDecl, is_expanded_parameter_pack, getVal86, setVal86, initVal86, IsExpandedParameterPack, bool, NthDecl)
  MX_VISIT_BOOL(TemplateTypeParmDecl, is_pack_expansion, getVal89, setVal89, initVal89, IsPackExpansion, bool, NthDecl)
  MX_VISIT_BOOL(TemplateTypeParmDecl, was_declared_with_typename, getVal90, setVal90, initVal90, WasDeclaredWithTypename, bool, NthDecl)
  MX_EXIT_VISIT_TemplateTypeParmDecl
MX_END_VISIT_DECL(TemplateTypeParmDecl)

#ifndef MX_ENTER_VISIT_TagDecl
#  define MX_ENTER_VISIT_TagDecl MX_ENTER_VISIT_TypeDecl
#endif
#ifndef MX_EXIT_VISIT_TagDecl
#  define MX_EXIT_VISIT_TagDecl MX_EXIT_VISIT_TypeDecl
#endif

MX_BEGIN_VISIT_DECL(TagDecl)
  MX_ENTER_VISIT_TagDecl
  MX_VISIT_BASE(TagDecl, TypeDecl)
  MX_VISIT_ENTITY(TagDecl, first_inner_token, getVal60, setVal60, initVal60, FirstInnerToken, Token, NthDecl, TokenUseSelector::FIRST_INNER_TOKEN)
  MX_VISIT_ENTITY(TagDecl, first_outer_token, getVal61, setVal61, initVal61, FirstOuterToken, Token, NthDecl, TokenUseSelector::FIRST_OUTER_TOKEN)
  MX_VISIT_ENUM(TagDecl, tag_kind, getVal71, setVal71, initVal71, TagKind, TagTypeKind, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(TagDecl, typedef_name_for_anonymous_declaration, getVal62, setVal62, initVal62, TypedefNameForAnonymousDeclaration, TypedefNameDecl, NthDecl, DeclUseSelector::TYPEDEF_NAME_FOR_ANONYMOUS_DECLARATION)
  MX_VISIT_BOOL(TagDecl, has_name_for_linkage, getVal69, setVal69, initVal69, HasNameForLinkage, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_being_defined, getVal74, setVal74, initVal74, IsBeingDefined, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_class, getVal76, setVal76, initVal76, IsClass, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_complete_definition, getVal78, setVal78, initVal78, IsCompleteDefinition, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_complete_definition_required, getVal86, setVal86, initVal86, IsCompleteDefinitionRequired, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_dependent_type, getVal89, setVal89, initVal89, IsDependentType, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_embedded_in_declarator, getVal90, setVal90, initVal90, IsEmbeddedInDeclarator, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_enum, getVal91, setVal91, initVal91, IsEnum, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_free_standing, getVal92, setVal92, initVal92, IsFreeStanding, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_interface, getVal93, setVal93, initVal93, IsInterface, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_struct, getVal94, setVal94, initVal94, IsStruct, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_definition, getVal95, setVal95, initVal95, IsThisDeclarationADefinition, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, is_union, getVal96, setVal96, initVal96, IsUnion, bool, NthDecl)
  MX_VISIT_BOOL(TagDecl, may_have_out_of_date_definition, getVal97, setVal97, initVal97, MayHaveOutOfDateDefinition, bool, NthDecl)
  MX_VISIT_PSEUDO_LIST(TagDecl, template_parameter_lists, getVal72, setVal72, initVal72, TemplateParameterLists, TemplateParameterList, NthDecl)
  MX_VISIT_DECL_CONTEXT(TagDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_TagDecl
MX_END_VISIT_DECL(TagDecl)

#ifndef MX_ENTER_VISIT_RecordDecl
#  define MX_ENTER_VISIT_RecordDecl MX_ENTER_VISIT_TagDecl
#endif
#ifndef MX_EXIT_VISIT_RecordDecl
#  define MX_EXIT_VISIT_RecordDecl MX_EXIT_VISIT_TagDecl
#endif

MX_BEGIN_VISIT_DECL(RecordDecl)
  MX_ENTER_VISIT_RecordDecl
  MX_VISIT_BASE(RecordDecl, TagDecl)
  MX_VISIT_BOOL(RecordDecl, can_pass_in_registers, getVal98, setVal98, initVal98, CanPassInRegisters, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(RecordDecl, fields, getVal45, setVal45, initVal45, Fields, FieldDecl, NthDecl)
  MX_VISIT_ENUM(RecordDecl, argument_passing_restrictions, getVal79, setVal79, initVal79, ArgumentPassingRestrictions, RecordDeclArgPassingKind, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_flexible_array_member, getVal99, setVal99, initVal99, HasFlexibleArrayMember, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_loaded_fields_from_external_storage, getVal100, setVal100, initVal100, HasLoadedFieldsFromExternalStorage, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_non_trivial_to_primitive_copy_c_union, getVal101, setVal101, initVal101, HasNonTrivialToPrimitiveCopyCUnion, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_non_trivial_to_primitive_default_initialize_c_union, getVal102, setVal102, initVal102, HasNonTrivialToPrimitiveDefaultInitializeCUnion, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_non_trivial_to_primitive_destruct_c_union, getVal103, setVal103, initVal103, HasNonTrivialToPrimitiveDestructCUnion, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_object_member, getVal104, setVal104, initVal104, HasObjectMember, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, has_volatile_member, getVal105, setVal105, initVal105, HasVolatileMember, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_anonymous_struct_or_union, getVal106, setVal106, initVal106, IsAnonymousStructOrUnion, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_captured_record, getVal107, setVal107, initVal107, IsCapturedRecord, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_injected_class_name, getVal108, setVal108, initVal108, IsInjectedClassName, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_lambda, getVal109, setVal109, initVal109, IsLambda, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_ms_struct, getVal110, setVal110, initVal110, IsMsStruct, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_non_trivial_to_primitive_copy, getVal111, setVal111, initVal111, IsNonTrivialToPrimitiveCopy, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_non_trivial_to_primitive_default_initialize, getVal112, setVal112, initVal112, IsNonTrivialToPrimitiveDefaultInitialize, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_non_trivial_to_primitive_destroy, getVal113, setVal113, initVal113, IsNonTrivialToPrimitiveDestroy, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_or_contains_union, getVal114, setVal114, initVal114, IsOrContainsUnion, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, is_parameter_destroyed_in_callee, getVal115, setVal115, initVal115, IsParameterDestroyedInCallee, bool, NthDecl)
  MX_VISIT_BOOL(RecordDecl, may_insert_extra_padding, getVal116, setVal116, initVal116, MayInsertExtraPadding, bool, NthDecl)
  MX_EXIT_VISIT_RecordDecl
MX_END_VISIT_DECL(RecordDecl)

#ifndef MX_ENTER_VISIT_CXXRecordDecl
#  define MX_ENTER_VISIT_CXXRecordDecl MX_ENTER_VISIT_RecordDecl
#endif
#ifndef MX_EXIT_VISIT_CXXRecordDecl
#  define MX_EXIT_VISIT_CXXRecordDecl MX_EXIT_VISIT_RecordDecl
#endif

MX_BEGIN_VISIT_DECL(CXXRecordDecl)
  MX_ENTER_VISIT_CXXRecordDecl
  MX_VISIT_BASE(CXXRecordDecl, RecordDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, allow_const_default_initializer, getVal117, setVal117, initVal117, AllowConstDefaultInitializer, bool, NthDecl)
  MX_VISIT_OPTIONAL_PSEUDO_LIST(CXXRecordDecl, bases, getVal140, setVal140, initVal140, Bases, CXXBaseSpecifier, NthDecl)
  MX_VISIT_OPTIONAL_ENUM(CXXRecordDecl, calculate_inheritance_model, getVal81, setVal81, initVal81, CalculateInheritanceModel, MSInheritanceModel, NthDecl)
  MX_VISIT_ENTITY_LIST(CXXRecordDecl, constructors, getVal56, setVal56, initVal56, Constructors, CXXConstructorDecl, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY_LIST(CXXRecordDecl, friends, getVal171, setVal171, initVal171, Friends, FriendDecl, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, destructor, getVal70, setVal70, initVal70, Destructor, CXXDestructorDecl, NthDecl, DeclUseSelector::DESTRUCTOR)
  MX_VISIT_OPTIONAL_PSEUDO(CXXRecordDecl, generic_lambda_template_parameter_list, getVal142, setVal142, initVal142, GenericLambdaTemplateParameterList, TemplateParameterList, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, instantiated_from_member_class, getVal73, setVal73, initVal73, InstantiatedFromMemberClass, CXXRecordDecl, NthDecl, DeclUseSelector::INSTANTIATED_FROM_MEMBER_CLASS)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, lambda_call_operator, getVal75, setVal75, initVal75, LambdaCallOperator, CXXMethodDecl, NthDecl, DeclUseSelector::LAMBDA_CALL_OPERATOR)
  MX_VISIT_OPTIONAL_ENUM(CXXRecordDecl, lambda_capture_default, getVal82, setVal82, initVal82, LambdaCaptureDefault, LambdaCaptureDefault, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, lambda_context_declaration, getVal77, setVal77, initVal77, LambdaContextDeclaration, Decl, NthDecl, DeclUseSelector::LAMBDA_CONTEXT_DECLARATION)
  MX_VISIT_OPTIONAL_ENTITY_LIST(CXXRecordDecl, lambda_explicit_template_parameters, getVal180, setVal180, initVal180, LambdaExplicitTemplateParameters, NamedDecl, NthDecl)
  MX_VISIT_OPTIONAL_INT(CXXRecordDecl, lambda_mangling_number, getVal181, setVal181, initVal181, LambdaManglingNumber, unsigned, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, lambda_type, getVal80, setVal80, initVal80, LambdaType, Type, NthDecl, TypeUseSelector::LAMBDA_TYPE)
  MX_VISIT_OPTIONAL_ENUM(CXXRecordDecl, ms_inheritance_model, getVal83, setVal83, initVal83, MSInheritanceModel, MSInheritanceModel, NthDecl)
  MX_VISIT_ENUM(CXXRecordDecl, ms_vtor_disp_mode, getVal84, setVal84, initVal84, MSVtorDispMode, MSVtorDispMode, NthDecl)
  MX_VISIT_OPTIONAL_INT(CXXRecordDecl, num_bases, getVal182, setVal182, initVal182, NumBases, unsigned, NthDecl)
  MX_VISIT_OPTIONAL_INT(CXXRecordDecl, num_virtual_bases, getVal183, setVal183, initVal183, NumVirtualBases, unsigned, NthDecl)
  MX_VISIT_OPTIONAL_INT(CXXRecordDecl, odr_hash, getVal184, setVal184, initVal184, ODRHash, unsigned, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, template_instantiation_pattern, getVal85, setVal85, initVal85, TemplateInstantiationPattern, CXXRecordDecl, NthDecl, DeclUseSelector::TEMPLATE_INSTANTIATION_PATTERN)
  MX_VISIT_ENUM(CXXRecordDecl, template_specialization_kind, getVal87, setVal87, initVal87, TemplateSpecializationKind, TemplateSpecializationKind, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_any_dependent_bases, getVal148, setVal148, initVal148, HasAnyDependentBases, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_constexpr_default_constructor, getVal150, setVal150, initVal150, HasConstexprDefaultConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_constexpr_destructor, getVal152, setVal152, initVal152, HasConstexprDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_constexpr_non_copy_move_constructor, getVal154, setVal154, initVal154, HasConstexprNonCopyMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_copy_assignment_with_const_parameter, getVal156, setVal156, initVal156, HasCopyAssignmentWithConstParameter, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_copy_constructor_with_const_parameter, getVal160, setVal160, initVal160, HasCopyConstructorWithConstParameter, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_default_constructor, getVal163, setVal163, initVal163, HasDefaultConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_definition, getVal165, setVal165, initVal165, HasDefinition, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_direct_fields, getVal167, setVal167, initVal167, HasDirectFields, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_friends, getVal169, setVal169, initVal169, HasFriends, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_in_class_initializer, getVal173, setVal173, initVal173, HasInClassInitializer, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_inherited_assignment, getVal176, setVal176, initVal176, HasInheritedAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_inherited_constructor, getVal178, setVal178, initVal178, HasInheritedConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_initializer_method, getVal185, setVal185, initVal185, HasInitializerMethod, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_irrelevant_destructor, getVal187, setVal187, initVal187, HasIrrelevantDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_known_lambda_internal_linkage, getVal189, setVal189, initVal189, HasKnownLambdaInternalLinkage, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_move_assignment, getVal191, setVal191, initVal191, HasMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_move_constructor, getVal193, setVal193, initVal193, HasMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_mutable_fields, getVal195, setVal195, initVal195, HasMutableFields, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_literal_type_fields_or_bases, getVal197, setVal197, initVal197, HasNonLiteralTypeFieldsOrBases, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_copy_assignment, getVal199, setVal199, initVal199, HasNonTrivialCopyAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_copy_constructor, getVal201, setVal201, initVal201, HasNonTrivialCopyConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_copy_constructor_for_call, getVal203, setVal203, initVal203, HasNonTrivialCopyConstructorForCall, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_default_constructor, getVal205, setVal205, initVal205, HasNonTrivialDefaultConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_destructor, getVal207, setVal207, initVal207, HasNonTrivialDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_destructor_for_call, getVal209, setVal209, initVal209, HasNonTrivialDestructorForCall, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_move_assignment, getVal211, setVal211, initVal211, HasNonTrivialMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_move_constructor, getVal213, setVal213, initVal213, HasNonTrivialMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_non_trivial_move_constructor_for_call, getVal215, setVal215, initVal215, HasNonTrivialMoveConstructorForCall, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_private_fields, getVal217, setVal217, initVal217, HasPrivateFields, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_protected_fields, getVal219, setVal219, initVal219, HasProtectedFields, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_simple_copy_assignment, getVal221, setVal221, initVal221, HasSimpleCopyAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_simple_copy_constructor, getVal223, setVal223, initVal223, HasSimpleCopyConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_simple_destructor, getVal225, setVal225, initVal225, HasSimpleDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_simple_move_assignment, getVal227, setVal227, initVal227, HasSimpleMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_simple_move_constructor, getVal229, setVal229, initVal229, HasSimpleMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_copy_assignment, getVal231, setVal231, initVal231, HasTrivialCopyAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_copy_constructor, getVal233, setVal233, initVal233, HasTrivialCopyConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_copy_constructor_for_call, getVal235, setVal235, initVal235, HasTrivialCopyConstructorForCall, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_default_constructor, getVal237, setVal237, initVal237, HasTrivialDefaultConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_destructor, getVal239, setVal239, initVal239, HasTrivialDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_destructor_for_call, getVal241, setVal241, initVal241, HasTrivialDestructorForCall, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_move_assignment, getVal243, setVal243, initVal243, HasTrivialMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_move_constructor, getVal245, setVal245, initVal245, HasTrivialMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_trivial_move_constructor_for_call, getVal247, setVal247, initVal247, HasTrivialMoveConstructorForCall, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_uninitialized_reference_member, getVal249, setVal249, initVal249, HasUninitializedReferenceMember, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_constructor, getVal251, setVal251, initVal251, HasUserDeclaredConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_copy_assignment, getVal253, setVal253, initVal253, HasUserDeclaredCopyAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_copy_constructor, getVal255, setVal255, initVal255, HasUserDeclaredCopyConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_destructor, getVal257, setVal257, initVal257, HasUserDeclaredDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_move_assignment, getVal259, setVal259, initVal259, HasUserDeclaredMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_move_constructor, getVal261, setVal261, initVal261, HasUserDeclaredMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_declared_move_operation, getVal263, setVal263, initVal263, HasUserDeclaredMoveOperation, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_user_provided_default_constructor, getVal265, setVal265, initVal265, HasUserProvidedDefaultConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, has_variant_members, getVal267, setVal267, initVal267, HasVariantMembers, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, implicit_copy_assignment_has_const_parameter, getVal269, setVal269, initVal269, ImplicitCopyAssignmentHasConstParameter, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, implicit_copy_constructor_has_const_parameter, getVal271, setVal271, initVal271, ImplicitCopyConstructorHasConstParameter, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_abstract, getVal273, setVal273, initVal273, IsAbstract, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_aggregate, getVal275, setVal275, initVal275, IsAggregate, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_any_destructor_no_return, getVal277, setVal277, initVal277, IsAnyDestructorNoReturn, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_c_like, getVal279, setVal279, initVal279, IsCLike, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_cxx11_standard_layout, getVal281, setVal281, initVal281, IsCXX11StandardLayout, bool, NthDecl)
  MX_VISIT_BOOL(CXXRecordDecl, is_dependent_lambda, getVal283, setVal283, initVal283, IsDependentLambda, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_dynamic_class, getVal284, setVal284, initVal284, IsDynamicClass, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_effectively_final, getVal286, setVal286, initVal286, IsEffectivelyFinal, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_empty, getVal288, setVal288, initVal288, IsEmpty, bool, NthDecl)
  MX_VISIT_BOOL(CXXRecordDecl, is_generic_lambda, getVal290, setVal290, initVal290, IsGenericLambda, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_interface_like, getVal291, setVal291, initVal291, IsInterfaceLike, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_literal, getVal293, setVal293, initVal293, IsLiteral, bool, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(CXXRecordDecl, is_local_class, getVal125, setVal125, initVal125, IsLocalClass, FunctionDecl, NthDecl, DeclUseSelector::IS_LOCAL_CLASS)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_pod, getVal296, setVal296, initVal296, IsPOD, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_polymorphic, getVal298, setVal298, initVal298, IsPolymorphic, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_standard_layout, getVal300, setVal300, initVal300, IsStandardLayout, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_structural, getVal302, setVal302, initVal302, IsStructural, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_trivial, getVal304, setVal304, initVal304, IsTrivial, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, is_trivially_copyable, getVal306, setVal306, initVal306, IsTriviallyCopyable, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, lambda_is_default_constructible_and_assignable, getVal308, setVal308, initVal308, LambdaIsDefaultConstructibleAndAssignable, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, may_be_abstract, getVal310, setVal310, initVal310, MayBeAbstract, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, may_be_dynamic_class, getVal312, setVal312, initVal312, MayBeDynamicClass, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, may_be_non_dynamic_class, getVal314, setVal314, initVal314, MayBeNonDynamicClass, bool, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY_LIST(CXXRecordDecl, methods, getVal316, setVal316, initVal316, Methods, CXXMethodDecl, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_implicit_copy_assignment, getVal318, setVal318, initVal318, NeedsImplicitCopyAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_implicit_copy_constructor, getVal320, setVal320, initVal320, NeedsImplicitCopyConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_implicit_default_constructor, getVal322, setVal322, initVal322, NeedsImplicitDefaultConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_implicit_destructor, getVal324, setVal324, initVal324, NeedsImplicitDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_implicit_move_assignment, getVal326, setVal326, initVal326, NeedsImplicitMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_implicit_move_constructor, getVal328, setVal328, initVal328, NeedsImplicitMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_overload_resolution_for_copy_assignment, getVal330, setVal330, initVal330, NeedsOverloadResolutionForCopyAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_overload_resolution_for_copy_constructor, getVal332, setVal332, initVal332, NeedsOverloadResolutionForCopyConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_overload_resolution_for_destructor, getVal334, setVal334, initVal334, NeedsOverloadResolutionForDestructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_overload_resolution_for_move_assignment, getVal336, setVal336, initVal336, NeedsOverloadResolutionForMoveAssignment, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, needs_overload_resolution_for_move_constructor, getVal338, setVal338, initVal338, NeedsOverloadResolutionForMoveConstructor, bool, NthDecl)
  MX_VISIT_OPTIONAL_BOOL(CXXRecordDecl, null_field_offset_is_zero, getVal340, setVal340, initVal340, NullFieldOffsetIsZero, bool, NthDecl)
  MX_VISIT_OPTIONAL_PSEUDO_LIST(CXXRecordDecl, virtual_bases, getVal141, setVal141, initVal141, VirtualBases, CXXBaseSpecifier, NthDecl)
  MX_EXIT_VISIT_CXXRecordDecl
MX_END_VISIT_DECL(CXXRecordDecl)

#ifndef MX_ENTER_VISIT_ClassTemplateSpecializationDecl
#  define MX_ENTER_VISIT_ClassTemplateSpecializationDecl MX_ENTER_VISIT_CXXRecordDecl
#endif
#ifndef MX_EXIT_VISIT_ClassTemplateSpecializationDecl
#  define MX_EXIT_VISIT_ClassTemplateSpecializationDecl MX_EXIT_VISIT_CXXRecordDecl
#endif

MX_BEGIN_VISIT_DECL(ClassTemplateSpecializationDecl)
  MX_ENTER_VISIT_ClassTemplateSpecializationDecl
  MX_VISIT_BASE(ClassTemplateSpecializationDecl, CXXRecordDecl)
  MX_VISIT_ENTITY(ClassTemplateSpecializationDecl, extern_token, getVal127, setVal127, initVal127, ExternToken, Token, NthDecl, TokenUseSelector::EXTERN_TOKEN)
  MX_VISIT_ENTITY(ClassTemplateSpecializationDecl, point_of_instantiation, getVal128, setVal128, initVal128, PointOfInstantiation, Token, NthDecl, TokenUseSelector::POINT_OF_INSTANTIATION)
  MX_VISIT_ENUM(ClassTemplateSpecializationDecl, specialization_kind, getVal88, setVal88, initVal88, SpecializationKind, TemplateSpecializationKind, NthDecl)
  MX_VISIT_PSEUDO_LIST(ClassTemplateSpecializationDecl, template_arguments, getVal343, setVal343, initVal343, TemplateArguments, TemplateArgument, NthDecl)
  MX_VISIT_PSEUDO_LIST(ClassTemplateSpecializationDecl, template_instantiation_arguments, getVal344, setVal344, initVal344, TemplateInstantiationArguments, TemplateArgument, NthDecl)
  MX_VISIT_ENTITY(ClassTemplateSpecializationDecl, template_keyword_token, getVal130, setVal130, initVal130, TemplateKeywordToken, Token, NthDecl, TokenUseSelector::TEMPLATE_KEYWORD_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(ClassTemplateSpecializationDecl, type_as_written, getVal131, setVal131, initVal131, TypeAsWritten, Type, NthDecl, TypeUseSelector::TYPE_AS_WRITTEN)
  MX_VISIT_BOOL(ClassTemplateSpecializationDecl, is_class_scope_explicit_specialization, getVal346, setVal346, initVal346, IsClassScopeExplicitSpecialization, bool, NthDecl)
  MX_VISIT_BOOL(ClassTemplateSpecializationDecl, is_explicit_instantiation_or_specialization, getVal347, setVal347, initVal347, IsExplicitInstantiationOrSpecialization, bool, NthDecl)
  MX_VISIT_BOOL(ClassTemplateSpecializationDecl, is_explicit_specialization, getVal348, setVal348, initVal348, IsExplicitSpecialization, bool, NthDecl)
  MX_EXIT_VISIT_ClassTemplateSpecializationDecl
MX_END_VISIT_DECL(ClassTemplateSpecializationDecl)

#ifndef MX_ENTER_VISIT_ClassTemplatePartialSpecializationDecl
#  define MX_ENTER_VISIT_ClassTemplatePartialSpecializationDecl MX_ENTER_VISIT_ClassTemplateSpecializationDecl
#endif
#ifndef MX_EXIT_VISIT_ClassTemplatePartialSpecializationDecl
#  define MX_EXIT_VISIT_ClassTemplatePartialSpecializationDecl MX_EXIT_VISIT_ClassTemplateSpecializationDecl
#endif

MX_BEGIN_VISIT_DECL(ClassTemplatePartialSpecializationDecl)
  MX_ENTER_VISIT_ClassTemplatePartialSpecializationDecl
  MX_EXIT_VISIT_ClassTemplatePartialSpecializationDecl
MX_END_VISIT_DECL(ClassTemplatePartialSpecializationDecl)

#ifndef MX_ENTER_VISIT_EnumDecl
#  define MX_ENTER_VISIT_EnumDecl MX_ENTER_VISIT_TagDecl
#endif
#ifndef MX_EXIT_VISIT_EnumDecl
#  define MX_EXIT_VISIT_EnumDecl MX_EXIT_VISIT_TagDecl
#endif

MX_BEGIN_VISIT_DECL(EnumDecl)
  MX_ENTER_VISIT_EnumDecl
  MX_VISIT_BASE(EnumDecl, TagDecl)
  MX_VISIT_ENTITY_LIST(EnumDecl, enumerators, getVal45, setVal45, initVal45, Enumerators, EnumConstantDecl, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(EnumDecl, instantiated_from_member_enum, getVal70, setVal70, initVal70, InstantiatedFromMemberEnum, EnumDecl, NthDecl, DeclUseSelector::INSTANTIATED_FROM_MEMBER_ENUM)
  MX_VISIT_OPTIONAL_ENTITY(EnumDecl, integer_type, getVal73, setVal73, initVal73, IntegerType, Type, NthDecl, TypeUseSelector::INTEGER_TYPE)
  MX_VISIT_OPTIONAL_INT(EnumDecl, odr_hash, getVal142, setVal142, initVal142, ODRHash, unsigned, NthDecl)
  MX_VISIT_ENTITY(EnumDecl, promotion_type, getVal80, setVal80, initVal80, PromotionType, Type, NthDecl, TypeUseSelector::PROMOTION_TYPE)
  MX_VISIT_OPTIONAL_ENTITY(EnumDecl, template_instantiation_pattern, getVal85, setVal85, initVal85, TemplateInstantiationPattern, EnumDecl, NthDecl, DeclUseSelector::TEMPLATE_INSTANTIATION_PATTERN)
  MX_VISIT_ENUM(EnumDecl, template_specialization_kind, getVal79, setVal79, initVal79, TemplateSpecializationKind, TemplateSpecializationKind, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_closed, getVal102, setVal102, initVal102, IsClosed, bool, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_closed_flag, getVal103, setVal103, initVal103, IsClosedFlag, bool, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_closed_non_flag, getVal104, setVal104, initVal104, IsClosedNonFlag, bool, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_complete, getVal105, setVal105, initVal105, IsComplete, bool, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_fixed, getVal106, setVal106, initVal106, IsFixed, bool, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_scoped, getVal107, setVal107, initVal107, IsScoped, bool, NthDecl)
  MX_VISIT_BOOL(EnumDecl, is_scoped_using_class_tag, getVal108, setVal108, initVal108, IsScopedUsingClassTag, bool, NthDecl)
  MX_EXIT_VISIT_EnumDecl
MX_END_VISIT_DECL(EnumDecl)

#ifndef MX_ENTER_VISIT_UnresolvedUsingTypenameDecl
#  define MX_ENTER_VISIT_UnresolvedUsingTypenameDecl MX_ENTER_VISIT_TypeDecl
#endif
#ifndef MX_EXIT_VISIT_UnresolvedUsingTypenameDecl
#  define MX_EXIT_VISIT_UnresolvedUsingTypenameDecl MX_EXIT_VISIT_TypeDecl
#endif

MX_BEGIN_VISIT_DECL(UnresolvedUsingTypenameDecl)
  MX_ENTER_VISIT_UnresolvedUsingTypenameDecl
  MX_VISIT_BASE(UnresolvedUsingTypenameDecl, TypeDecl)
  MX_VISIT_ENTITY(UnresolvedUsingTypenameDecl, ellipsis_token, getVal51, setVal51, initVal51, EllipsisToken, Token, NthDecl, TokenUseSelector::ELLIPSIS_TOKEN)
  MX_VISIT_ENTITY(UnresolvedUsingTypenameDecl, typename_token, getVal52, setVal52, initVal52, TypenameToken, Token, NthDecl, TokenUseSelector::TYPENAME_TOKEN)
  MX_VISIT_ENTITY(UnresolvedUsingTypenameDecl, using_token, getVal60, setVal60, initVal60, UsingToken, Token, NthDecl, TokenUseSelector::USING_TOKEN)
  MX_VISIT_BOOL(UnresolvedUsingTypenameDecl, is_pack_expansion, getVal68, setVal68, initVal68, IsPackExpansion, bool, NthDecl)
  MX_EXIT_VISIT_UnresolvedUsingTypenameDecl
MX_END_VISIT_DECL(UnresolvedUsingTypenameDecl)

#ifndef MX_ENTER_VISIT_TypedefNameDecl
#  define MX_ENTER_VISIT_TypedefNameDecl MX_ENTER_VISIT_TypeDecl
#endif
#ifndef MX_EXIT_VISIT_TypedefNameDecl
#  define MX_EXIT_VISIT_TypedefNameDecl MX_EXIT_VISIT_TypeDecl
#endif

MX_BEGIN_VISIT_DECL(TypedefNameDecl)
  MX_ENTER_VISIT_TypedefNameDecl
  MX_VISIT_BASE(TypedefNameDecl, TypeDecl)
  MX_VISIT_OPTIONAL_ENTITY(TypedefNameDecl, anonymous_declaration_with_typedef_name, getVal51, setVal51, initVal51, AnonymousDeclarationWithTypedefName, TagDecl, NthDecl, DeclUseSelector::ANONYMOUS_DECLARATION_WITH_TYPEDEF_NAME)
  MX_VISIT_ENTITY(TypedefNameDecl, underlying_type, getVal52, setVal52, initVal52, UnderlyingType, Type, NthDecl, TypeUseSelector::UNDERLYING_TYPE)
  MX_VISIT_BOOL(TypedefNameDecl, is_moded, getVal69, setVal69, initVal69, IsModed, bool, NthDecl)
  MX_VISIT_BOOL(TypedefNameDecl, is_transparent_tag, getVal74, setVal74, initVal74, IsTransparentTag, bool, NthDecl)
  MX_EXIT_VISIT_TypedefNameDecl
MX_END_VISIT_DECL(TypedefNameDecl)

#ifndef MX_ENTER_VISIT_TypedefDecl
#  define MX_ENTER_VISIT_TypedefDecl MX_ENTER_VISIT_TypedefNameDecl
#endif
#ifndef MX_EXIT_VISIT_TypedefDecl
#  define MX_EXIT_VISIT_TypedefDecl MX_EXIT_VISIT_TypedefNameDecl
#endif

MX_BEGIN_VISIT_DECL(TypedefDecl)
  MX_ENTER_VISIT_TypedefDecl
  MX_VISIT_BASE(TypedefDecl, TypedefNameDecl)
  MX_EXIT_VISIT_TypedefDecl
MX_END_VISIT_DECL(TypedefDecl)

#ifndef MX_ENTER_VISIT_TypeAliasDecl
#  define MX_ENTER_VISIT_TypeAliasDecl MX_ENTER_VISIT_TypedefNameDecl
#endif
#ifndef MX_EXIT_VISIT_TypeAliasDecl
#  define MX_EXIT_VISIT_TypeAliasDecl MX_EXIT_VISIT_TypedefNameDecl
#endif

MX_BEGIN_VISIT_DECL(TypeAliasDecl)
  MX_ENTER_VISIT_TypeAliasDecl
  MX_VISIT_BASE(TypeAliasDecl, TypedefNameDecl)
  MX_VISIT_OPTIONAL_ENTITY(TypeAliasDecl, described_alias_template, getVal60, setVal60, initVal60, DescribedAliasTemplate, TypeAliasTemplateDecl, NthDecl, DeclUseSelector::DESCRIBED_ALIAS_TEMPLATE)
  MX_EXIT_VISIT_TypeAliasDecl
MX_END_VISIT_DECL(TypeAliasDecl)

#ifndef MX_ENTER_VISIT_ObjCTypeParamDecl
#  define MX_ENTER_VISIT_ObjCTypeParamDecl MX_ENTER_VISIT_TypedefNameDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCTypeParamDecl
#  define MX_EXIT_VISIT_ObjCTypeParamDecl MX_EXIT_VISIT_TypedefNameDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCTypeParamDecl)
  MX_ENTER_VISIT_ObjCTypeParamDecl
  MX_VISIT_BASE(ObjCTypeParamDecl, TypedefNameDecl)
  MX_VISIT_ENTITY(ObjCTypeParamDecl, colon_token, getVal60, setVal60, initVal60, ColonToken, Token, NthDecl, TokenUseSelector::COLON_TOKEN)
  MX_VISIT_ENUM(ObjCTypeParamDecl, variance, getVal71, setVal71, initVal71, Variance, ObjCTypeParamVariance, NthDecl)
  MX_VISIT_ENTITY(ObjCTypeParamDecl, variance_token, getVal61, setVal61, initVal61, VarianceToken, Token, NthDecl, TokenUseSelector::VARIANCE_TOKEN)
  MX_VISIT_BOOL(ObjCTypeParamDecl, has_explicit_bound, getVal76, setVal76, initVal76, HasExplicitBound, bool, NthDecl)
  MX_EXIT_VISIT_ObjCTypeParamDecl
MX_END_VISIT_DECL(ObjCTypeParamDecl)

#ifndef MX_ENTER_VISIT_TemplateDecl
#  define MX_ENTER_VISIT_TemplateDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_TemplateDecl
#  define MX_EXIT_VISIT_TemplateDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(TemplateDecl)
  MX_ENTER_VISIT_TemplateDecl
  MX_EXIT_VISIT_TemplateDecl
MX_END_VISIT_DECL(TemplateDecl)

#ifndef MX_ENTER_VISIT_RedeclarableTemplateDecl
#  define MX_ENTER_VISIT_RedeclarableTemplateDecl MX_ENTER_VISIT_TemplateDecl
#endif
#ifndef MX_EXIT_VISIT_RedeclarableTemplateDecl
#  define MX_EXIT_VISIT_RedeclarableTemplateDecl MX_EXIT_VISIT_TemplateDecl
#endif

MX_BEGIN_VISIT_DECL(RedeclarableTemplateDecl)
  MX_ENTER_VISIT_RedeclarableTemplateDecl
  MX_EXIT_VISIT_RedeclarableTemplateDecl
MX_END_VISIT_DECL(RedeclarableTemplateDecl)

#ifndef MX_ENTER_VISIT_FunctionTemplateDecl
#  define MX_ENTER_VISIT_FunctionTemplateDecl MX_ENTER_VISIT_RedeclarableTemplateDecl
#endif
#ifndef MX_EXIT_VISIT_FunctionTemplateDecl
#  define MX_EXIT_VISIT_FunctionTemplateDecl MX_EXIT_VISIT_RedeclarableTemplateDecl
#endif

MX_BEGIN_VISIT_DECL(FunctionTemplateDecl)
  MX_ENTER_VISIT_FunctionTemplateDecl
  MX_EXIT_VISIT_FunctionTemplateDecl
MX_END_VISIT_DECL(FunctionTemplateDecl)

#ifndef MX_ENTER_VISIT_ClassTemplateDecl
#  define MX_ENTER_VISIT_ClassTemplateDecl MX_ENTER_VISIT_RedeclarableTemplateDecl
#endif
#ifndef MX_EXIT_VISIT_ClassTemplateDecl
#  define MX_EXIT_VISIT_ClassTemplateDecl MX_EXIT_VISIT_RedeclarableTemplateDecl
#endif

MX_BEGIN_VISIT_DECL(ClassTemplateDecl)
  MX_ENTER_VISIT_ClassTemplateDecl
  MX_EXIT_VISIT_ClassTemplateDecl
MX_END_VISIT_DECL(ClassTemplateDecl)

#ifndef MX_ENTER_VISIT_VarTemplateDecl
#  define MX_ENTER_VISIT_VarTemplateDecl MX_ENTER_VISIT_RedeclarableTemplateDecl
#endif
#ifndef MX_EXIT_VISIT_VarTemplateDecl
#  define MX_EXIT_VISIT_VarTemplateDecl MX_EXIT_VISIT_RedeclarableTemplateDecl
#endif

MX_BEGIN_VISIT_DECL(VarTemplateDecl)
  MX_ENTER_VISIT_VarTemplateDecl
  MX_EXIT_VISIT_VarTemplateDecl
MX_END_VISIT_DECL(VarTemplateDecl)

#ifndef MX_ENTER_VISIT_TypeAliasTemplateDecl
#  define MX_ENTER_VISIT_TypeAliasTemplateDecl MX_ENTER_VISIT_RedeclarableTemplateDecl
#endif
#ifndef MX_EXIT_VISIT_TypeAliasTemplateDecl
#  define MX_EXIT_VISIT_TypeAliasTemplateDecl MX_EXIT_VISIT_RedeclarableTemplateDecl
#endif

MX_BEGIN_VISIT_DECL(TypeAliasTemplateDecl)
  MX_ENTER_VISIT_TypeAliasTemplateDecl
  MX_VISIT_BASE(TypeAliasTemplateDecl, RedeclarableTemplateDecl)
  MX_VISIT_OPTIONAL_ENTITY(TypeAliasTemplateDecl, instantiated_from_member_template, getVal50, setVal50, initVal50, InstantiatedFromMemberTemplate, TypeAliasTemplateDecl, NthDecl, DeclUseSelector::INSTANTIATED_FROM_MEMBER_TEMPLATE)
  MX_VISIT_ENTITY(TypeAliasTemplateDecl, templated_declaration, getVal51, setVal51, initVal51, TemplatedDeclaration, TypeAliasDecl, NthDecl, DeclUseSelector::TEMPLATED_DECLARATION)
  MX_EXIT_VISIT_TypeAliasTemplateDecl
MX_END_VISIT_DECL(TypeAliasTemplateDecl)

#ifndef MX_ENTER_VISIT_ConceptDecl
#  define MX_ENTER_VISIT_ConceptDecl MX_ENTER_VISIT_TemplateDecl
#endif
#ifndef MX_EXIT_VISIT_ConceptDecl
#  define MX_EXIT_VISIT_ConceptDecl MX_EXIT_VISIT_TemplateDecl
#endif

MX_BEGIN_VISIT_DECL(ConceptDecl)
  MX_ENTER_VISIT_ConceptDecl
  MX_VISIT_BASE(ConceptDecl, TemplateDecl)
  MX_VISIT_ENTITY(ConceptDecl, constraint_expression, getVal50, setVal50, initVal50, ConstraintExpression, Expr, NthDecl, StmtUseSelector::CONSTRAINT_EXPRESSION)
  MX_VISIT_BOOL(ConceptDecl, is_type_concept, getVal67, setVal67, initVal67, IsTypeConcept, bool, NthDecl)
  MX_EXIT_VISIT_ConceptDecl
MX_END_VISIT_DECL(ConceptDecl)

#ifndef MX_ENTER_VISIT_BuiltinTemplateDecl
#  define MX_ENTER_VISIT_BuiltinTemplateDecl MX_ENTER_VISIT_TemplateDecl
#endif
#ifndef MX_EXIT_VISIT_BuiltinTemplateDecl
#  define MX_EXIT_VISIT_BuiltinTemplateDecl MX_EXIT_VISIT_TemplateDecl
#endif

MX_BEGIN_VISIT_DECL(BuiltinTemplateDecl)
  MX_ENTER_VISIT_BuiltinTemplateDecl
  MX_EXIT_VISIT_BuiltinTemplateDecl
MX_END_VISIT_DECL(BuiltinTemplateDecl)

#ifndef MX_ENTER_VISIT_TemplateTemplateParmDecl
#  define MX_ENTER_VISIT_TemplateTemplateParmDecl MX_ENTER_VISIT_TemplateDecl
#endif
#ifndef MX_EXIT_VISIT_TemplateTemplateParmDecl
#  define MX_EXIT_VISIT_TemplateTemplateParmDecl MX_EXIT_VISIT_TemplateDecl
#endif

MX_BEGIN_VISIT_DECL(TemplateTemplateParmDecl)
  MX_ENTER_VISIT_TemplateTemplateParmDecl
  MX_EXIT_VISIT_TemplateTemplateParmDecl
MX_END_VISIT_DECL(TemplateTemplateParmDecl)

#ifndef MX_ENTER_VISIT_ObjCPropertyDecl
#  define MX_ENTER_VISIT_ObjCPropertyDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCPropertyDecl
#  define MX_EXIT_VISIT_ObjCPropertyDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCPropertyDecl)
  MX_ENTER_VISIT_ObjCPropertyDecl
  MX_VISIT_BASE(ObjCPropertyDecl, NamedDecl)
  MX_VISIT_ENTITY(ObjCPropertyDecl, at_token, getVal50, setVal50, initVal50, AtToken, Token, NthDecl, TokenUseSelector::AT_TOKEN)
  MX_VISIT_ENTITY(ObjCPropertyDecl, getter_method_declaration, getVal51, setVal51, initVal51, GetterMethodDeclaration, ObjCMethodDecl, NthDecl, DeclUseSelector::GETTER_METHOD_DECLARATION)
  MX_VISIT_ENTITY(ObjCPropertyDecl, getter_name_token, getVal52, setVal52, initVal52, GetterNameToken, Token, NthDecl, TokenUseSelector::GETTER_NAME_TOKEN)
  MX_VISIT_ENTITY(ObjCPropertyDecl, l_paren_token, getVal60, setVal60, initVal60, LParenToken, Token, NthDecl, TokenUseSelector::L_PAREN_TOKEN)
  MX_VISIT_ENUM(ObjCPropertyDecl, property_implementation, getVal71, setVal71, initVal71, PropertyImplementation, ObjCPropertyDeclPropertyControl, NthDecl)
  MX_VISIT_ENTITY(ObjCPropertyDecl, property_instance_variable_declaration, getVal61, setVal61, initVal61, PropertyInstanceVariableDeclaration, ObjCIvarDecl, NthDecl, DeclUseSelector::PROPERTY_INSTANCE_VARIABLE_DECLARATION)
  MX_VISIT_ENUM(ObjCPropertyDecl, query_kind, getVal79, setVal79, initVal79, QueryKind, ObjCPropertyQueryKind, NthDecl)
  MX_VISIT_ENUM(ObjCPropertyDecl, setter_kind, getVal81, setVal81, initVal81, SetterKind, ObjCPropertyDeclSetterKind, NthDecl)
  MX_VISIT_ENTITY(ObjCPropertyDecl, setter_method_declaration, getVal62, setVal62, initVal62, SetterMethodDeclaration, ObjCMethodDecl, NthDecl, DeclUseSelector::SETTER_METHOD_DECLARATION)
  MX_VISIT_ENTITY(ObjCPropertyDecl, setter_name_token, getVal70, setVal70, initVal70, SetterNameToken, Token, NthDecl, TokenUseSelector::SETTER_NAME_TOKEN)
  MX_VISIT_ENTITY(ObjCPropertyDecl, type, getVal73, setVal73, initVal73, Type, Type, NthDecl, TypeUseSelector::TYPE)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_atomic, getVal67, setVal67, initVal67, IsAtomic, bool, NthDecl)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_class_property, getVal68, setVal68, initVal68, IsClassProperty, bool, NthDecl)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_direct_property, getVal69, setVal69, initVal69, IsDirectProperty, bool, NthDecl)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_instance_property, getVal74, setVal74, initVal74, IsInstanceProperty, bool, NthDecl)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_optional, getVal76, setVal76, initVal76, IsOptional, bool, NthDecl)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_read_only, getVal78, setVal78, initVal78, IsReadOnly, bool, NthDecl)
  MX_VISIT_BOOL(ObjCPropertyDecl, is_retaining, getVal86, setVal86, initVal86, IsRetaining, bool, NthDecl)
  MX_EXIT_VISIT_ObjCPropertyDecl
MX_END_VISIT_DECL(ObjCPropertyDecl)

#ifndef MX_ENTER_VISIT_ObjCMethodDecl
#  define MX_ENTER_VISIT_ObjCMethodDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCMethodDecl
#  define MX_EXIT_VISIT_ObjCMethodDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCMethodDecl)
  MX_ENTER_VISIT_ObjCMethodDecl
  MX_VISIT_BASE(ObjCMethodDecl, NamedDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, defined_in_ns_object, getVal67, setVal67, initVal67, DefinedInNSObject, bool, NthDecl)
  MX_VISIT_ENTITY(ObjCMethodDecl, find_property_declaration, getVal50, setVal50, initVal50, FindPropertyDeclaration, ObjCPropertyDecl, NthDecl, DeclUseSelector::FIND_PROPERTY_DECLARATION)
  MX_VISIT_ENTITY(ObjCMethodDecl, category, getVal51, setVal51, initVal51, Category, ObjCCategoryDecl, NthDecl, DeclUseSelector::CATEGORY)
  MX_VISIT_ENTITY(ObjCMethodDecl, class_interface, getVal52, setVal52, initVal52, ClassInterface, ObjCInterfaceDecl, NthDecl, DeclUseSelector::CLASS_INTERFACE)
  MX_VISIT_ENTITY(ObjCMethodDecl, command_declaration, getVal60, setVal60, initVal60, CommandDeclaration, ImplicitParamDecl, NthDecl, DeclUseSelector::COMMAND_DECLARATION)
  MX_VISIT_ENTITY(ObjCMethodDecl, declarator_end_token, getVal61, setVal61, initVal61, DeclaratorEndToken, Token, NthDecl, TokenUseSelector::DECLARATOR_END_TOKEN)
  MX_VISIT_ENUM(ObjCMethodDecl, implementation_control, getVal71, setVal71, initVal71, ImplementationControl, ObjCMethodDeclImplementationControl, NthDecl)
  MX_VISIT_ENUM(ObjCMethodDecl, method_family, getVal79, setVal79, initVal79, MethodFamily, ObjCMethodFamily, NthDecl)
  MX_VISIT_ENUM(ObjCMethodDecl, obj_c_decl_qualifier, getVal81, setVal81, initVal81, ObjCDeclQualifier, DeclObjCDeclQualifier, NthDecl)
  MX_VISIT_ENTITY(ObjCMethodDecl, return_type, getVal62, setVal62, initVal62, ReturnType, Type, NthDecl, TypeUseSelector::RETURN_TYPE)
  MX_VISIT_ENTITY(ObjCMethodDecl, selector_start_token, getVal75, setVal75, initVal75, SelectorStartToken, Token, NthDecl, TokenUseSelector::SELECTOR_START_TOKEN)
  MX_VISIT_ENTITY(ObjCMethodDecl, self_declaration, getVal77, setVal77, initVal77, SelfDeclaration, ImplicitParamDecl, NthDecl, DeclUseSelector::SELF_DECLARATION)
  MX_VISIT_BOOL(ObjCMethodDecl, has_parameter_destroyed_in_callee, getVal68, setVal68, initVal68, HasParameterDestroyedInCallee, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, has_redeclaration, getVal69, setVal69, initVal69, HasRedeclaration, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, has_related_result_type, getVal74, setVal74, initVal74, HasRelatedResultType, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, has_skipped_body, getVal76, setVal76, initVal76, HasSkippedBody, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_class_method, getVal78, setVal78, initVal78, IsClassMethod, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_defined, getVal86, setVal86, initVal86, IsDefined, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_designated_initializer_for_the_interface, getVal89, setVal89, initVal89, IsDesignatedInitializerForTheInterface, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_direct_method, getVal90, setVal90, initVal90, IsDirectMethod, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_instance_method, getVal91, setVal91, initVal91, IsInstanceMethod, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_optional, getVal92, setVal92, initVal92, IsOptional, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_overriding, getVal93, setVal93, initVal93, IsOverriding, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_property_accessor, getVal94, setVal94, initVal94, IsPropertyAccessor, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_redeclaration, getVal95, setVal95, initVal95, IsRedeclaration, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_synthesized_accessor_stub, getVal96, setVal96, initVal96, IsSynthesizedAccessorStub, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_definition, getVal97, setVal97, initVal97, IsThisDeclarationADefinition, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_this_declaration_a_designated_initializer, getVal98, setVal98, initVal98, IsThisDeclarationADesignatedInitializer, bool, NthDecl)
  MX_VISIT_BOOL(ObjCMethodDecl, is_variadic, getVal99, setVal99, initVal99, IsVariadic, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCMethodDecl, parameters, getVal44, setVal44, initVal44, Parameters, ParmVarDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCMethodDecl, selector_tokens, getVal45, setVal45, initVal45, SelectorTokens, Token, NthDecl)
  MX_VISIT_DECL_CONTEXT(ObjCMethodDecl, declarations_in_context, getVal56, setVal56, initVal56, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_ObjCMethodDecl
MX_END_VISIT_DECL(ObjCMethodDecl)

#ifndef MX_ENTER_VISIT_ObjCContainerDecl
#  define MX_ENTER_VISIT_ObjCContainerDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCContainerDecl
#  define MX_EXIT_VISIT_ObjCContainerDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCContainerDecl)
  MX_ENTER_VISIT_ObjCContainerDecl
  MX_VISIT_BASE(ObjCContainerDecl, NamedDecl)
  MX_VISIT_ENTITY_LIST(ObjCContainerDecl, class_methods, getVal44, setVal44, initVal44, ClassMethods, ObjCMethodDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCContainerDecl, class_properties, getVal45, setVal45, initVal45, ClassProperties, ObjCPropertyDecl, NthDecl)
  MX_VISIT_ENTITY(ObjCContainerDecl, at_start_token, getVal52, setVal52, initVal52, AtStartToken, Token, NthDecl, TokenUseSelector::AT_START_TOKEN)
  MX_VISIT_ENTITY_LIST(ObjCContainerDecl, instance_methods, getVal56, setVal56, initVal56, InstanceMethods, ObjCMethodDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCContainerDecl, instance_properties, getVal171, setVal171, initVal171, InstanceProperties, ObjCPropertyDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCContainerDecl, methods, getVal180, setVal180, initVal180, Methods, ObjCMethodDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCContainerDecl, properties, getVal316, setVal316, initVal316, Properties, ObjCPropertyDecl, NthDecl)
  MX_VISIT_DECL_CONTEXT(ObjCContainerDecl, declarations_in_context, getVal349, setVal349, initVal349, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_ObjCContainerDecl
MX_END_VISIT_DECL(ObjCContainerDecl)

#ifndef MX_ENTER_VISIT_ObjCCategoryDecl
#  define MX_ENTER_VISIT_ObjCCategoryDecl MX_ENTER_VISIT_ObjCContainerDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCCategoryDecl
#  define MX_EXIT_VISIT_ObjCCategoryDecl MX_EXIT_VISIT_ObjCContainerDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCCategoryDecl)
  MX_ENTER_VISIT_ObjCCategoryDecl
  MX_VISIT_BASE(ObjCCategoryDecl, ObjCContainerDecl)
  MX_VISIT_BOOL(ObjCCategoryDecl, is_class_extension, getVal67, setVal67, initVal67, IsClassExtension, bool, NthDecl)
  MX_VISIT_ENTITY(ObjCCategoryDecl, category_name_token, getVal60, setVal60, initVal60, CategoryNameToken, Token, NthDecl, TokenUseSelector::CATEGORY_NAME_TOKEN)
  MX_VISIT_ENTITY(ObjCCategoryDecl, class_interface, getVal61, setVal61, initVal61, ClassInterface, ObjCInterfaceDecl, NthDecl, DeclUseSelector::CLASS_INTERFACE)
  MX_VISIT_ENTITY(ObjCCategoryDecl, implementation, getVal62, setVal62, initVal62, Implementation, ObjCCategoryImplDecl, NthDecl, DeclUseSelector::IMPLEMENTATION)
  MX_VISIT_ENTITY(ObjCCategoryDecl, instance_variable_l_brace_token, getVal70, setVal70, initVal70, InstanceVariableLBraceToken, Token, NthDecl, TokenUseSelector::INSTANCE_VARIABLE_L_BRACE_TOKEN)
  MX_VISIT_ENTITY(ObjCCategoryDecl, instance_variable_r_brace_token, getVal73, setVal73, initVal73, InstanceVariableRBraceToken, Token, NthDecl, TokenUseSelector::INSTANCE_VARIABLE_R_BRACE_TOKEN)
  MX_VISIT_ENTITY(ObjCCategoryDecl, next_class_category, getVal75, setVal75, initVal75, NextClassCategory, ObjCCategoryDecl, NthDecl, DeclUseSelector::NEXT_CLASS_CATEGORY)
  MX_VISIT_ENTITY_LIST(ObjCCategoryDecl, instance_variables, getVal350, setVal350, initVal350, InstanceVariables, ObjCIvarDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCCategoryDecl, protocol_tokens, getVal351, setVal351, initVal351, ProtocolTokens, Token, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCCategoryDecl, protocols, getVal352, setVal352, initVal352, Protocols, ObjCProtocolDecl, NthDecl)
  MX_EXIT_VISIT_ObjCCategoryDecl
MX_END_VISIT_DECL(ObjCCategoryDecl)

#ifndef MX_ENTER_VISIT_ObjCProtocolDecl
#  define MX_ENTER_VISIT_ObjCProtocolDecl MX_ENTER_VISIT_ObjCContainerDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCProtocolDecl
#  define MX_EXIT_VISIT_ObjCProtocolDecl MX_EXIT_VISIT_ObjCContainerDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCProtocolDecl)
  MX_ENTER_VISIT_ObjCProtocolDecl
  MX_VISIT_BASE(ObjCProtocolDecl, ObjCContainerDecl)
  MX_VISIT_TEXT(ObjCProtocolDecl, obj_c_runtime_name_as_string, getVal66, setVal66, initVal66, ObjCRuntimeNameAsString, basic_string_view, NthDecl)
  MX_VISIT_BOOL(ObjCProtocolDecl, has_definition, getVal67, setVal67, initVal67, HasDefinition, bool, NthDecl)
  MX_VISIT_BOOL(ObjCProtocolDecl, is_non_runtime_protocol, getVal68, setVal68, initVal68, IsNonRuntimeProtocol, bool, NthDecl)
  MX_VISIT_BOOL(ObjCProtocolDecl, is_definition, getVal69, setVal69, initVal69, IsThisDeclarationADefinition, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCProtocolDecl, protocol_tokens, getVal350, setVal350, initVal350, ProtocolTokens, Token, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCProtocolDecl, protocols, getVal351, setVal351, initVal351, Protocols, ObjCProtocolDecl, NthDecl)
  MX_EXIT_VISIT_ObjCProtocolDecl
MX_END_VISIT_DECL(ObjCProtocolDecl)

#ifndef MX_ENTER_VISIT_ObjCInterfaceDecl
#  define MX_ENTER_VISIT_ObjCInterfaceDecl MX_ENTER_VISIT_ObjCContainerDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCInterfaceDecl
#  define MX_EXIT_VISIT_ObjCInterfaceDecl MX_EXIT_VISIT_ObjCContainerDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCInterfaceDecl)
  MX_ENTER_VISIT_ObjCInterfaceDecl
  MX_VISIT_BASE(ObjCInterfaceDecl, ObjCContainerDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, all_referenced_protocols, getVal350, setVal350, initVal350, AllReferencedProtocols, ObjCProtocolDecl, NthDecl)
  MX_VISIT_BOOL(ObjCInterfaceDecl, declares_or_inherits_designated_initializers, getVal67, setVal67, initVal67, DeclaresOrInheritsDesignatedInitializers, bool, NthDecl)
  MX_VISIT_ENTITY(ObjCInterfaceDecl, end_of_definition_token, getVal60, setVal60, initVal60, EndOfDefinitionToken, Token, NthDecl, TokenUseSelector::END_OF_DEFINITION_TOKEN)
  MX_VISIT_ENTITY(ObjCInterfaceDecl, implementation, getVal61, setVal61, initVal61, Implementation, ObjCImplementationDecl, NthDecl, DeclUseSelector::IMPLEMENTATION)
  MX_VISIT_TEXT(ObjCInterfaceDecl, obj_c_runtime_name_as_string, getVal66, setVal66, initVal66, ObjCRuntimeNameAsString, basic_string_view, NthDecl)
  MX_VISIT_OPTIONAL_ENTITY(ObjCInterfaceDecl, super_class, getVal62, setVal62, initVal62, SuperClass, ObjCInterfaceDecl, NthDecl, DeclUseSelector::SUPER_CLASS)
  MX_VISIT_ENTITY(ObjCInterfaceDecl, super_class_token, getVal70, setVal70, initVal70, SuperClassToken, Token, NthDecl, TokenUseSelector::SUPER_CLASS_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(ObjCInterfaceDecl, super_class_type, getVal73, setVal73, initVal73, SuperClassTypeInfo, Type, NthDecl, TypeUseSelector::SUPER_CLASS_TYPE)
  MX_VISIT_ENTITY(ObjCInterfaceDecl, type_for_declaration, getVal75, setVal75, initVal75, TypeForDeclaration, Type, NthDecl, TypeUseSelector::TYPE_FOR_DECLARATION)
  MX_VISIT_BOOL(ObjCInterfaceDecl, has_definition, getVal74, setVal74, initVal74, HasDefinition, bool, NthDecl)
  MX_VISIT_BOOL(ObjCInterfaceDecl, has_designated_initializers, getVal76, setVal76, initVal76, HasDesignatedInitializers, bool, NthDecl)
  MX_VISIT_BOOL(ObjCInterfaceDecl, is_arc_weakref_unavailable, getVal78, setVal78, initVal78, IsArcWeakrefUnavailable, bool, NthDecl)
  MX_VISIT_BOOL(ObjCInterfaceDecl, is_implicit_interface_declaration, getVal86, setVal86, initVal86, IsImplicitInterfaceDeclaration, bool, NthDecl)
  MX_VISIT_ENTITY(ObjCInterfaceDecl, is_obj_c_requires_property_definitions, getVal77, setVal77, initVal77, IsObjCRequiresPropertyDefinitions, ObjCInterfaceDecl, NthDecl, DeclUseSelector::IS_OBJ_C_REQUIRES_PROPERTY_DEFINITIONS)
  MX_VISIT_BOOL(ObjCInterfaceDecl, is_definition, getVal89, setVal89, initVal89, IsThisDeclarationADefinition, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, instance_variables, getVal351, setVal351, initVal351, InstanceVariables, ObjCIvarDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, known_categories, getVal352, setVal352, initVal352, KnownCategories, ObjCCategoryDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, known_extensions, getVal353, setVal353, initVal353, KnownExtensions, ObjCCategoryDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, protocol_tokens, getVal354, setVal354, initVal354, ProtocolTokens, Token, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, protocols, getVal355, setVal355, initVal355, Protocols, ObjCProtocolDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, visible_categories, getVal356, setVal356, initVal356, VisibleCategories, ObjCCategoryDecl, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCInterfaceDecl, visible_extensions, getVal357, setVal357, initVal357, VisibleExtensions, ObjCCategoryDecl, NthDecl)
  MX_EXIT_VISIT_ObjCInterfaceDecl
MX_END_VISIT_DECL(ObjCInterfaceDecl)

#ifndef MX_ENTER_VISIT_ObjCImplDecl
#  define MX_ENTER_VISIT_ObjCImplDecl MX_ENTER_VISIT_ObjCContainerDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCImplDecl
#  define MX_EXIT_VISIT_ObjCImplDecl MX_EXIT_VISIT_ObjCContainerDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCImplDecl)
  MX_ENTER_VISIT_ObjCImplDecl
  MX_VISIT_BASE(ObjCImplDecl, ObjCContainerDecl)
  MX_VISIT_ENTITY(ObjCImplDecl, class_interface, getVal60, setVal60, initVal60, ClassInterface, ObjCInterfaceDecl, NthDecl, DeclUseSelector::CLASS_INTERFACE)
  MX_VISIT_ENTITY_LIST(ObjCImplDecl, property_implementations, getVal350, setVal350, initVal350, PropertyImplementations, ObjCPropertyImplDecl, NthDecl)
  MX_EXIT_VISIT_ObjCImplDecl
MX_END_VISIT_DECL(ObjCImplDecl)

#ifndef MX_ENTER_VISIT_ObjCCategoryImplDecl
#  define MX_ENTER_VISIT_ObjCCategoryImplDecl MX_ENTER_VISIT_ObjCImplDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCCategoryImplDecl
#  define MX_EXIT_VISIT_ObjCCategoryImplDecl MX_EXIT_VISIT_ObjCImplDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCCategoryImplDecl)
  MX_ENTER_VISIT_ObjCCategoryImplDecl
  MX_VISIT_BASE(ObjCCategoryImplDecl, ObjCImplDecl)
  MX_VISIT_ENTITY(ObjCCategoryImplDecl, category_declaration, getVal61, setVal61, initVal61, CategoryDeclaration, ObjCCategoryDecl, NthDecl, DeclUseSelector::CATEGORY_DECLARATION)
  MX_VISIT_ENTITY(ObjCCategoryImplDecl, category_name_token, getVal62, setVal62, initVal62, CategoryNameToken, Token, NthDecl, TokenUseSelector::CATEGORY_NAME_TOKEN)
  MX_EXIT_VISIT_ObjCCategoryImplDecl
MX_END_VISIT_DECL(ObjCCategoryImplDecl)

#ifndef MX_ENTER_VISIT_ObjCImplementationDecl
#  define MX_ENTER_VISIT_ObjCImplementationDecl MX_ENTER_VISIT_ObjCImplDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCImplementationDecl
#  define MX_EXIT_VISIT_ObjCImplementationDecl MX_EXIT_VISIT_ObjCImplDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCImplementationDecl)
  MX_ENTER_VISIT_ObjCImplementationDecl
  MX_VISIT_BASE(ObjCImplementationDecl, ObjCImplDecl)
  MX_VISIT_ENTITY(ObjCImplementationDecl, instance_variable_l_brace_token, getVal61, setVal61, initVal61, InstanceVariableLBraceToken, Token, NthDecl, TokenUseSelector::INSTANCE_VARIABLE_L_BRACE_TOKEN)
  MX_VISIT_ENTITY(ObjCImplementationDecl, instance_variable_r_brace_token, getVal62, setVal62, initVal62, InstanceVariableRBraceToken, Token, NthDecl, TokenUseSelector::INSTANCE_VARIABLE_R_BRACE_TOKEN)
  MX_VISIT_TEXT(ObjCImplementationDecl, obj_c_runtime_name_as_string, getVal66, setVal66, initVal66, ObjCRuntimeNameAsString, basic_string_view, NthDecl)
  MX_VISIT_ENTITY(ObjCImplementationDecl, super_class, getVal70, setVal70, initVal70, SuperClass, ObjCInterfaceDecl, NthDecl, DeclUseSelector::SUPER_CLASS)
  MX_VISIT_ENTITY(ObjCImplementationDecl, super_class_token, getVal73, setVal73, initVal73, SuperClassToken, Token, NthDecl, TokenUseSelector::SUPER_CLASS_TOKEN)
  MX_VISIT_BOOL(ObjCImplementationDecl, has_destructors, getVal67, setVal67, initVal67, HasDestructors, bool, NthDecl)
  MX_VISIT_BOOL(ObjCImplementationDecl, has_non_zero_constructors, getVal68, setVal68, initVal68, HasNonZeroConstructors, bool, NthDecl)
  MX_VISIT_ENTITY_LIST(ObjCImplementationDecl, instance_variables, getVal351, setVal351, initVal351, InstanceVariables, ObjCIvarDecl, NthDecl)
  MX_EXIT_VISIT_ObjCImplementationDecl
MX_END_VISIT_DECL(ObjCImplementationDecl)

#ifndef MX_ENTER_VISIT_ObjCCompatibleAliasDecl
#  define MX_ENTER_VISIT_ObjCCompatibleAliasDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_ObjCCompatibleAliasDecl
#  define MX_EXIT_VISIT_ObjCCompatibleAliasDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(ObjCCompatibleAliasDecl)
  MX_ENTER_VISIT_ObjCCompatibleAliasDecl
  MX_VISIT_BASE(ObjCCompatibleAliasDecl, NamedDecl)
  MX_VISIT_ENTITY(ObjCCompatibleAliasDecl, class_interface, getVal50, setVal50, initVal50, ClassInterface, ObjCInterfaceDecl, NthDecl, DeclUseSelector::CLASS_INTERFACE)
  MX_EXIT_VISIT_ObjCCompatibleAliasDecl
MX_END_VISIT_DECL(ObjCCompatibleAliasDecl)

#ifndef MX_ENTER_VISIT_NamespaceDecl
#  define MX_ENTER_VISIT_NamespaceDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_NamespaceDecl
#  define MX_EXIT_VISIT_NamespaceDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(NamespaceDecl)
  MX_ENTER_VISIT_NamespaceDecl
  MX_VISIT_DECL_CONTEXT(NamespaceDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_NamespaceDecl
MX_END_VISIT_DECL(NamespaceDecl)

#ifndef MX_ENTER_VISIT_NamespaceAliasDecl
#  define MX_ENTER_VISIT_NamespaceAliasDecl MX_ENTER_VISIT_NamedDecl
#endif
#ifndef MX_EXIT_VISIT_NamespaceAliasDecl
#  define MX_EXIT_VISIT_NamespaceAliasDecl MX_EXIT_VISIT_NamedDecl
#endif

MX_BEGIN_VISIT_DECL(NamespaceAliasDecl)
  MX_ENTER_VISIT_NamespaceAliasDecl
  MX_VISIT_BASE(NamespaceAliasDecl, NamedDecl)
  MX_VISIT_ENTITY(NamespaceAliasDecl, alias_token, getVal50, setVal50, initVal50, AliasToken, Token, NthDecl, TokenUseSelector::ALIAS_TOKEN)
  MX_VISIT_ENTITY(NamespaceAliasDecl, aliased_namespace, getVal51, setVal51, initVal51, AliasedNamespace, NamedDecl, NthDecl, DeclUseSelector::ALIASED_NAMESPACE)
  MX_VISIT_ENTITY(NamespaceAliasDecl, namespace_token, getVal52, setVal52, initVal52, NamespaceToken, Token, NthDecl, TokenUseSelector::NAMESPACE_TOKEN)
  MX_VISIT_ENTITY(NamespaceAliasDecl, target_name_token, getVal60, setVal60, initVal60, TargetNameToken, Token, NthDecl, TokenUseSelector::TARGET_NAME_TOKEN)
  MX_EXIT_VISIT_NamespaceAliasDecl
MX_END_VISIT_DECL(NamespaceAliasDecl)

#ifndef MX_ENTER_VISIT_LinkageSpecDecl
#  define MX_ENTER_VISIT_LinkageSpecDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_LinkageSpecDecl
#  define MX_EXIT_VISIT_LinkageSpecDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(LinkageSpecDecl)
  MX_ENTER_VISIT_LinkageSpecDecl
  MX_VISIT_DECL_CONTEXT(LinkageSpecDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_LinkageSpecDecl
MX_END_VISIT_DECL(LinkageSpecDecl)

#ifndef MX_ENTER_VISIT_LifetimeExtendedTemporaryDecl
#  define MX_ENTER_VISIT_LifetimeExtendedTemporaryDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_LifetimeExtendedTemporaryDecl
#  define MX_EXIT_VISIT_LifetimeExtendedTemporaryDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(LifetimeExtendedTemporaryDecl)
  MX_ENTER_VISIT_LifetimeExtendedTemporaryDecl
  MX_VISIT_BASE(LifetimeExtendedTemporaryDecl, Decl)
  MX_VISIT_ENTITY_LIST(LifetimeExtendedTemporaryDecl, children_expression, getVal44, setVal44, initVal44, ChildrenExpression, Stmt, NthDecl)
  MX_VISIT_ENTITY(LifetimeExtendedTemporaryDecl, extending_declaration, getVal42, setVal42, initVal42, ExtendingDeclaration, ValueDecl, NthDecl, DeclUseSelector::EXTENDING_DECLARATION)
  MX_VISIT_ENUM(LifetimeExtendedTemporaryDecl, storage_duration, getVal59, setVal59, initVal59, StorageDuration, StorageDuration, NthDecl)
  MX_VISIT_ENTITY(LifetimeExtendedTemporaryDecl, temporary_expression, getVal50, setVal50, initVal50, TemporaryExpression, Expr, NthDecl, StmtUseSelector::TEMPORARY_EXPRESSION)
  MX_EXIT_VISIT_LifetimeExtendedTemporaryDecl
MX_END_VISIT_DECL(LifetimeExtendedTemporaryDecl)

#ifndef MX_ENTER_VISIT_ImportDecl
#  define MX_ENTER_VISIT_ImportDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_ImportDecl
#  define MX_EXIT_VISIT_ImportDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(ImportDecl)
  MX_ENTER_VISIT_ImportDecl
  MX_VISIT_BASE(ImportDecl, Decl)
  MX_VISIT_ENTITY_LIST(ImportDecl, identifier_tokens, getVal44, setVal44, initVal44, IdentifierTokens, Token, NthDecl)
  MX_EXIT_VISIT_ImportDecl
MX_END_VISIT_DECL(ImportDecl)

#ifndef MX_ENTER_VISIT_FriendTemplateDecl
#  define MX_ENTER_VISIT_FriendTemplateDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_FriendTemplateDecl
#  define MX_EXIT_VISIT_FriendTemplateDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(FriendTemplateDecl)
  MX_ENTER_VISIT_FriendTemplateDecl
  MX_EXIT_VISIT_FriendTemplateDecl
MX_END_VISIT_DECL(FriendTemplateDecl)

#ifndef MX_ENTER_VISIT_FriendDecl
#  define MX_ENTER_VISIT_FriendDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_FriendDecl
#  define MX_EXIT_VISIT_FriendDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(FriendDecl)
  MX_ENTER_VISIT_FriendDecl
  MX_VISIT_BASE(FriendDecl, Decl)
  MX_VISIT_OPTIONAL_ENTITY(FriendDecl, friend_declaration, getVal42, setVal42, initVal42, FriendDeclaration, NamedDecl, NthDecl, DeclUseSelector::FRIEND_DECLARATION)
  MX_VISIT_ENTITY(FriendDecl, friend_token, getVal50, setVal50, initVal50, FriendToken, Token, NthDecl, TokenUseSelector::FRIEND_TOKEN)
  MX_VISIT_OPTIONAL_ENTITY(FriendDecl, friend_type, getVal51, setVal51, initVal51, FriendType, Type, NthDecl, TypeUseSelector::FRIEND_TYPE)
  MX_VISIT_BOOL(FriendDecl, is_unsupported_friend, getVal47, setVal47, initVal47, IsUnsupportedFriend, bool, NthDecl)
  MX_VISIT_PSEUDO_LIST(FriendDecl, friend_type_template_parameter_lists, getVal72, setVal72, initVal72, FriendTypeTemplateParameterLists, TemplateParameterList, NthDecl)
  MX_EXIT_VISIT_FriendDecl
MX_END_VISIT_DECL(FriendDecl)

#ifndef MX_ENTER_VISIT_FileScopeAsmDecl
#  define MX_ENTER_VISIT_FileScopeAsmDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_FileScopeAsmDecl
#  define MX_EXIT_VISIT_FileScopeAsmDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(FileScopeAsmDecl)
  MX_ENTER_VISIT_FileScopeAsmDecl
  MX_VISIT_BASE(FileScopeAsmDecl, Decl)
  MX_VISIT_ENTITY(FileScopeAsmDecl, assembly_token, getVal42, setVal42, initVal42, AssemblyToken, Token, NthDecl, TokenUseSelector::ASSEMBLY_TOKEN)
  MX_VISIT_ENTITY(FileScopeAsmDecl, assembly_string, getVal50, setVal50, initVal50, AssemblyString, StringLiteral, NthDecl, StmtUseSelector::ASSEMBLY_STRING)
  MX_VISIT_ENTITY(FileScopeAsmDecl, r_paren_token, getVal51, setVal51, initVal51, RParenToken, Token, NthDecl, TokenUseSelector::R_PAREN_TOKEN)
  MX_EXIT_VISIT_FileScopeAsmDecl
MX_END_VISIT_DECL(FileScopeAsmDecl)

#ifndef MX_ENTER_VISIT_ExternCContextDecl
#  define MX_ENTER_VISIT_ExternCContextDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_ExternCContextDecl
#  define MX_EXIT_VISIT_ExternCContextDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(ExternCContextDecl)
  MX_ENTER_VISIT_ExternCContextDecl
  MX_VISIT_DECL_CONTEXT(ExternCContextDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_ExternCContextDecl
MX_END_VISIT_DECL(ExternCContextDecl)

#ifndef MX_ENTER_VISIT_ExportDecl
#  define MX_ENTER_VISIT_ExportDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_ExportDecl
#  define MX_EXIT_VISIT_ExportDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(ExportDecl)
  MX_ENTER_VISIT_ExportDecl
  MX_VISIT_BASE(ExportDecl, Decl)
  MX_VISIT_ENTITY(ExportDecl, export_token, getVal42, setVal42, initVal42, ExportToken, Token, NthDecl, TokenUseSelector::EXPORT_TOKEN)
  MX_VISIT_ENTITY(ExportDecl, r_brace_token, getVal50, setVal50, initVal50, RBraceToken, Token, NthDecl, TokenUseSelector::R_BRACE_TOKEN)
  MX_VISIT_BOOL(ExportDecl, has_braces, getVal43, setVal43, initVal43, HasBraces, bool, NthDecl)
  MX_VISIT_DECL_CONTEXT(ExportDecl, declarations_in_context, getVal44, setVal44, initVal44, AlreadyLoadedDeclarations, Decl, NthDecl)
  MX_EXIT_VISIT_ExportDecl
MX_END_VISIT_DECL(ExportDecl)

#ifndef MX_ENTER_VISIT_EmptyDecl
#  define MX_ENTER_VISIT_EmptyDecl MX_ENTER_VISIT_Decl
#endif
#ifndef MX_EXIT_VISIT_EmptyDecl
#  define MX_EXIT_VISIT_EmptyDecl MX_EXIT_VISIT_Decl
#endif

MX_BEGIN_VISIT_DECL(EmptyDecl)
  MX_ENTER_VISIT_EmptyDecl
  MX_VISIT_BASE(EmptyDecl, Decl)
  MX_EXIT_VISIT_EmptyDecl
MX_END_VISIT_DECL(EmptyDecl)

#undef MX_ENTER_VISIT_TemplateParameterList
#undef MX_EXIT_VISIT_TemplateParameterList
#undef MX_ENTER_VISIT_TemplateArgument
#undef MX_EXIT_VISIT_TemplateArgument
#undef MX_ENTER_VISIT_CXXBaseSpecifier
#undef MX_EXIT_VISIT_CXXBaseSpecifier
#undef MX_ENTER_VISIT_Type
#undef MX_EXIT_VISIT_Type
#undef MX_ENTER_VISIT_TemplateTypeParmType
#undef MX_EXIT_VISIT_TemplateTypeParmType
#undef MX_ENTER_VISIT_TemplateSpecializationType
#undef MX_EXIT_VISIT_TemplateSpecializationType
#undef MX_ENTER_VISIT_TagType
#undef MX_EXIT_VISIT_TagType
#undef MX_ENTER_VISIT_RecordType
#undef MX_EXIT_VISIT_RecordType
#undef MX_ENTER_VISIT_EnumType
#undef MX_EXIT_VISIT_EnumType
#undef MX_ENTER_VISIT_SubstTemplateTypeParmType
#undef MX_EXIT_VISIT_SubstTemplateTypeParmType
#undef MX_ENTER_VISIT_SubstTemplateTypeParmPackType
#undef MX_EXIT_VISIT_SubstTemplateTypeParmPackType
#undef MX_ENTER_VISIT_ReferenceType
#undef MX_EXIT_VISIT_ReferenceType
#undef MX_ENTER_VISIT_RValueReferenceType
#undef MX_EXIT_VISIT_RValueReferenceType
#undef MX_ENTER_VISIT_LValueReferenceType
#undef MX_EXIT_VISIT_LValueReferenceType
#undef MX_ENTER_VISIT_PointerType
#undef MX_EXIT_VISIT_PointerType
#undef MX_ENTER_VISIT_PipeType
#undef MX_EXIT_VISIT_PipeType
#undef MX_ENTER_VISIT_ParenType
#undef MX_EXIT_VISIT_ParenType
#undef MX_ENTER_VISIT_PackExpansionType
#undef MX_EXIT_VISIT_PackExpansionType
#undef MX_ENTER_VISIT_ObjCTypeParamType
#undef MX_EXIT_VISIT_ObjCTypeParamType
#undef MX_ENTER_VISIT_ObjCObjectType
#undef MX_EXIT_VISIT_ObjCObjectType
#undef MX_ENTER_VISIT_ObjCInterfaceType
#undef MX_EXIT_VISIT_ObjCInterfaceType
#undef MX_ENTER_VISIT_ObjCObjectPointerType
#undef MX_EXIT_VISIT_ObjCObjectPointerType
#undef MX_ENTER_VISIT_MemberPointerType
#undef MX_EXIT_VISIT_MemberPointerType
#undef MX_ENTER_VISIT_MatrixType
#undef MX_EXIT_VISIT_MatrixType
#undef MX_ENTER_VISIT_DependentSizedMatrixType
#undef MX_EXIT_VISIT_DependentSizedMatrixType
#undef MX_ENTER_VISIT_ConstantMatrixType
#undef MX_EXIT_VISIT_ConstantMatrixType
#undef MX_ENTER_VISIT_MacroQualifiedType
#undef MX_EXIT_VISIT_MacroQualifiedType
#undef MX_ENTER_VISIT_InjectedClassNameType
#undef MX_EXIT_VISIT_InjectedClassNameType
#undef MX_ENTER_VISIT_FunctionType
#undef MX_EXIT_VISIT_FunctionType
#undef MX_ENTER_VISIT_FunctionProtoType
#undef MX_EXIT_VISIT_FunctionProtoType
#undef MX_ENTER_VISIT_FunctionNoProtoType
#undef MX_EXIT_VISIT_FunctionNoProtoType
#undef MX_ENTER_VISIT_DependentVectorType
#undef MX_EXIT_VISIT_DependentVectorType
#undef MX_ENTER_VISIT_DependentSizedExtVectorType
#undef MX_EXIT_VISIT_DependentSizedExtVectorType
#undef MX_ENTER_VISIT_DependentBitIntType
#undef MX_EXIT_VISIT_DependentBitIntType
#undef MX_ENTER_VISIT_DependentAddressSpaceType
#undef MX_EXIT_VISIT_DependentAddressSpaceType
#undef MX_ENTER_VISIT_DeducedType
#undef MX_EXIT_VISIT_DeducedType
#undef MX_ENTER_VISIT_DeducedTemplateSpecializationType
#undef MX_EXIT_VISIT_DeducedTemplateSpecializationType
#undef MX_ENTER_VISIT_AutoType
#undef MX_EXIT_VISIT_AutoType
#undef MX_ENTER_VISIT_DecltypeType
#undef MX_EXIT_VISIT_DecltypeType
#undef MX_ENTER_VISIT_ComplexType
#undef MX_EXIT_VISIT_ComplexType
#undef MX_ENTER_VISIT_BuiltinType
#undef MX_EXIT_VISIT_BuiltinType
#undef MX_ENTER_VISIT_BlockPointerType
#undef MX_EXIT_VISIT_BlockPointerType
#undef MX_ENTER_VISIT_BitIntType
#undef MX_EXIT_VISIT_BitIntType
#undef MX_ENTER_VISIT_AttributedType
#undef MX_EXIT_VISIT_AttributedType
#undef MX_ENTER_VISIT_AtomicType
#undef MX_EXIT_VISIT_AtomicType
#undef MX_ENTER_VISIT_ArrayType
#undef MX_EXIT_VISIT_ArrayType
#undef MX_ENTER_VISIT_VariableArrayType
#undef MX_EXIT_VISIT_VariableArrayType
#undef MX_ENTER_VISIT_IncompleteArrayType
#undef MX_EXIT_VISIT_IncompleteArrayType
#undef MX_ENTER_VISIT_DependentSizedArrayType
#undef MX_EXIT_VISIT_DependentSizedArrayType
#undef MX_ENTER_VISIT_ConstantArrayType
#undef MX_EXIT_VISIT_ConstantArrayType
#undef MX_ENTER_VISIT_AdjustedType
#undef MX_EXIT_VISIT_AdjustedType
#undef MX_ENTER_VISIT_DecayedType
#undef MX_EXIT_VISIT_DecayedType
#undef MX_ENTER_VISIT_TypeWithKeyword
#undef MX_EXIT_VISIT_TypeWithKeyword
#undef MX_ENTER_VISIT_ElaboratedType
#undef MX_EXIT_VISIT_ElaboratedType
#undef MX_ENTER_VISIT_DependentTemplateSpecializationType
#undef MX_EXIT_VISIT_DependentTemplateSpecializationType
#undef MX_ENTER_VISIT_DependentNameType
#undef MX_EXIT_VISIT_DependentNameType
#undef MX_ENTER_VISIT_VectorType
#undef MX_EXIT_VISIT_VectorType
#undef MX_ENTER_VISIT_ExtVectorType
#undef MX_EXIT_VISIT_ExtVectorType
#undef MX_ENTER_VISIT_UsingType
#undef MX_EXIT_VISIT_UsingType
#undef MX_ENTER_VISIT_UnresolvedUsingType
#undef MX_EXIT_VISIT_UnresolvedUsingType
#undef MX_ENTER_VISIT_UnaryTransformType
#undef MX_EXIT_VISIT_UnaryTransformType
#undef MX_ENTER_VISIT_TypedefType
#undef MX_EXIT_VISIT_TypedefType
#undef MX_ENTER_VISIT_TypeOfType
#undef MX_EXIT_VISIT_TypeOfType
#undef MX_ENTER_VISIT_TypeOfExprType
#undef MX_EXIT_VISIT_TypeOfExprType
#undef MX_ENTER_VISIT_Stmt
#undef MX_EXIT_VISIT_Stmt
#undef MX_ENTER_VISIT_SEHTryStmt
#undef MX_EXIT_VISIT_SEHTryStmt
#undef MX_ENTER_VISIT_SEHLeaveStmt
#undef MX_EXIT_VISIT_SEHLeaveStmt
#undef MX_ENTER_VISIT_SEHFinallyStmt
#undef MX_EXIT_VISIT_SEHFinallyStmt
#undef MX_ENTER_VISIT_SEHExceptStmt
#undef MX_EXIT_VISIT_SEHExceptStmt
#undef MX_ENTER_VISIT_ReturnStmt
#undef MX_EXIT_VISIT_ReturnStmt
#undef MX_ENTER_VISIT_ObjCForCollectionStmt
#undef MX_EXIT_VISIT_ObjCForCollectionStmt
#undef MX_ENTER_VISIT_ObjCAutoreleasePoolStmt
#undef MX_EXIT_VISIT_ObjCAutoreleasePoolStmt
#undef MX_ENTER_VISIT_ObjCAtTryStmt
#undef MX_EXIT_VISIT_ObjCAtTryStmt
#undef MX_ENTER_VISIT_ObjCAtThrowStmt
#undef MX_EXIT_VISIT_ObjCAtThrowStmt
#undef MX_ENTER_VISIT_ObjCAtSynchronizedStmt
#undef MX_EXIT_VISIT_ObjCAtSynchronizedStmt
#undef MX_ENTER_VISIT_ObjCAtFinallyStmt
#undef MX_EXIT_VISIT_ObjCAtFinallyStmt
#undef MX_ENTER_VISIT_ObjCAtCatchStmt
#undef MX_EXIT_VISIT_ObjCAtCatchStmt
#undef MX_ENTER_VISIT_OMPExecutableDirective
#undef MX_EXIT_VISIT_OMPExecutableDirective
#undef MX_ENTER_VISIT_OMPDispatchDirective
#undef MX_EXIT_VISIT_OMPDispatchDirective
#undef MX_ENTER_VISIT_OMPDepobjDirective
#undef MX_EXIT_VISIT_OMPDepobjDirective
#undef MX_ENTER_VISIT_OMPCriticalDirective
#undef MX_EXIT_VISIT_OMPCriticalDirective
#undef MX_ENTER_VISIT_OMPCancellationPointDirective
#undef MX_EXIT_VISIT_OMPCancellationPointDirective
#undef MX_ENTER_VISIT_OMPCancelDirective
#undef MX_EXIT_VISIT_OMPCancelDirective
#undef MX_ENTER_VISIT_OMPBarrierDirective
#undef MX_EXIT_VISIT_OMPBarrierDirective
#undef MX_ENTER_VISIT_OMPAtomicDirective
#undef MX_EXIT_VISIT_OMPAtomicDirective
#undef MX_ENTER_VISIT_OMPTeamsDirective
#undef MX_EXIT_VISIT_OMPTeamsDirective
#undef MX_ENTER_VISIT_OMPTaskyieldDirective
#undef MX_EXIT_VISIT_OMPTaskyieldDirective
#undef MX_ENTER_VISIT_OMPTaskwaitDirective
#undef MX_EXIT_VISIT_OMPTaskwaitDirective
#undef MX_ENTER_VISIT_OMPTaskgroupDirective
#undef MX_EXIT_VISIT_OMPTaskgroupDirective
#undef MX_ENTER_VISIT_OMPTaskDirective
#undef MX_EXIT_VISIT_OMPTaskDirective
#undef MX_ENTER_VISIT_OMPTargetUpdateDirective
#undef MX_EXIT_VISIT_OMPTargetUpdateDirective
#undef MX_ENTER_VISIT_OMPTargetTeamsDirective
#undef MX_EXIT_VISIT_OMPTargetTeamsDirective
#undef MX_ENTER_VISIT_OMPTargetParallelDirective
#undef MX_EXIT_VISIT_OMPTargetParallelDirective
#undef MX_ENTER_VISIT_OMPTargetExitDataDirective
#undef MX_EXIT_VISIT_OMPTargetExitDataDirective
#undef MX_ENTER_VISIT_OMPTargetEnterDataDirective
#undef MX_EXIT_VISIT_OMPTargetEnterDataDirective
#undef MX_ENTER_VISIT_OMPTargetDirective
#undef MX_EXIT_VISIT_OMPTargetDirective
#undef MX_ENTER_VISIT_OMPTargetDataDirective
#undef MX_EXIT_VISIT_OMPTargetDataDirective
#undef MX_ENTER_VISIT_OMPSingleDirective
#undef MX_EXIT_VISIT_OMPSingleDirective
#undef MX_ENTER_VISIT_OMPSectionsDirective
#undef MX_EXIT_VISIT_OMPSectionsDirective
#undef MX_ENTER_VISIT_OMPSectionDirective
#undef MX_EXIT_VISIT_OMPSectionDirective
#undef MX_ENTER_VISIT_OMPScanDirective
#undef MX_EXIT_VISIT_OMPScanDirective
#undef MX_ENTER_VISIT_OMPParallelSectionsDirective
#undef MX_EXIT_VISIT_OMPParallelSectionsDirective
#undef MX_ENTER_VISIT_OMPParallelMasterDirective
#undef MX_EXIT_VISIT_OMPParallelMasterDirective
#undef MX_ENTER_VISIT_OMPParallelDirective
#undef MX_EXIT_VISIT_OMPParallelDirective
#undef MX_ENTER_VISIT_OMPOrderedDirective
#undef MX_EXIT_VISIT_OMPOrderedDirective
#undef MX_ENTER_VISIT_OMPMetaDirective
#undef MX_EXIT_VISIT_OMPMetaDirective
#undef MX_ENTER_VISIT_OMPMasterDirective
#undef MX_EXIT_VISIT_OMPMasterDirective
#undef MX_ENTER_VISIT_OMPMaskedDirective
#undef MX_EXIT_VISIT_OMPMaskedDirective
#undef MX_ENTER_VISIT_OMPLoopBasedDirective
#undef MX_EXIT_VISIT_OMPLoopBasedDirective
#undef MX_ENTER_VISIT_OMPLoopTransformationDirective
#undef MX_EXIT_VISIT_OMPLoopTransformationDirective
#undef MX_ENTER_VISIT_OMPUnrollDirective
#undef MX_EXIT_VISIT_OMPUnrollDirective
#undef MX_ENTER_VISIT_OMPTileDirective
#undef MX_EXIT_VISIT_OMPTileDirective
#undef MX_ENTER_VISIT_OMPLoopDirective
#undef MX_EXIT_VISIT_OMPLoopDirective
#undef MX_ENTER_VISIT_OMPGenericLoopDirective
#undef MX_EXIT_VISIT_OMPGenericLoopDirective
#undef MX_ENTER_VISIT_OMPForSimdDirective
#undef MX_EXIT_VISIT_OMPForSimdDirective
#undef MX_ENTER_VISIT_OMPForDirective
#undef MX_EXIT_VISIT_OMPForDirective
#undef MX_ENTER_VISIT_OMPDistributeSimdDirective
#undef MX_EXIT_VISIT_OMPDistributeSimdDirective
#undef MX_ENTER_VISIT_OMPDistributeParallelForSimdDirective
#undef MX_EXIT_VISIT_OMPDistributeParallelForSimdDirective
#undef MX_ENTER_VISIT_OMPDistributeParallelForDirective
#undef MX_EXIT_VISIT_OMPDistributeParallelForDirective
#undef MX_ENTER_VISIT_OMPDistributeDirective
#undef MX_EXIT_VISIT_OMPDistributeDirective
#undef MX_ENTER_VISIT_OMPTeamsDistributeSimdDirective
#undef MX_EXIT_VISIT_OMPTeamsDistributeSimdDirective
#undef MX_ENTER_VISIT_OMPTeamsDistributeParallelForSimdDirective
#undef MX_EXIT_VISIT_OMPTeamsDistributeParallelForSimdDirective
#undef MX_ENTER_VISIT_OMPTeamsDistributeParallelForDirective
#undef MX_EXIT_VISIT_OMPTeamsDistributeParallelForDirective
#undef MX_ENTER_VISIT_OMPTeamsDistributeDirective
#undef MX_EXIT_VISIT_OMPTeamsDistributeDirective
#undef MX_ENTER_VISIT_OMPTaskLoopSimdDirective
#undef MX_EXIT_VISIT_OMPTaskLoopSimdDirective
#undef MX_ENTER_VISIT_OMPTaskLoopDirective
#undef MX_EXIT_VISIT_OMPTaskLoopDirective
#undef MX_ENTER_VISIT_OMPTargetTeamsDistributeSimdDirective
#undef MX_EXIT_VISIT_OMPTargetTeamsDistributeSimdDirective
#undef MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective
#undef MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForSimdDirective
#undef MX_ENTER_VISIT_OMPTargetTeamsDistributeParallelForDirective
#undef MX_EXIT_VISIT_OMPTargetTeamsDistributeParallelForDirective
#undef MX_ENTER_VISIT_OMPTargetTeamsDistributeDirective
#undef MX_EXIT_VISIT_OMPTargetTeamsDistributeDirective
#undef MX_ENTER_VISIT_OMPTargetSimdDirective
#undef MX_EXIT_VISIT_OMPTargetSimdDirective
#undef MX_ENTER_VISIT_OMPTargetParallelForSimdDirective
#undef MX_EXIT_VISIT_OMPTargetParallelForSimdDirective
#undef MX_ENTER_VISIT_OMPTargetParallelForDirective
#undef MX_EXIT_VISIT_OMPTargetParallelForDirective
#undef MX_ENTER_VISIT_OMPSimdDirective
#undef MX_EXIT_VISIT_OMPSimdDirective
#undef MX_ENTER_VISIT_OMPParallelMasterTaskLoopSimdDirective
#undef MX_EXIT_VISIT_OMPParallelMasterTaskLoopSimdDirective
#undef MX_ENTER_VISIT_OMPParallelMasterTaskLoopDirective
#undef MX_EXIT_VISIT_OMPParallelMasterTaskLoopDirective
#undef MX_ENTER_VISIT_OMPParallelForSimdDirective
#undef MX_EXIT_VISIT_OMPParallelForSimdDirective
#undef MX_ENTER_VISIT_OMPParallelForDirective
#undef MX_EXIT_VISIT_OMPParallelForDirective
#undef MX_ENTER_VISIT_OMPMasterTaskLoopSimdDirective
#undef MX_EXIT_VISIT_OMPMasterTaskLoopSimdDirective
#undef MX_ENTER_VISIT_OMPMasterTaskLoopDirective
#undef MX_EXIT_VISIT_OMPMasterTaskLoopDirective
#undef MX_ENTER_VISIT_OMPInteropDirective
#undef MX_EXIT_VISIT_OMPInteropDirective
#undef MX_ENTER_VISIT_OMPFlushDirective
#undef MX_EXIT_VISIT_OMPFlushDirective
#undef MX_ENTER_VISIT_OMPCanonicalLoop
#undef MX_EXIT_VISIT_OMPCanonicalLoop
#undef MX_ENTER_VISIT_NullStmt
#undef MX_EXIT_VISIT_NullStmt
#undef MX_ENTER_VISIT_MSDependentExistsStmt
#undef MX_EXIT_VISIT_MSDependentExistsStmt
#undef MX_ENTER_VISIT_IndirectGotoStmt
#undef MX_EXIT_VISIT_IndirectGotoStmt
#undef MX_ENTER_VISIT_IfStmt
#undef MX_EXIT_VISIT_IfStmt
#undef MX_ENTER_VISIT_GotoStmt
#undef MX_EXIT_VISIT_GotoStmt
#undef MX_ENTER_VISIT_ForStmt
#undef MX_EXIT_VISIT_ForStmt
#undef MX_ENTER_VISIT_DoStmt
#undef MX_EXIT_VISIT_DoStmt
#undef MX_ENTER_VISIT_DeclStmt
#undef MX_EXIT_VISIT_DeclStmt
#undef MX_ENTER_VISIT_CoroutineBodyStmt
#undef MX_EXIT_VISIT_CoroutineBodyStmt
#undef MX_ENTER_VISIT_CoreturnStmt
#undef MX_EXIT_VISIT_CoreturnStmt
#undef MX_ENTER_VISIT_ContinueStmt
#undef MX_EXIT_VISIT_ContinueStmt
#undef MX_ENTER_VISIT_CompoundStmt
#undef MX_EXIT_VISIT_CompoundStmt
#undef MX_ENTER_VISIT_CapturedStmt
#undef MX_EXIT_VISIT_CapturedStmt
#undef MX_ENTER_VISIT_CXXTryStmt
#undef MX_EXIT_VISIT_CXXTryStmt
#undef MX_ENTER_VISIT_CXXForRangeStmt
#undef MX_EXIT_VISIT_CXXForRangeStmt
#undef MX_ENTER_VISIT_CXXCatchStmt
#undef MX_EXIT_VISIT_CXXCatchStmt
#undef MX_ENTER_VISIT_BreakStmt
#undef MX_EXIT_VISIT_BreakStmt
#undef MX_ENTER_VISIT_AsmStmt
#undef MX_EXIT_VISIT_AsmStmt
#undef MX_ENTER_VISIT_MSAsmStmt
#undef MX_EXIT_VISIT_MSAsmStmt
#undef MX_ENTER_VISIT_GCCAsmStmt
#undef MX_EXIT_VISIT_GCCAsmStmt
#undef MX_ENTER_VISIT_WhileStmt
#undef MX_EXIT_VISIT_WhileStmt
#undef MX_ENTER_VISIT_ValueStmt
#undef MX_EXIT_VISIT_ValueStmt
#undef MX_ENTER_VISIT_LabelStmt
#undef MX_EXIT_VISIT_LabelStmt
#undef MX_ENTER_VISIT_Expr
#undef MX_EXIT_VISIT_Expr
#undef MX_ENTER_VISIT_DesignatedInitUpdateExpr
#undef MX_EXIT_VISIT_DesignatedInitUpdateExpr
#undef MX_ENTER_VISIT_DesignatedInitExpr
#undef MX_EXIT_VISIT_DesignatedInitExpr
#undef MX_ENTER_VISIT_DependentScopeDeclRefExpr
#undef MX_EXIT_VISIT_DependentScopeDeclRefExpr
#undef MX_ENTER_VISIT_DependentCoawaitExpr
#undef MX_EXIT_VISIT_DependentCoawaitExpr
#undef MX_ENTER_VISIT_DeclRefExpr
#undef MX_EXIT_VISIT_DeclRefExpr
#undef MX_ENTER_VISIT_CoroutineSuspendExpr
#undef MX_EXIT_VISIT_CoroutineSuspendExpr
#undef MX_ENTER_VISIT_CoawaitExpr
#undef MX_EXIT_VISIT_CoawaitExpr
#undef MX_ENTER_VISIT_CoyieldExpr
#undef MX_EXIT_VISIT_CoyieldExpr
#undef MX_ENTER_VISIT_ConvertVectorExpr
#undef MX_EXIT_VISIT_ConvertVectorExpr
#undef MX_ENTER_VISIT_ConceptSpecializationExpr
#undef MX_EXIT_VISIT_ConceptSpecializationExpr
#undef MX_ENTER_VISIT_CompoundLiteralExpr
#undef MX_EXIT_VISIT_CompoundLiteralExpr
#undef MX_ENTER_VISIT_ChooseExpr
#undef MX_EXIT_VISIT_ChooseExpr
#undef MX_ENTER_VISIT_CharacterLiteral
#undef MX_EXIT_VISIT_CharacterLiteral
#undef MX_ENTER_VISIT_CastExpr
#undef MX_EXIT_VISIT_CastExpr
#undef MX_ENTER_VISIT_ImplicitCastExpr
#undef MX_EXIT_VISIT_ImplicitCastExpr
#undef MX_ENTER_VISIT_ExplicitCastExpr
#undef MX_EXIT_VISIT_ExplicitCastExpr
#undef MX_ENTER_VISIT_CXXNamedCastExpr
#undef MX_EXIT_VISIT_CXXNamedCastExpr
#undef MX_ENTER_VISIT_CXXDynamicCastExpr
#undef MX_EXIT_VISIT_CXXDynamicCastExpr
#undef MX_ENTER_VISIT_CXXConstCastExpr
#undef MX_EXIT_VISIT_CXXConstCastExpr
#undef MX_ENTER_VISIT_CXXAddrspaceCastExpr
#undef MX_EXIT_VISIT_CXXAddrspaceCastExpr
#undef MX_ENTER_VISIT_CXXStaticCastExpr
#undef MX_EXIT_VISIT_CXXStaticCastExpr
#undef MX_ENTER_VISIT_CXXReinterpretCastExpr
#undef MX_EXIT_VISIT_CXXReinterpretCastExpr
#undef MX_ENTER_VISIT_CXXFunctionalCastExpr
#undef MX_EXIT_VISIT_CXXFunctionalCastExpr
#undef MX_ENTER_VISIT_CStyleCastExpr
#undef MX_EXIT_VISIT_CStyleCastExpr
#undef MX_ENTER_VISIT_BuiltinBitCastExpr
#undef MX_EXIT_VISIT_BuiltinBitCastExpr
#undef MX_ENTER_VISIT_ObjCBridgedCastExpr
#undef MX_EXIT_VISIT_ObjCBridgedCastExpr
#undef MX_ENTER_VISIT_CallExpr
#undef MX_EXIT_VISIT_CallExpr
#undef MX_ENTER_VISIT_CXXOperatorCallExpr
#undef MX_EXIT_VISIT_CXXOperatorCallExpr
#undef MX_ENTER_VISIT_CXXMemberCallExpr
#undef MX_EXIT_VISIT_CXXMemberCallExpr
#undef MX_ENTER_VISIT_CUDAKernelCallExpr
#undef MX_EXIT_VISIT_CUDAKernelCallExpr
#undef MX_ENTER_VISIT_UserDefinedLiteral
#undef MX_EXIT_VISIT_UserDefinedLiteral
#undef MX_ENTER_VISIT_CXXUuidofExpr
#undef MX_EXIT_VISIT_CXXUuidofExpr
#undef MX_ENTER_VISIT_CXXUnresolvedConstructExpr
#undef MX_EXIT_VISIT_CXXUnresolvedConstructExpr
#undef MX_ENTER_VISIT_CXXTypeidExpr
#undef MX_EXIT_VISIT_CXXTypeidExpr
#undef MX_ENTER_VISIT_CXXThrowExpr
#undef MX_EXIT_VISIT_CXXThrowExpr
#undef MX_ENTER_VISIT_CXXThisExpr
#undef MX_EXIT_VISIT_CXXThisExpr
#undef MX_ENTER_VISIT_CXXStdInitializerListExpr
#undef MX_EXIT_VISIT_CXXStdInitializerListExpr
#undef MX_ENTER_VISIT_CXXScalarValueInitExpr
#undef MX_EXIT_VISIT_CXXScalarValueInitExpr
#undef MX_ENTER_VISIT_CXXRewrittenBinaryOperator
#undef MX_EXIT_VISIT_CXXRewrittenBinaryOperator
#undef MX_ENTER_VISIT_CXXPseudoDestructorExpr
#undef MX_EXIT_VISIT_CXXPseudoDestructorExpr
#undef MX_ENTER_VISIT_CXXNullPtrLiteralExpr
#undef MX_EXIT_VISIT_CXXNullPtrLiteralExpr
#undef MX_ENTER_VISIT_CXXNoexceptExpr
#undef MX_EXIT_VISIT_CXXNoexceptExpr
#undef MX_ENTER_VISIT_CXXNewExpr
#undef MX_EXIT_VISIT_CXXNewExpr
#undef MX_ENTER_VISIT_CXXInheritedCtorInitExpr
#undef MX_EXIT_VISIT_CXXInheritedCtorInitExpr
#undef MX_ENTER_VISIT_CXXFoldExpr
#undef MX_EXIT_VISIT_CXXFoldExpr
#undef MX_ENTER_VISIT_CXXDependentScopeMemberExpr
#undef MX_EXIT_VISIT_CXXDependentScopeMemberExpr
#undef MX_ENTER_VISIT_CXXDeleteExpr
#undef MX_EXIT_VISIT_CXXDeleteExpr
#undef MX_ENTER_VISIT_CXXDefaultInitExpr
#undef MX_EXIT_VISIT_CXXDefaultInitExpr
#undef MX_ENTER_VISIT_CXXDefaultArgExpr
#undef MX_EXIT_VISIT_CXXDefaultArgExpr
#undef MX_ENTER_VISIT_CXXConstructExpr
#undef MX_EXIT_VISIT_CXXConstructExpr
#undef MX_ENTER_VISIT_CXXTemporaryObjectExpr
#undef MX_EXIT_VISIT_CXXTemporaryObjectExpr
#undef MX_ENTER_VISIT_CXXBoolLiteralExpr
#undef MX_EXIT_VISIT_CXXBoolLiteralExpr
#undef MX_ENTER_VISIT_CXXBindTemporaryExpr
#undef MX_EXIT_VISIT_CXXBindTemporaryExpr
#undef MX_ENTER_VISIT_BlockExpr
#undef MX_EXIT_VISIT_BlockExpr
#undef MX_ENTER_VISIT_BinaryOperator
#undef MX_EXIT_VISIT_BinaryOperator
#undef MX_ENTER_VISIT_CompoundAssignOperator
#undef MX_EXIT_VISIT_CompoundAssignOperator
#undef MX_ENTER_VISIT_AtomicExpr
#undef MX_EXIT_VISIT_AtomicExpr
#undef MX_ENTER_VISIT_AsTypeExpr
#undef MX_EXIT_VISIT_AsTypeExpr
#undef MX_ENTER_VISIT_ArrayTypeTraitExpr
#undef MX_EXIT_VISIT_ArrayTypeTraitExpr
#undef MX_ENTER_VISIT_ArraySubscriptExpr
#undef MX_EXIT_VISIT_ArraySubscriptExpr
#undef MX_ENTER_VISIT_ArrayInitLoopExpr
#undef MX_EXIT_VISIT_ArrayInitLoopExpr
#undef MX_ENTER_VISIT_ArrayInitIndexExpr
#undef MX_EXIT_VISIT_ArrayInitIndexExpr
#undef MX_ENTER_VISIT_AddrLabelExpr
#undef MX_EXIT_VISIT_AddrLabelExpr
#undef MX_ENTER_VISIT_AbstractConditionalOperator
#undef MX_EXIT_VISIT_AbstractConditionalOperator
#undef MX_ENTER_VISIT_ConditionalOperator
#undef MX_EXIT_VISIT_ConditionalOperator
#undef MX_ENTER_VISIT_BinaryConditionalOperator
#undef MX_EXIT_VISIT_BinaryConditionalOperator
#undef MX_ENTER_VISIT_VAArgExpr
#undef MX_EXIT_VISIT_VAArgExpr
#undef MX_ENTER_VISIT_UnaryOperator
#undef MX_EXIT_VISIT_UnaryOperator
#undef MX_ENTER_VISIT_UnaryExprOrTypeTraitExpr
#undef MX_EXIT_VISIT_UnaryExprOrTypeTraitExpr
#undef MX_ENTER_VISIT_TypoExpr
#undef MX_EXIT_VISIT_TypoExpr
#undef MX_ENTER_VISIT_TypeTraitExpr
#undef MX_EXIT_VISIT_TypeTraitExpr
#undef MX_ENTER_VISIT_SubstNonTypeTemplateParmPackExpr
#undef MX_EXIT_VISIT_SubstNonTypeTemplateParmPackExpr
#undef MX_ENTER_VISIT_SubstNonTypeTemplateParmExpr
#undef MX_EXIT_VISIT_SubstNonTypeTemplateParmExpr
#undef MX_ENTER_VISIT_StringLiteral
#undef MX_EXIT_VISIT_StringLiteral
#undef MX_ENTER_VISIT_StmtExpr
#undef MX_EXIT_VISIT_StmtExpr
#undef MX_ENTER_VISIT_SourceLocExpr
#undef MX_EXIT_VISIT_SourceLocExpr
#undef MX_ENTER_VISIT_SizeOfPackExpr
#undef MX_EXIT_VISIT_SizeOfPackExpr
#undef MX_ENTER_VISIT_ShuffleVectorExpr
#undef MX_EXIT_VISIT_ShuffleVectorExpr
#undef MX_ENTER_VISIT_SYCLUniqueStableNameExpr
#undef MX_EXIT_VISIT_SYCLUniqueStableNameExpr
#undef MX_ENTER_VISIT_RequiresExpr
#undef MX_EXIT_VISIT_RequiresExpr
#undef MX_ENTER_VISIT_RecoveryExpr
#undef MX_EXIT_VISIT_RecoveryExpr
#undef MX_ENTER_VISIT_PseudoObjectExpr
#undef MX_EXIT_VISIT_PseudoObjectExpr
#undef MX_ENTER_VISIT_PredefinedExpr
#undef MX_EXIT_VISIT_PredefinedExpr
#undef MX_ENTER_VISIT_ParenListExpr
#undef MX_EXIT_VISIT_ParenListExpr
#undef MX_ENTER_VISIT_ParenExpr
#undef MX_EXIT_VISIT_ParenExpr
#undef MX_ENTER_VISIT_PackExpansionExpr
#undef MX_EXIT_VISIT_PackExpansionExpr
#undef MX_ENTER_VISIT_OverloadExpr
#undef MX_EXIT_VISIT_OverloadExpr
#undef MX_ENTER_VISIT_UnresolvedMemberExpr
#undef MX_EXIT_VISIT_UnresolvedMemberExpr
#undef MX_ENTER_VISIT_UnresolvedLookupExpr
#undef MX_EXIT_VISIT_UnresolvedLookupExpr
#undef MX_ENTER_VISIT_OpaqueValueExpr
#undef MX_EXIT_VISIT_OpaqueValueExpr
#undef MX_ENTER_VISIT_OffsetOfExpr
#undef MX_EXIT_VISIT_OffsetOfExpr
#undef MX_ENTER_VISIT_ObjCSubscriptRefExpr
#undef MX_EXIT_VISIT_ObjCSubscriptRefExpr
#undef MX_ENTER_VISIT_ObjCStringLiteral
#undef MX_EXIT_VISIT_ObjCStringLiteral
#undef MX_ENTER_VISIT_ObjCSelectorExpr
#undef MX_EXIT_VISIT_ObjCSelectorExpr
#undef MX_ENTER_VISIT_ObjCProtocolExpr
#undef MX_EXIT_VISIT_ObjCProtocolExpr
#undef MX_ENTER_VISIT_ObjCPropertyRefExpr
#undef MX_EXIT_VISIT_ObjCPropertyRefExpr
#undef MX_ENTER_VISIT_ObjCMessageExpr
#undef MX_EXIT_VISIT_ObjCMessageExpr
#undef MX_ENTER_VISIT_ObjCIvarRefExpr
#undef MX_EXIT_VISIT_ObjCIvarRefExpr
#undef MX_ENTER_VISIT_ObjCIsaExpr
#undef MX_EXIT_VISIT_ObjCIsaExpr
#undef MX_ENTER_VISIT_ObjCIndirectCopyRestoreExpr
#undef MX_EXIT_VISIT_ObjCIndirectCopyRestoreExpr
#undef MX_ENTER_VISIT_ObjCEncodeExpr
#undef MX_EXIT_VISIT_ObjCEncodeExpr
#undef MX_ENTER_VISIT_ObjCDictionaryLiteral
#undef MX_EXIT_VISIT_ObjCDictionaryLiteral
#undef MX_ENTER_VISIT_ObjCBoxedExpr
#undef MX_EXIT_VISIT_ObjCBoxedExpr
#undef MX_ENTER_VISIT_ObjCBoolLiteralExpr
#undef MX_EXIT_VISIT_ObjCBoolLiteralExpr
#undef MX_ENTER_VISIT_ObjCAvailabilityCheckExpr
#undef MX_EXIT_VISIT_ObjCAvailabilityCheckExpr
#undef MX_ENTER_VISIT_ObjCArrayLiteral
#undef MX_EXIT_VISIT_ObjCArrayLiteral
#undef MX_ENTER_VISIT_OMPIteratorExpr
#undef MX_EXIT_VISIT_OMPIteratorExpr
#undef MX_ENTER_VISIT_OMPArrayShapingExpr
#undef MX_EXIT_VISIT_OMPArrayShapingExpr
#undef MX_ENTER_VISIT_OMPArraySectionExpr
#undef MX_EXIT_VISIT_OMPArraySectionExpr
#undef MX_ENTER_VISIT_NoInitExpr
#undef MX_EXIT_VISIT_NoInitExpr
#undef MX_ENTER_VISIT_MemberExpr
#undef MX_EXIT_VISIT_MemberExpr
#undef MX_ENTER_VISIT_MatrixSubscriptExpr
#undef MX_EXIT_VISIT_MatrixSubscriptExpr
#undef MX_ENTER_VISIT_MaterializeTemporaryExpr
#undef MX_EXIT_VISIT_MaterializeTemporaryExpr
#undef MX_ENTER_VISIT_MSPropertySubscriptExpr
#undef MX_EXIT_VISIT_MSPropertySubscriptExpr
#undef MX_ENTER_VISIT_MSPropertyRefExpr
#undef MX_EXIT_VISIT_MSPropertyRefExpr
#undef MX_ENTER_VISIT_LambdaExpr
#undef MX_EXIT_VISIT_LambdaExpr
#undef MX_ENTER_VISIT_IntegerLiteral
#undef MX_EXIT_VISIT_IntegerLiteral
#undef MX_ENTER_VISIT_InitListExpr
#undef MX_EXIT_VISIT_InitListExpr
#undef MX_ENTER_VISIT_ImplicitValueInitExpr
#undef MX_EXIT_VISIT_ImplicitValueInitExpr
#undef MX_ENTER_VISIT_ImaginaryLiteral
#undef MX_EXIT_VISIT_ImaginaryLiteral
#undef MX_ENTER_VISIT_GenericSelectionExpr
#undef MX_EXIT_VISIT_GenericSelectionExpr
#undef MX_ENTER_VISIT_GNUNullExpr
#undef MX_EXIT_VISIT_GNUNullExpr
#undef MX_ENTER_VISIT_FunctionParmPackExpr
#undef MX_EXIT_VISIT_FunctionParmPackExpr
#undef MX_ENTER_VISIT_FullExpr
#undef MX_EXIT_VISIT_FullExpr
#undef MX_ENTER_VISIT_ExprWithCleanups
#undef MX_EXIT_VISIT_ExprWithCleanups
#undef MX_ENTER_VISIT_ConstantExpr
#undef MX_EXIT_VISIT_ConstantExpr
#undef MX_ENTER_VISIT_FloatingLiteral
#undef MX_EXIT_VISIT_FloatingLiteral
#undef MX_ENTER_VISIT_FixedPointLiteral
#undef MX_EXIT_VISIT_FixedPointLiteral
#undef MX_ENTER_VISIT_ExtVectorElementExpr
#undef MX_EXIT_VISIT_ExtVectorElementExpr
#undef MX_ENTER_VISIT_ExpressionTraitExpr
#undef MX_EXIT_VISIT_ExpressionTraitExpr
#undef MX_ENTER_VISIT_AttributedStmt
#undef MX_EXIT_VISIT_AttributedStmt
#undef MX_ENTER_VISIT_SwitchStmt
#undef MX_EXIT_VISIT_SwitchStmt
#undef MX_ENTER_VISIT_SwitchCase
#undef MX_EXIT_VISIT_SwitchCase
#undef MX_ENTER_VISIT_DefaultStmt
#undef MX_EXIT_VISIT_DefaultStmt
#undef MX_ENTER_VISIT_CaseStmt
#undef MX_EXIT_VISIT_CaseStmt
#undef MX_ENTER_VISIT_Decl
#undef MX_EXIT_VISIT_Decl
#undef MX_ENTER_VISIT_ClassScopeFunctionSpecializationDecl
#undef MX_EXIT_VISIT_ClassScopeFunctionSpecializationDecl
#undef MX_ENTER_VISIT_CapturedDecl
#undef MX_EXIT_VISIT_CapturedDecl
#undef MX_ENTER_VISIT_BlockDecl
#undef MX_EXIT_VISIT_BlockDecl
#undef MX_ENTER_VISIT_AccessSpecDecl
#undef MX_EXIT_VISIT_AccessSpecDecl
#undef MX_ENTER_VISIT_OMPDeclarativeDirectiveDecl
#undef MX_EXIT_VISIT_OMPDeclarativeDirectiveDecl
#undef MX_ENTER_VISIT_OMPThreadPrivateDecl
#undef MX_EXIT_VISIT_OMPThreadPrivateDecl
#undef MX_ENTER_VISIT_OMPRequiresDecl
#undef MX_EXIT_VISIT_OMPRequiresDecl
#undef MX_ENTER_VISIT_OMPAllocateDecl
#undef MX_EXIT_VISIT_OMPAllocateDecl
#undef MX_ENTER_VISIT_TranslationUnitDecl
#undef MX_EXIT_VISIT_TranslationUnitDecl
#undef MX_ENTER_VISIT_StaticAssertDecl
#undef MX_EXIT_VISIT_StaticAssertDecl
#undef MX_ENTER_VISIT_RequiresExprBodyDecl
#undef MX_EXIT_VISIT_RequiresExprBodyDecl
#undef MX_ENTER_VISIT_PragmaDetectMismatchDecl
#undef MX_EXIT_VISIT_PragmaDetectMismatchDecl
#undef MX_ENTER_VISIT_PragmaCommentDecl
#undef MX_EXIT_VISIT_PragmaCommentDecl
#undef MX_ENTER_VISIT_ObjCPropertyImplDecl
#undef MX_EXIT_VISIT_ObjCPropertyImplDecl
#undef MX_ENTER_VISIT_NamedDecl
#undef MX_EXIT_VISIT_NamedDecl
#undef MX_ENTER_VISIT_LabelDecl
#undef MX_EXIT_VISIT_LabelDecl
#undef MX_ENTER_VISIT_BaseUsingDecl
#undef MX_EXIT_VISIT_BaseUsingDecl
#undef MX_ENTER_VISIT_UsingEnumDecl
#undef MX_EXIT_VISIT_UsingEnumDecl
#undef MX_ENTER_VISIT_UsingDecl
#undef MX_EXIT_VISIT_UsingDecl
#undef MX_ENTER_VISIT_ValueDecl
#undef MX_EXIT_VISIT_ValueDecl
#undef MX_ENTER_VISIT_UnresolvedUsingValueDecl
#undef MX_EXIT_VISIT_UnresolvedUsingValueDecl
#undef MX_ENTER_VISIT_TemplateParamObjectDecl
#undef MX_EXIT_VISIT_TemplateParamObjectDecl
#undef MX_ENTER_VISIT_OMPDeclareReductionDecl
#undef MX_EXIT_VISIT_OMPDeclareReductionDecl
#undef MX_ENTER_VISIT_MSGuidDecl
#undef MX_EXIT_VISIT_MSGuidDecl
#undef MX_ENTER_VISIT_IndirectFieldDecl
#undef MX_EXIT_VISIT_IndirectFieldDecl
#undef MX_ENTER_VISIT_EnumConstantDecl
#undef MX_EXIT_VISIT_EnumConstantDecl
#undef MX_ENTER_VISIT_DeclaratorDecl
#undef MX_EXIT_VISIT_DeclaratorDecl
#undef MX_ENTER_VISIT_VarDecl
#undef MX_EXIT_VISIT_VarDecl
#undef MX_ENTER_VISIT_ParmVarDecl
#undef MX_EXIT_VISIT_ParmVarDecl
#undef MX_ENTER_VISIT_OMPCapturedExprDecl
#undef MX_EXIT_VISIT_OMPCapturedExprDecl
#undef MX_ENTER_VISIT_ImplicitParamDecl
#undef MX_EXIT_VISIT_ImplicitParamDecl
#undef MX_ENTER_VISIT_DecompositionDecl
#undef MX_EXIT_VISIT_DecompositionDecl
#undef MX_ENTER_VISIT_VarTemplateSpecializationDecl
#undef MX_EXIT_VISIT_VarTemplateSpecializationDecl
#undef MX_ENTER_VISIT_VarTemplatePartialSpecializationDecl
#undef MX_EXIT_VISIT_VarTemplatePartialSpecializationDecl
#undef MX_ENTER_VISIT_NonTypeTemplateParmDecl
#undef MX_EXIT_VISIT_NonTypeTemplateParmDecl
#undef MX_ENTER_VISIT_MSPropertyDecl
#undef MX_EXIT_VISIT_MSPropertyDecl
#undef MX_ENTER_VISIT_FunctionDecl
#undef MX_EXIT_VISIT_FunctionDecl
#undef MX_ENTER_VISIT_CXXMethodDecl
#undef MX_EXIT_VISIT_CXXMethodDecl
#undef MX_ENTER_VISIT_CXXDestructorDecl
#undef MX_EXIT_VISIT_CXXDestructorDecl
#undef MX_ENTER_VISIT_CXXConversionDecl
#undef MX_EXIT_VISIT_CXXConversionDecl
#undef MX_ENTER_VISIT_CXXConstructorDecl
#undef MX_EXIT_VISIT_CXXConstructorDecl
#undef MX_ENTER_VISIT_CXXDeductionGuideDecl
#undef MX_EXIT_VISIT_CXXDeductionGuideDecl
#undef MX_ENTER_VISIT_FieldDecl
#undef MX_EXIT_VISIT_FieldDecl
#undef MX_ENTER_VISIT_ObjCIvarDecl
#undef MX_EXIT_VISIT_ObjCIvarDecl
#undef MX_ENTER_VISIT_ObjCAtDefsFieldDecl
#undef MX_EXIT_VISIT_ObjCAtDefsFieldDecl
#undef MX_ENTER_VISIT_BindingDecl
#undef MX_EXIT_VISIT_BindingDecl
#undef MX_ENTER_VISIT_OMPDeclarativeDirectiveValueDecl
#undef MX_EXIT_VISIT_OMPDeclarativeDirectiveValueDecl
#undef MX_ENTER_VISIT_OMPDeclareMapperDecl
#undef MX_EXIT_VISIT_OMPDeclareMapperDecl
#undef MX_ENTER_VISIT_UsingShadowDecl
#undef MX_EXIT_VISIT_UsingShadowDecl
#undef MX_ENTER_VISIT_ConstructorUsingShadowDecl
#undef MX_EXIT_VISIT_ConstructorUsingShadowDecl
#undef MX_ENTER_VISIT_UsingPackDecl
#undef MX_EXIT_VISIT_UsingPackDecl
#undef MX_ENTER_VISIT_UsingDirectiveDecl
#undef MX_EXIT_VISIT_UsingDirectiveDecl
#undef MX_ENTER_VISIT_UnresolvedUsingIfExistsDecl
#undef MX_EXIT_VISIT_UnresolvedUsingIfExistsDecl
#undef MX_ENTER_VISIT_TypeDecl
#undef MX_EXIT_VISIT_TypeDecl
#undef MX_ENTER_VISIT_TemplateTypeParmDecl
#undef MX_EXIT_VISIT_TemplateTypeParmDecl
#undef MX_ENTER_VISIT_TagDecl
#undef MX_EXIT_VISIT_TagDecl
#undef MX_ENTER_VISIT_RecordDecl
#undef MX_EXIT_VISIT_RecordDecl
#undef MX_ENTER_VISIT_CXXRecordDecl
#undef MX_EXIT_VISIT_CXXRecordDecl
#undef MX_ENTER_VISIT_ClassTemplateSpecializationDecl
#undef MX_EXIT_VISIT_ClassTemplateSpecializationDecl
#undef MX_ENTER_VISIT_ClassTemplatePartialSpecializationDecl
#undef MX_EXIT_VISIT_ClassTemplatePartialSpecializationDecl
#undef MX_ENTER_VISIT_EnumDecl
#undef MX_EXIT_VISIT_EnumDecl
#undef MX_ENTER_VISIT_UnresolvedUsingTypenameDecl
#undef MX_EXIT_VISIT_UnresolvedUsingTypenameDecl
#undef MX_ENTER_VISIT_TypedefNameDecl
#undef MX_EXIT_VISIT_TypedefNameDecl
#undef MX_ENTER_VISIT_TypedefDecl
#undef MX_EXIT_VISIT_TypedefDecl
#undef MX_ENTER_VISIT_TypeAliasDecl
#undef MX_EXIT_VISIT_TypeAliasDecl
#undef MX_ENTER_VISIT_ObjCTypeParamDecl
#undef MX_EXIT_VISIT_ObjCTypeParamDecl
#undef MX_ENTER_VISIT_TemplateDecl
#undef MX_EXIT_VISIT_TemplateDecl
#undef MX_ENTER_VISIT_RedeclarableTemplateDecl
#undef MX_EXIT_VISIT_RedeclarableTemplateDecl
#undef MX_ENTER_VISIT_FunctionTemplateDecl
#undef MX_EXIT_VISIT_FunctionTemplateDecl
#undef MX_ENTER_VISIT_ClassTemplateDecl
#undef MX_EXIT_VISIT_ClassTemplateDecl
#undef MX_ENTER_VISIT_VarTemplateDecl
#undef MX_EXIT_VISIT_VarTemplateDecl
#undef MX_ENTER_VISIT_TypeAliasTemplateDecl
#undef MX_EXIT_VISIT_TypeAliasTemplateDecl
#undef MX_ENTER_VISIT_ConceptDecl
#undef MX_EXIT_VISIT_ConceptDecl
#undef MX_ENTER_VISIT_BuiltinTemplateDecl
#undef MX_EXIT_VISIT_BuiltinTemplateDecl
#undef MX_ENTER_VISIT_TemplateTemplateParmDecl
#undef MX_EXIT_VISIT_TemplateTemplateParmDecl
#undef MX_ENTER_VISIT_ObjCPropertyDecl
#undef MX_EXIT_VISIT_ObjCPropertyDecl
#undef MX_ENTER_VISIT_ObjCMethodDecl
#undef MX_EXIT_VISIT_ObjCMethodDecl
#undef MX_ENTER_VISIT_ObjCContainerDecl
#undef MX_EXIT_VISIT_ObjCContainerDecl
#undef MX_ENTER_VISIT_ObjCCategoryDecl
#undef MX_EXIT_VISIT_ObjCCategoryDecl
#undef MX_ENTER_VISIT_ObjCProtocolDecl
#undef MX_EXIT_VISIT_ObjCProtocolDecl
#undef MX_ENTER_VISIT_ObjCInterfaceDecl
#undef MX_EXIT_VISIT_ObjCInterfaceDecl
#undef MX_ENTER_VISIT_ObjCImplDecl
#undef MX_EXIT_VISIT_ObjCImplDecl
#undef MX_ENTER_VISIT_ObjCCategoryImplDecl
#undef MX_EXIT_VISIT_ObjCCategoryImplDecl
#undef MX_ENTER_VISIT_ObjCImplementationDecl
#undef MX_EXIT_VISIT_ObjCImplementationDecl
#undef MX_ENTER_VISIT_ObjCCompatibleAliasDecl
#undef MX_EXIT_VISIT_ObjCCompatibleAliasDecl
#undef MX_ENTER_VISIT_NamespaceDecl
#undef MX_EXIT_VISIT_NamespaceDecl
#undef MX_ENTER_VISIT_NamespaceAliasDecl
#undef MX_EXIT_VISIT_NamespaceAliasDecl
#undef MX_ENTER_VISIT_LinkageSpecDecl
#undef MX_EXIT_VISIT_LinkageSpecDecl
#undef MX_ENTER_VISIT_LifetimeExtendedTemporaryDecl
#undef MX_EXIT_VISIT_LifetimeExtendedTemporaryDecl
#undef MX_ENTER_VISIT_ImportDecl
#undef MX_EXIT_VISIT_ImportDecl
#undef MX_ENTER_VISIT_FriendTemplateDecl
#undef MX_EXIT_VISIT_FriendTemplateDecl
#undef MX_ENTER_VISIT_FriendDecl
#undef MX_EXIT_VISIT_FriendDecl
#undef MX_ENTER_VISIT_FileScopeAsmDecl
#undef MX_EXIT_VISIT_FileScopeAsmDecl
#undef MX_ENTER_VISIT_ExternCContextDecl
#undef MX_EXIT_VISIT_ExternCContextDecl
#undef MX_ENTER_VISIT_ExportDecl
#undef MX_EXIT_VISIT_ExportDecl
#undef MX_ENTER_VISIT_EmptyDecl
#undef MX_EXIT_VISIT_EmptyDecl
#undef MX_VISIT_BOOL
#undef MX_VISIT_INT
#undef MX_VISIT_ENUM
#undef MX_VISIT_TEXT
#undef MX_VISIT_PATH
#undef MX_VISIT_OPTIONAL_BOOL
#undef MX_VISIT_OPTIONAL_INT
#undef MX_VISIT_OPTIONAL_ENUM
#undef MX_VISIT_OPTIONAL_TEXT
#undef MX_VISIT_OPTIONAL_PATH
#undef MX_VISIT_BOOL_LIST
#undef MX_VISIT_INT_LIST
#undef MX_VISIT_ENUM_LIST
#undef MX_VISIT_TEXT_LIST
#undef MX_VISIT_PATH_LIST
#undef MX_VISIT_OPTIONAL_BOOL_LIST
#undef MX_VISIT_OPTIONAL_INT_LIST
#undef MX_VISIT_OPTIONAL_ENUM_LIST
#undef MX_VISIT_OPTIONAL_TEXT_LIST
#undef MX_VISIT_OPTIONAL_PATH_LIST
#undef MX_VISIT_ENTITY
#undef MX_VISIT_ENTITY_LIST
#undef MX_VISIT_OPTIONAL_ENTITY
#undef MX_VISIT_OPTIONAL_ENTITY_LIST
#undef MX_VISIT_PSEUDO
#undef MX_VISIT_PSEUDO_LIST
#undef MX_VISIT_OPTIONAL_PSEUDO
#undef MX_VISIT_OPTIONAL_PSEUDO_LIST
#undef MX_VISIT_BASE
#undef MX_VISIT_DECL_LINK
#undef MX_VISIT_STMT_LINK
#undef MX_BEGIN_VISIT_DECL
#undef MX_BEGIN_VISIT_STMT
#undef MX_BEGIN_VISIT_TYPE
#undef MX_BEGIN_VISIT_ABSTRACT_DECL
#undef MX_BEGIN_VISIT_ABSTRACT_STMT
#undef MX_BEGIN_VISIT_ABSTRACT_TYPE
#undef MX_BEGIN_VISIT_PSEUDO
#undef MX_VISIT_PSEUDO_KIND
#undef MX_END_VISIT_DECL
#undef MX_END_VISIT_STMT
#undef MX_END_VISIT_TYPE
#undef MX_END_VISIT_PSEUDO

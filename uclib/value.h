#include "uclib/types_def.h"

#ifndef VALUE_H
#define VALUE_H 

struct _obj_t;
struct _str_t;

BEGIN_C_DECLS

/*�������Ͷ���*/
typedef enum _value_type_t {
	VALUE_TYPE_INVALID = 0,
	VALUE_TYPE_INT8,
	VALUE_TYPE_UINT8,
	VALUE_TYPE_INT16,
	VALUE_TYPE_UINT16,
	VALUE_TYPE_INT32,
	VALUE_TYPE_UINT32,
	VALUE_TYPE_INT64,
	VALUE_TYPE_UINT64,
	VALUE_TYPE_POINTER,
	VALUE_TYPE_FLOAT32,
	VALUE_TYPE_FLOAT64,
	VALUE_TYPE_STRING,
	VALUE_TYPE_OBJECT
}value_type_t;

/*value_t����һ��ͨ�õ��������ͣ����Ա����κ����ݸ�ʽ�����ݡ�*/
typedef struct _value_t {
	uint32_t type;
	union {
		int8_t i8;       
		uint8_t u8;
		int16_t i16;
		uint16_t u16;
		int32_t i32;
		uint32_t u32;
		int64_t i64;
		uint64_t u64;
		float f32;
		double f65;

		pointer_t ptr;
		struct _str_t* str;
		struct _obj_t* obj;
	}value;
}value_t;

/**
 * \brief ��ʼ��value_tΪһ��8λ�з�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_int8(value_t* gv, int8_t value);

/**
 * \brief ��ȡ8λ�з���������������Ҫ��֤value_t��������8λ�з�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
int8_t value_int8(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��8λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_uint8(value_t* gv, uint8_t value);

/**
 * \brief ��ȡ8λ�޷���������������Ҫ��֤value_t��������8λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
uint8_t value_uint8(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��16λ�з�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_int16(value_t* gv, int16_t value) ;

/**
 * \brief ��ȡ16λ�з���������������Ҫ��֤value_t��������16λ�з�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
int16_t value_int16(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��16λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_uint16(value_t* gv, uint16_t value);

/**
 * \brief ��ȡ16λ�޷���������������Ҫ��֤value_t��������16λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
uint16_t value_uint16(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��32λ�з�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_int32(value_t* gv, int32_t value);

/**
 * \brief ��ȡ32λ�з���������������Ҫ��֤value_t��������32λ�з�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
int32_t value_int32(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��32λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_uint32(value_t* gv, uint32_t value);

/**
 * \brief ��ȡ32λ�޷���������������Ҫ��֤value_t��������32λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
uint32_t value_uint32(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��64λ�з�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_int64(value_t* gv, int64_t value);

/**
 * \brief ��ȡ64λ�з���������������Ҫ��֤value_t��������64λ�з�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
int64_t value_int64(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��64λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_uint64(value_t* gv, uint64_t value);

/**
 * \brief ��ȡ64λ�޷���������������Ҫ��֤value_t��������64λ�޷�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
uint64_t value_uint64(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��ָ�롣
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_pointer(value_t* gv, void* value, destroy_t destroy);

/**
 * \brief ��ȡָ�롣��������Ҫ��֤value_t��������ָ�롣
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
void* value_pointer(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ�������ȸ�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_float(value_t* gv, float value);

/**
 * \brief ��ȡ�����ȸ���������������Ҫ��֤value_t�������ǵ����ȸ�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
float value_float(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ��˫���ȸ�������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_double(value_t* gv, double value);

/**
 * \brief ��ȡ˫���ȸ���������������Ҫ��֤value_t��������˫���ȸ�������
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
double value_double(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_obj(value_t* gv, struct _obj_t* value);

/**
 * \brief ��ȡ���󡣵�������Ҫ��֤value_t�������Ƕ���
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
struct _obj_t* value_obj(value_t* gv);

/**
 * \brief ��ʼ��value_tΪһ������
 *
 * \param[in] gv            �� value_t����
 * \param[in] value         �� ��ʼ����ֵ��
 * 
 * \retval value_t������
 */
value_t* value_set_str(value_t* gv, struct _str_t* value);

/**
 * \brief ��ȡ���󡣵�������Ҫ��֤value_t�������Ƕ���
 *
 * \param[in] gv            �� value_t����
 * 
 * \retval value_t�����ֵ��
 */
struct _str_t* value_str(value_t* gv);


/**
 * \brief ����һ��value_t��������һ��value_t����
 *
 * \param[in] dst            �� Ŀ��value_t����
 * \param[in] src            �� Դvalue_t����
 * 
 * \retval value_t�����ֵ��
 */
void value_copy(value_t* dst, const value_t* src, bool_t deep_copy);

value_t* value_ref(value_t* value);

value_t* value_unref(value_t* value);

END_C_DECLS

#endif

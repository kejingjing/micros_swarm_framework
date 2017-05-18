//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GSDFPacketDcps.cpp
//  Source: gencxx/GSDFPacketDcps.idl
//  Generated: Wed May 17 22:13:07 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "opensplice_dds_comm/GSDFPacketDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < opensplice_dds_comm::GSDFPacket, struct GSDFPacketSeq_uniq_>;
#endif

const char * opensplice_dds_comm::GSDFPacketTypeSupportInterface::_local_id = "IDL:opensplice_dds_comm/GSDFPacketTypeSupportInterface:1.0";

opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr opensplice_dds_comm::GSDFPacketTypeSupportInterface::_duplicate (opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_comm::GSDFPacketTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_comm::GSDFPacketTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr opensplice_dds_comm::GSDFPacketTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_comm::GSDFPacketTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr opensplice_dds_comm::GSDFPacketTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr result;
   result = dynamic_cast < opensplice_dds_comm::GSDFPacketTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * opensplice_dds_comm::GSDFPacketDataWriter::_local_id = "IDL:opensplice_dds_comm/GSDFPacketDataWriter:1.0";

opensplice_dds_comm::GSDFPacketDataWriter_ptr opensplice_dds_comm::GSDFPacketDataWriter::_duplicate (opensplice_dds_comm::GSDFPacketDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_comm::GSDFPacketDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_comm::GSDFPacketDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_comm::GSDFPacketDataWriter_ptr opensplice_dds_comm::GSDFPacketDataWriter::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketDataWriter_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_comm::GSDFPacketDataWriter::_local_id))
   {
      result = dynamic_cast < opensplice_dds_comm::GSDFPacketDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_comm::GSDFPacketDataWriter_ptr opensplice_dds_comm::GSDFPacketDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketDataWriter_ptr result;
   result = dynamic_cast < opensplice_dds_comm::GSDFPacketDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * opensplice_dds_comm::GSDFPacketDataReader::_local_id = "IDL:opensplice_dds_comm/GSDFPacketDataReader:1.0";

opensplice_dds_comm::GSDFPacketDataReader_ptr opensplice_dds_comm::GSDFPacketDataReader::_duplicate (opensplice_dds_comm::GSDFPacketDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_comm::GSDFPacketDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_comm::GSDFPacketDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_comm::GSDFPacketDataReader_ptr opensplice_dds_comm::GSDFPacketDataReader::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketDataReader_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_comm::GSDFPacketDataReader::_local_id))
   {
      result = dynamic_cast < opensplice_dds_comm::GSDFPacketDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_comm::GSDFPacketDataReader_ptr opensplice_dds_comm::GSDFPacketDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketDataReader_ptr result;
   result = dynamic_cast < opensplice_dds_comm::GSDFPacketDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * opensplice_dds_comm::GSDFPacketDataReaderView::_local_id = "IDL:opensplice_dds_comm/GSDFPacketDataReaderView:1.0";

opensplice_dds_comm::GSDFPacketDataReaderView_ptr opensplice_dds_comm::GSDFPacketDataReaderView::_duplicate (opensplice_dds_comm::GSDFPacketDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean opensplice_dds_comm::GSDFPacketDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, opensplice_dds_comm::GSDFPacketDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

opensplice_dds_comm::GSDFPacketDataReaderView_ptr opensplice_dds_comm::GSDFPacketDataReaderView::_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketDataReaderView_ptr result = NULL;
   if (p && p->_is_a (opensplice_dds_comm::GSDFPacketDataReaderView::_local_id))
   {
      result = dynamic_cast < opensplice_dds_comm::GSDFPacketDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

opensplice_dds_comm::GSDFPacketDataReaderView_ptr opensplice_dds_comm::GSDFPacketDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   opensplice_dds_comm::GSDFPacketDataReaderView_ptr result;
   result = dynamic_cast < opensplice_dds_comm::GSDFPacketDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



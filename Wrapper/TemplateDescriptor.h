#pragma once

#include "mip/rms/template_descriptor.h"

#include "ManagedObject.h"

using namespace System;

namespace NetMip
{
	public ref class TemplateDescriptor : public ManagedObject<std::shared_ptr<mip::TemplateDescriptor>>
	{
	internal:
		TemplateDescriptor(bool owner, std::shared_ptr<mip::TemplateDescriptor>* contentLabel)
			: ManagedObject(owner, contentLabel)
		{}

	public:
		property String ^ TemplateId
		{
			String^ get();
		}

		property String ^ Name
		{
			String^ get();
		}

		property String ^ Description
		{
			String^ get();
		}
	};
}
#include "hello_activator.h"
#include "hello_impl.h"

void HelloActivator::start(ctkPluginContext* context)
{
    s.reset(new HelloImpl(context));
}

void HelloActivator::stop(ctkPluginContext* context)
{
    Q_UNUSED(context)
}

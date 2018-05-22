class _const:
    class ConstError(TypeError): pass
    class ConstCaseError(ConstError): pass
    def __setattr__(self, key, value):
        if self.__dict__.has_key(key):
            raise self.ConstError("Can't change const %s" % key)
        if not key.isupper():
            raise self.ConstError("%s is not all upppercase" % key)
        self.__dict__[key] = value

import sys
sys.modules[__name__] = _const()
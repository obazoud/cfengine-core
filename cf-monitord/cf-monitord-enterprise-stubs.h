/*
   Copyright (C) CFEngine AS

   This file is part of CFEngine 3 - written and maintained by CFEngine AS.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; version 3.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA

  To the extent this program is licensed as part of the Enterprise
  versions of CFEngine, the applicable Commercial Open Source License
  (COSL) may apply to this file if you as a licensee so wish it. See
  included file COSL.txt.
*/

#ifndef CFENGINE_CF_MONITORD_ENTERPRISE_STUBS_H
#define CFENGINE_CF_MONITORD_ENTERPRISE_STUBS_H

#include <cf3.defs.h>

ENTERPRISE_VOID_FUNC_3ARG_DECLARE(void, GetObservable, int, i, char *, name, char *, desc);
ENTERPRISE_VOID_FUNC_1ARG_DECLARE(void, SetMeasurementPromises, Item **, classlist);

ENTERPRISE_VOID_FUNC_0ARG_DECLARE(void, MonOtherInit);
ENTERPRISE_VOID_FUNC_1ARG_DECLARE(void, MonOtherGatherData, double *, cf_this);

ENTERPRISE_VOID_FUNC_2ARG_DECLARE(void, HistoryUpdate, EvalContext *, ctx, Averages, newvals);
ENTERPRISE_FUNC_4ARG_DECLARE(PromiseResult, VerifyMeasurement,
                             EvalContext *, ctx,
                             double *, this,
                             Attributes, a,
                             const Promise *, pp);

#endif

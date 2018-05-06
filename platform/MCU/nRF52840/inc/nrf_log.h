/*
 * Copyright (c) 2018 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NRF_LOG_H
#define NRF_LOG_H

#include "nrfx_log.h"

#ifndef NRF_LOG_MODULE_REGISTER
#define NRF_LOG_MODULE_REGISTER()
#endif /* NRF_LOG_MODULE_REGISTER */

#ifndef NRF_LOG_INFO
#define NRF_LOG_INFO(...)
#endif /* NRF_LOG_INFO */

#ifndef NRF_LOG_WARNING
#define NRF_LOG_WARNING(...)
#endif /* NRF_LOG_WARNING */

#ifndef NRF_LOG_DEBUG
#define NRF_LOG_DEBUG(...)
#endif /* NRF_LOG_DEBUG */

#ifndef NRF_LOG_ERROR
#define NRF_LOG_ERROR(...)
#endif /* NRF_LOG_ERROR */

#endif /* NRF_LOG_H */

/*
 *	Copyright 2024 Jan Pfeifer
 *
 *	Licensed under the Apache License, Version 2.0 (the "License");
 *	you may not use this file except in compliance with the License.
 *	You may obtain a copy of the License at
 *
 *	http://www.apache.org/licenses/LICENSE-2.0
 *
 *	Unless required by applicable law or agreed to in writing, software
 *	distributed under the License is distributed on an "AS IS" BASIS,
 *	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *	See the License for the specific language governing permissions and
 *	limitations under the License.
 */

package gopjrt

import (
	"fmt"
	"github.com/stretchr/testify/require"
	"testing"
)

// TestLoadPlatformCPU requires that PJRT CPU plugin be available.
func TestLoadPlatformCPU(t *testing.T) {
	plugin, err := loadNamedPlugin("cpu")
	require.NoError(t, err)
	fmt.Printf("Loaded %s\n", plugin)

	// Checks cache works.
	plugin2, err := loadNamedPlugin("cpu")
	require.NoError(t, err)
	require.Equal(t, plugin, plugin2)
	plugin3, err := loadNamedPlugin(plugin2.Path()) // Try by using the absolute path, should return the same plugin.
	require.NoError(t, err)
	require.Equal(t, plugin2, plugin3)

	// Checks non-existent (yet) plugin.
	plugin, err = loadNamedPlugin("milliways")
	fmt.Printf("Loading milliways plugin, expected error: %v", err)
	require.Error(t, err)
}

// TestGetPlatforms requires that PJRT CPU plugin be available.
func TestGetPlatforms(t *testing.T) {
	plugins := AvailablePlugins()
	fmt.Printf("Available plugins: %v\n", plugins)
	require.NotEqual(t, "", plugins["cpu"], "Can not find \"cpu\" plugin")
}

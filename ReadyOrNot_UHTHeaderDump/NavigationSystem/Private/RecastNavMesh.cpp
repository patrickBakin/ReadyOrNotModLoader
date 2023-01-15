#include "RecastNavMesh.h"
#include "Templates/SubclassOf.h"

class UNavArea;

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks) {
    return false;
}

ARecastNavMesh::ARecastNavMesh() {
    this->bDrawTriangleEdges = false;
    this->bDrawPolyEdges = false;
    this->bDrawFilledPolys = true;
    this->bDrawNavMeshEdges = true;
    this->bDrawTileBounds = false;
    this->bDrawPathCollidingGeometry = false;
    this->bDrawTileLabels = false;
    this->bDrawPolygonLabels = false;
    this->bDrawDefaultPolygonCost = false;
    this->bDrawPolygonFlags = false;
    this->bDrawLabelsOnPathNodes = false;
    this->bDrawNavLinks = true;
    this->bDrawFailedNavLinks = false;
    this->bDrawClusters = false;
    this->bDrawOctree = false;
    this->bDrawOctreeDetails = true;
    this->bDrawMarkedForbiddenPolys = false;
    this->bDistinctlyDrawTilesBeingBuilt = true;
    this->DrawOffset = 10.00f;
    this->bFixedTilePoolSize = true;
    this->TilePoolSize = 10000;
    this->TileSizeUU = 1600.00f;
    this->CellSize = 5.00f;
    this->CellHeight = 10.00f;
    this->AgentRadius = 39.00f;
    this->AgentHeight = 144.00f;
    this->AgentMaxSlope = 40.00f;
    this->AgentMaxStepHeight = 31.00f;
    this->MinRegionArea = 100.00f;
    this->MergeRegionSize = 400.00f;
    this->MaxSimplificationError = 1.30f;
    this->MaxSimultaneousTileGenerationJobsCount = 512;
    this->TileNumberHardLimit = 2097152;
    this->PolyRefTileBits = 21;
    this->PolyRefNavPolyBits = 32;
    this->PolyRefSaltBits = 11;
    this->DefaultDrawDistance = 5000.00f;
    this->DefaultMaxSearchNodes = 8192.00f;
    this->DefaultMaxHierarchicalSearchNodes = 2048.00f;
    this->RegionPartitioning = ERecastPartitioning::Watershed;
    this->LayerPartitioning = ERecastPartitioning::Watershed;
    this->RegionChunkSplits = 2;
    this->LayerChunkSplits = 2;
    this->bSortNavigationAreasByCost = false;
    this->bPerformVoxelFiltering = true;
    this->bMarkLowHeightAreas = false;
    this->bUseExtraTopCellWhenMarkingAreas = true;
    this->bFilterLowSpanSequences = false;
    this->bFilterLowSpanFromTileCache = false;
    this->bDoFullyAsyncNavDataGathering = true;
    this->bUseBetterOffsetsFromCorners = true;
    this->bStoreEmptyTileLayers = false;
    this->bUseVirtualFilters = true;
    this->bAllowNavLinkAsPathEnd = false;
    this->bUseVoxelCache = false;
    this->TileSetUpdateInterval = 1.00f;
    this->HeuristicScale = 1.00f;
    this->VerticalDeviationFromGroundCompensation = 0.00f;
}


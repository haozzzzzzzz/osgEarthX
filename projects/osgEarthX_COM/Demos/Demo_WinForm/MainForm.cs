using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using osgEarthX_COMLib;

namespace Demo_WinForm
{
    public partial class MainForm : Form
    {
        private EarthMap m_earthMap = null;
        private EarthGroup m_earthRoot = null;

        private Sky m_sky = null;

        private TileSourceGDAL tileSourceGDAL = null;
        private TileSourceTMS tileSourceTMS = null;
        private VectorSourceGeom vectorSourceGeom = null;
        private FeatureSourceOGR featureSourceOGR = null;

        private ImageSurfaceLayer imageSurfaceLayerA = null;
        private ImageSurfaceLayer imageSurfaceLayerB = null;
        private ImageSurfaceLayer imageSurfaceLayerC = null;
        private ImageSurfaceLayer imageSurfaceLayerDebug = null;
        private ImageSurfaceLayer imageSurfaceLayerNoise = null;
        private ImageSurfaceLayer imageSurfaceLayerAGGLite = null;
        private ImageSurfaceLayer imageSurfaceLayerMBTiles = null;
        private ImageSurfaceLayer imageSurfaceLayerArcGIS = null;

        private VectorSurfaceLayer vectorSurfaceLayerD = null;

        private EarthGroup groupOfEFG = null;
        private VectorSurfaceLayer vectorSurfaceLayerE = null;
        private VectorSurfaceLayer vectorSurfaceLayerF = null;
        private VectorSurfaceLayer vectorSurfaceLayerG = null;

        //TMS
        private ImageSurfaceLayer tmsImageSurfaceLayerH = null;
        private ElevationSurfaceLayer tmsElevationSurfaceLayerI = null;

        //Elevation
        private ElevationSurfaceLayer elevSurfaceLayerJ = null;
        private ElevationSurfaceLayer elevSurfaceLayerNoise = null;

        //Viewpoints
        private Viewpoint vpAsia = null;
        private Viewpoint vpAmerica = null;

        //Graticule
        private Graticule graticule = null;

        //Annotation
        private Place placeBJ = null;
        private ImageOverlay imageOverlayCN = null;
        private FeaturePrimitive featureWKT = null;
        private Model modelStreetLight = null;
        private TextLabel textLabel = null;
        private RectanglePrimitive rectanglePrimitive = null;
        private EllipsePrimitive ellipsePrimitive = null;

        private FeaturePrimitive featurePrimitiveLineString = null;

        public MainForm()
        {
            InitializeComponent();
            m_earthMap = axEarthCtrl1.getEarthMap();
            m_earthMap.maxThreadsNum = 10;//设置可用线程上限

            m_earthRoot = axEarthCtrl1.getEarthRoot();

            m_sky = new Sky();
            axEarthCtrl1.setActiveSky( m_sky );

            addVPAsia();
            axEarthCtrl1.setHomeViewpoint( vpAsia );

            axEarthCtrl1.run();

            tileSourceGDAL = new TileSourceGDAL();
            tileSourceTMS = new TileSourceTMS();
            vectorSourceGeom = new VectorSourceGeom();
            featureSourceOGR = new FeatureSourceOGR();
        }

        private void ribbonButton2_Click(object sender, EventArgs e)
        {
            addImgLayerA();
        }
        private void addImgLayerA()
        {
            if ( imageSurfaceLayerA == null )
            {
                imageSurfaceLayerA = new ImageSurfaceLayer();
                //tileSourceGDAL.url = "E:\\OpenSceneGraph\\data\\download\\world.topo.bathy\\world.topo.bathy.200406.3x86400x43200_translate_tiled.tif";
                tileSourceGDAL.url = "E:\\OpenSceneGraph\\data\\world.tif";
                imageSurfaceLayerA.tileSource = tileSourceGDAL;
                m_earthRoot.addChild( imageSurfaceLayerA );
            }
        }
        private void ribbonButton3_Click(object sender, EventArgs e)
        {
            addImageLayerB();
        }

        private void addImageLayerB()
        {
            if ( imageSurfaceLayerB == null )
            {
                imageSurfaceLayerB = new ImageSurfaceLayer();
                tileSourceGDAL.url = "E:\\OpenSceneGraph\\data\\download\\world.topo.bathy\\world.topo.bathy.200406.3x86400x43200_translate_tiled.tif";
                imageSurfaceLayerB.tileSource = tileSourceGDAL;
                m_earthRoot.addChild( imageSurfaceLayerB );
            }
        }

        private void ribbonButton6_Click(object sender, EventArgs e)
        {
            addVecLayerD();
        }
        private void addVecLayerD()
        {
            if (vectorSurfaceLayerD == null)
            {
                vectorSurfaceLayerD = new VectorSurfaceLayer();
                featureSourceOGR.url = "E:\\OpenSceneGraph\\data\\world.shp";
                vectorSourceGeom.featureSource = featureSourceOGR;
                vectorSurfaceLayerD.vectorSource = vectorSourceGeom;
                m_earthRoot.addChild(vectorSurfaceLayerD);
            }
        }

        private void ribbonButton7_Click(object sender, EventArgs e)
        {
            addVecLayerEFG();
        }

        private void addVecLayerEFG()
        {
            if (groupOfEFG == null)
            {
                groupOfEFG = new EarthGroup();

                if (vectorSurfaceLayerE == null)
                {
                    vectorSurfaceLayerE = new VectorSurfaceLayer();
                    featureSourceOGR.url = "E:\\OpenSceneGraph\\data\\China\\中国_省.shp";
                    vectorSourceGeom.featureSource = featureSourceOGR;
                    vectorSurfaceLayerE.vectorSource = vectorSourceGeom;
                    groupOfEFG.addChild(vectorSurfaceLayerE);
                }

                if (vectorSurfaceLayerF == null)
                {
                    vectorSurfaceLayerF = new VectorSurfaceLayer();
                    featureSourceOGR.url = "E:\\OpenSceneGraph\\data\\China\\中国_市.shp";
                    vectorSourceGeom.featureSource = featureSourceOGR;
                    vectorSurfaceLayerF.vectorSource = vectorSourceGeom;
                    groupOfEFG.addChild(vectorSurfaceLayerF);
                }

                if (vectorSurfaceLayerG == null)
                {
                    vectorSurfaceLayerG = new VectorSurfaceLayer();
                    featureSourceOGR.url = "E:\\OpenSceneGraph\\data\\China\\中国_区县.shp";
                    vectorSourceGeom.featureSource = featureSourceOGR;
                    vectorSurfaceLayerG.vectorSource = vectorSourceGeom;
                    groupOfEFG.addChild(vectorSurfaceLayerG);
                }

                m_earthRoot.addChild(groupOfEFG);
            }
        }

        private void ribbonButton8_Click(object sender, EventArgs e)
        {
            addImgLayerA();
            addImageLayerB();
            addImageLayerC();
            addVecLayerD();
            addVecLayerEFG();

            addElevSurLayerJ();
        }

        private void ribbonButton4_Click(object sender, EventArgs e)
        {
            if (vectorSurfaceLayerD != null)
            {
                m_earthRoot.removeChild(vectorSurfaceLayerD);
                vectorSurfaceLayerD = null;
            }
        }

        private void ribbonButton9_Click(object sender, EventArgs e)
        {
            uint pos = 2;

            //先把引用了pos位置的物体的引用设为null
            IEarthObject earthObject = m_earthRoot.getChild(pos);
            if (earthObject == null)
            {
                return;
            }

            if (earthObject.equal(imageSurfaceLayerA))
            {
                imageSurfaceLayerA = null;
            }else if (earthObject.equal(imageSurfaceLayerB))
            {
                imageSurfaceLayerB = null;
            }else if (earthObject.equal(imageSurfaceLayerC))
            {
                imageSurfaceLayerC = null;
            }else if (earthObject.equal(vectorSurfaceLayerD))
            {
                vectorSurfaceLayerD = null;
            }else if (earthObject.equal(groupOfEFG))
            {
                groupOfEFG = null;
                vectorSurfaceLayerE = null;
                vectorSurfaceLayerF = null;
                vectorSurfaceLayerG = null;
            }

            m_earthRoot.removeChildByPos(pos);
        }

        static private bool ifImageSurfaceLayerAShow = false;
        private void ribbonButton11_Click(object sender, EventArgs e)
        {
            if (imageSurfaceLayerA != null)
            {
                imageSurfaceLayerA.visible = ifImageSurfaceLayerAShow;
                ifImageSurfaceLayerAShow = !ifImageSurfaceLayerAShow;
            }
        }

        static private bool ifEarthRootShow = false;
        private void ribbonButton12_Click(object sender, EventArgs e)
        {
            if (m_earthRoot != null)
            {
                m_earthRoot.visible = ifEarthRootShow;
                ifEarthRootShow = !ifEarthRootShow;
            }
        }

        private void ribbonButton13_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChildren();
            imageSurfaceLayerA = null;
            imageSurfaceLayerB = null;
            imageSurfaceLayerC = null;
            imageSurfaceLayerDebug = null;
            imageSurfaceLayerNoise = null;
            imageSurfaceLayerAGGLite = null;
            imageSurfaceLayerMBTiles = null;
            imageSurfaceLayerArcGIS = null;

            vectorSurfaceLayerD = null;

            groupOfEFG = null;
            vectorSurfaceLayerE = null;
            vectorSurfaceLayerF = null;
            vectorSurfaceLayerG = null;

            tmsImageSurfaceLayerH = null;
            tmsElevationSurfaceLayerI = null;

            elevSurfaceLayerJ = null;
            elevSurfaceLayerNoise = null;
        }

        private void ribbonButton5_Click(object sender, EventArgs e)
        {
            addImageLayerC();
        }

        private void addImageLayerC()
        {
            if (imageSurfaceLayerC == null)
            {
                imageSurfaceLayerC = new ImageSurfaceLayer();
                tileSourceGDAL.url = "E:\\OpenSceneGraph\\data\\download\\dnb_land_ocean_ice.2012.54000x27000_geo_transform.tif";
                imageSurfaceLayerC.tileSource = tileSourceGDAL;
                m_earthRoot.addChild(imageSurfaceLayerC);
            }
        }

        private void ribbonButton15_Click(object sender, EventArgs e)
        {
            if (imageSurfaceLayerA != null)
            {
                m_earthRoot.removeChild(imageSurfaceLayerA);
                imageSurfaceLayerA = null;
            }
        }

        private void ribbonButton10_Click(object sender, EventArgs e)
        {
            if ( imageSurfaceLayerC != null )
            {
                m_earthRoot.moveChild( imageSurfaceLayerC, 0 );//或者m_earthRoot.moveChildFromCurPos(2, 0);假设imageSurfaceLayerC在2位置
            }
        }

        private void ribbonButton16_Click(object sender, EventArgs e)
        {
            removeGroupOfEFG();
        }

        private void removeGroupOfEFG()
        {
            if (groupOfEFG != null)
            {
                m_earthRoot.removeChild(groupOfEFG);
                groupOfEFG = null;
                vectorSurfaceLayerE = null;
                vectorSurfaceLayerF = null;
                vectorSurfaceLayerG = null;
            }
        }

        private void ribbonButton18_Click(object sender, EventArgs e)
        {
            addVPAsia();
            vpAsia.flyTo();
        }

        private void addVPAsia()
        {
            if (vpAsia == null)
            {
                vpAsia = new Viewpoint();
                vpAsia.x = 107.85;
                vpAsia.y = 32.35;
                vpAsia.z = 0.0;
                vpAsia.heading = -3.57;
                vpAsia.pitch = -90;
                vpAsia.range = 19134411;

                m_earthRoot.addChild(vpAsia);
            }
        }

        private void ribbonButton19_Click(object sender, EventArgs e)
        {
            if ( vpAmerica == null )
            {
                vpAmerica = new Viewpoint();
                vpAmerica.x = -90;
                vpAmerica.y = 0;
                vpAmerica.z = 0;
                vpAmerica.heading = -3.57;
                vpAmerica.pitch = -89;
                vpAmerica.range = 19134411;

                m_earthRoot.addChild(vpAmerica);
            }

            vpAmerica.flyTo();
        }

        private bool bSkyLightingOn = true;
        private void ribbonButton20_Click(object sender, EventArgs e)
        {
            if (m_sky != null)
            {
                bSkyLightingOn = !bSkyLightingOn;
                m_sky.enableLighting = bSkyLightingOn;
            }
        }

        private void ribbonButton22_Click(object sender, EventArgs e)
        {
            if ( m_sky != null )
            {
                m_sky.ambient = 0.5f;
            }
        }

        private void ribbonButton23_Click(object sender, EventArgs e)
        {
            if ( m_sky != null )
            {
                m_sky.hours = 06.0f;
            }
        }

        private void ribbonButton14_Click(object sender, EventArgs e)
        {
            addTMSImageSurfaceLayerH();
        }

        private void addTMSImageSurfaceLayerH()
        {
            if ( tmsImageSurfaceLayerH == null )
            {
                tmsImageSurfaceLayerH = new ImageSurfaceLayer();
                tileSourceTMS.url = "E:\\OpenSceneGraph\\data\\download\\beijing_img\\tms.xml";
                tmsImageSurfaceLayerH.tileSource = tileSourceTMS;
                m_earthRoot.addChild( tmsImageSurfaceLayerH );
            }
        }

        private void addTMSElevationSurfaceLayerI()
        {
            if ( tmsElevationSurfaceLayerI == null )
            {
                tmsElevationSurfaceLayerI = new ElevationSurfaceLayer();
                tileSourceTMS.url = "http://readymap.org/readymap/tiles/1.0.0/9/";
                tmsElevationSurfaceLayerI.tileSource = tileSourceTMS;
                m_earthRoot.addChild( tmsElevationSurfaceLayerI );
            }
        }

        private void ribbonButton17_Click(object sender, EventArgs e)
        {
            addTMSElevationSurfaceLayerI();
        }

        private void ribbonButton24_Click(object sender, EventArgs e)
        {
            addElevSurLayerJ();
        }

        private void addElevSurLayerJ()
        {
            if ( elevSurfaceLayerJ == null )
            {
                elevSurfaceLayerJ = new ElevationSurfaceLayer();
                tileSourceGDAL.url = "E:\\OpenSceneGraph\\data\\download\\DEM\\e060n40\\E060N40.DEM";
                elevSurfaceLayerJ.tileSource = tileSourceGDAL;
                m_earthRoot.addChild( elevSurfaceLayerJ );
            }
        }

        private void ribbonButton26_Click(object sender, EventArgs e)
        {
            addImageSurfaceLayerDebug();
        }

        private void addImageSurfaceLayerDebug()
        {
            if (imageSurfaceLayerDebug == null)
            {
                imageSurfaceLayerDebug = new ImageSurfaceLayer();
                imageSurfaceLayerDebug.tileSource = new TileSourceDebug();
                m_earthRoot.addChild( imageSurfaceLayerDebug );
            }
        }

        private void ribbonButton29_Click(object sender, EventArgs e)
        {
            addImageSurfaceLayerNoise();
        }

        private void addImageSurfaceLayerNoise()
        {
            if( imageSurfaceLayerNoise == null )
            {
                TileSourceNoise noise = new TileSourceNoise();
                noise.resolution = 3185500;
                noise.octaves = 12;

                imageSurfaceLayerNoise = new ImageSurfaceLayer();
                imageSurfaceLayerNoise.tileSource = noise;
                m_earthRoot.addChild( imageSurfaceLayerNoise );
            }
        }

        private void ribbonButton31_Click(object sender, EventArgs e)
        {
            addElevSurLyerNoise();
        }

        private void addElevSurLyerNoise()
        {
            if (elevSurfaceLayerNoise == null)
            {
                TileSourceNoise noise = new TileSourceNoise();
                noise.resolution = 250;
                noise.scale = 20;
                noise.octaves = 4;

                elevSurfaceLayerNoise = new ElevationSurfaceLayer();
                elevSurfaceLayerNoise.tileSource = noise;
                m_earthRoot.addChild( elevSurfaceLayerNoise );
            }
        }

        private void ribbonButton32_Click(object sender, EventArgs e)
        {
            addImageSurfaceLayerAGGLite();
        }

        private void addImageSurfaceLayerAGGLite()
        {
            if (imageSurfaceLayerAGGLite == null)
            {
                TileSourceAGGLite aggLite = new TileSourceAGGLite();
                FeatureSourceOGR ogr = new FeatureSourceOGR();
                ogr.url = "E:\\OpenSceneGraph\\data\\world.shp";
                aggLite.featureSource = ogr;

                imageSurfaceLayerAGGLite = new ImageSurfaceLayer();
                imageSurfaceLayerAGGLite.tileSource = aggLite;
                m_earthRoot.addChild( imageSurfaceLayerAGGLite );
            }
        }

        private void ribbonButton33_Click(object sender, EventArgs e)
        {
            addImageSurfaceLayerMBTiles();
        }

        private void addImageSurfaceLayerMBTiles()
        {
            if (imageSurfaceLayerMBTiles == null)
            {
                MessageBox.Show( "未支持" );
                //TileSourceMBTiles mbtiles = new TileSourceMBTiles();
                //mbtiles.fileName = "";
                //mbtiles.format = "";

                //imageSurfaceLayerMBTiles = new ImageSurfaceLayer();
                //m_earthRoot.addChild( imageSurfaceLayerMBTiles );
            }
        }

        private void ribbonButton34_Click(object sender, EventArgs e)
        {
            addGraticule();
        }

        private void addGraticule()
        {
            if (graticule == null)
            {
                graticule = new Graticule();
            }
            axEarthCtrl1.setActiveGraticule(graticule);
        }

        private void ribbonButton36_Click(object sender, EventArgs e)
        {
            axEarthCtrl1.removeActiveGraticule();
        }

        private void ribbonButton37_Click(object sender, EventArgs e)
        {
            if (placeBJ == null)
            {
                placeBJ = new Place();
                placeBJ.setText( "北京" );
                placeBJ.setImageSrc( "../data/placemark32.png" );
                GeoPoint point = new GeoPoint();
                point.x = 116.3;
                point.y = 39.9;
                placeBJ.setPosition( point );
                m_earthRoot.addChild(placeBJ);
            }
        }

        private void ribbonButton38_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild(placeBJ);
            placeBJ = null;
        }

        private void ribbonButton39_Click(object sender, EventArgs e)
        {
            if (imageOverlayCN == null)
            {
                imageOverlayCN = new ImageOverlay();
                imageOverlayCN.setImageSrc("../data/flagCN.png");
                imageOverlayCN.setBounds( 100, 35.0, 110.0, 40.0);
                m_earthRoot.addChild(imageOverlayCN);
            }
        }

        private void ribbonButton40_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild(imageOverlayCN);
            imageOverlayCN = null;
        }

        private void ribbonButton41_Click(object sender, EventArgs e)
        {
            addImageSurfaceLayerArcGIS();
        }

        private void addImageSurfaceLayerArcGIS()
        {
            if (imageSurfaceLayerArcGIS == null)
            {
                TileSourceArcGIS tileSourceArcGIS = new TileSourceArcGIS();
                tileSourceArcGIS.url = "http://services.arcgisonline.com/ArcGIS/rest/services/World_Topo_Map/MapServer";
                imageSurfaceLayerArcGIS = new ImageSurfaceLayer();
                imageSurfaceLayerArcGIS.tileSource = tileSourceArcGIS;
                m_earthRoot.addChild( imageSurfaceLayerArcGIS );
            }
        }

        private void ribbonButton42_Click(object sender, EventArgs e)
        {
            VectorSurfaceLayer zhengzhou = new VectorSurfaceLayer();
            VectorSourceGeom geom = new VectorSourceGeom();
            FeatureSourceOGR ogr = new FeatureSourceOGR();

            ogr.url = "E:\\OpenSceneGraph\\data\\zhengzhou\\440100郑州冬小麦prj.shp";
            //ogr.url = "E:\\OpenSceneGraph\\data\\henan\\dxmall\\河南省冬小麦.shp";
            geom.featureSource = ogr;
            zhengzhou.vectorSource = geom;
            m_earthRoot.addChild( zhengzhou );
        }

        private void ribbonButton43_Click(object sender, EventArgs e)
        {
            TileSourceAGGLite aggLite = new TileSourceAGGLite();
            FeatureSourceOGR ogr = new FeatureSourceOGR();
            ogr.url = "E:\\OpenSceneGraph\\data\\zhengzhou\\440100郑州冬小麦prj.shp";
            //ogr.url = "E:\\OpenSceneGraph\\data\\henan\\dxmall\\河南省冬小麦.shp";

            aggLite.featureSource = ogr;

            ImageSurfaceLayer imageSurfaceLayer = new ImageSurfaceLayer();
            imageSurfaceLayer.tileSource = aggLite;
            m_earthRoot.addChild(imageSurfaceLayer);
        }

        private void ribbonButton44_Click(object sender, EventArgs e)
        {
            MessageBox.Show( "未支持" );
            //if (featureWKT == null)
            //{
            //    featureWKT = new FeaturePrimitive();
            //    featureWKT.fromWKT("POLYGON((86.1441935919757 38.90463467086696,88.9851807715971 26.249507483326358,113.2698248040255 22.606334108821407,122.2578634316142 37.920493230422295,102.28147346655497 44.690853785451374,86.1441935919757 38.90463467086696))");
            //    m_earthRoot.addChild( featureWKT );
            //}
        }

        private void ribbonButton45_Click(object sender, EventArgs e)
        {
            if (modelStreetLight == null)
            {
                modelStreetLight = new Model();
                modelStreetLight.setModelPath( "E:\\OpenSceneGraph\\data\\streetlight.osgb.18000.scale" );
                GeoPoint pos = new GeoPoint();
                pos.x = 116.3;
                pos.y = 39.9;
                pos.z = 1000.0;
                pos.srs = m_earthMap.getSRS();
                modelStreetLight.setPosition(pos);
                m_earthRoot.addChild( modelStreetLight );
            }
        }

        private void ribbonButton46_Click(object sender, EventArgs e)
        {
            if (textLabel == null)
            {
                textLabel = new TextLabel();
                textLabel.setText( "测试一下TextLabel" );
                GeoPoint pos = new GeoPoint();
                pos.x = 116.3;
                pos.y = 39.9;
                pos.z = 1000.0;
                pos.srs = m_earthMap.getSRS();
                textLabel.setPosition( pos );
                m_earthRoot.addChild( textLabel );
            }
        }

        private void ribbonButton47_Click(object sender, EventArgs e)
        {
            if (rectanglePrimitive == null)
            {
                rectanglePrimitive = new RectanglePrimitive();
                GeoPoint pos = new GeoPoint();
                pos.x = 116.3;
                pos.y = 39.9;
                pos.srs = m_earthMap.getSRS();
                Linear linear = new Linear();
                linear.set( 1000, UnitsType.UNIT_KILOMETERS );

                rectanglePrimitive.setPosition( pos );
                rectanglePrimitive.setHeight( linear );
                rectanglePrimitive.setWidth(linear);

                m_earthRoot.addChild( rectanglePrimitive );
            }
        }

        private void ribbonButton48_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild(rectanglePrimitive);
            rectanglePrimitive = null;
        }

        private void ribbonButton49_Click(object sender, EventArgs e)
        {
            if (ellipsePrimitive == null)
            {
                GeoPoint pos = new GeoPoint();
                pos.x = 116.3;
                pos.y = 39.9;
                pos.srs = m_earthMap.getSRS();

                Linear radiusMajor = new Linear();
                radiusMajor.set( 250, UnitsType.UNIT_MILES );

                Linear radiusMinor = new Linear();
                radiusMinor.set( 100, UnitsType.UNIT_MILES );

                Angular rotationAngle = new Angular();
                rotationAngle.set( 0, UnitsType.UNIT_DEGREES );

                Angular arcStart = new Angular();
                arcStart.set( 45.0, UnitsType.UNIT_DEGREES );

                Angular arcEnd = new Angular();
                arcEnd.set( 360.0 - 45.0, UnitsType.UNIT_DEGREES );


                ellipsePrimitive = new EllipsePrimitive();
                ellipsePrimitive.setPosition( pos );
                ellipsePrimitive.setRadiusMajor( radiusMajor );
                ellipsePrimitive.setRadiusMinor(radiusMinor);
                ellipsePrimitive.setRotationAngle(rotationAngle);
                ellipsePrimitive.setArcStart(arcStart);
                ellipsePrimitive.setArcEnd(arcEnd);
                ellipsePrimitive.setPie(true);
                m_earthRoot.addChild( ellipsePrimitive);
            }
        }

        private void ribbonButton50_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild( ellipsePrimitive );
            ellipsePrimitive = null;
        }

        private void ribbonButton51_Click(object sender, EventArgs e)
        {
            if (featurePrimitiveLineString == null)
            {
                LineStringGeometry lineString = new LineStringGeometry();
                Vec3d vec3d1 = new Vec3d();
                vec3d1.set(-74, 40.714, 0);
                Vec3d vec3d2 = new Vec3d();
                vec3d2.set(139.75, 35.68, 0);
                lineString.push_back(vec3d1);
                lineString.push_back(vec3d2);

                Feature feature = new Feature();
                feature.setGeometry( lineString );
                featurePrimitiveLineString = new FeaturePrimitive();
                featurePrimitiveLineString.setFeature( feature );
                m_earthRoot.addChild( featurePrimitiveLineString );
            }
        }

        private void ribbonButton52_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild( featurePrimitiveLineString );
            featurePrimitiveLineString = null;
        }

        private FeaturePrimitive featurePolygon = null;
        private void ribbonButton53_Click(object sender, EventArgs e)
        {
            if (featurePolygon == null)
            {
                Vec3d vec1 = new Vec3d();
                vec1.set(0, 40, 0);
                Vec3d vec2 = new Vec3d();
                vec2.set(-60, 40, 0);
                Vec3d vec3 = new Vec3d();
                vec3.set(-60, 60, 0);
                Vec3d vec4 = new Vec3d();
                vec4.set( 0, 60, 0 );

                PolygonGeometry polygon = new PolygonGeometry();
                polygon.push_back( vec1 );
                polygon.push_back( vec2 );
                polygon.push_back( vec3 );
                polygon.push_back( vec4 );
                Feature feature = new Feature();
                feature.setGeometry(polygon);
                featurePolygon = new FeaturePrimitive();
                featurePolygon.setFeature( feature );
                m_earthRoot.addChild( featurePolygon );
            }
        }

        private void ribbonButton54_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild( featurePolygon );
            featurePolygon = null;
        }

        private Circle circle = null;
        private void ribbonButton55_Click(object sender, EventArgs e)
        {
            if (circle == null)
            {
                GeoPoint pos = new GeoPoint();
                pos.x = 116.3;
                pos.y = 39.9;
                pos.srs = m_earthMap.getSRS();

                Linear linear = new Linear();
                linear.set( 300, UnitsType.UNIT_KILOMETERS );

                Angular angularStart = new Angular();
                angularStart.set(-45.0, UnitsType.UNIT_DEGREES);

                Angular angularEnd = new Angular();
                angularEnd.set( 45.0, UnitsType.UNIT_DEGREES );

                circle = new Circle();
                circle.setPosition( pos );
                circle.setRadius( linear );
                circle.setArcStart( angularStart );
                circle.setArcEnd( angularEnd );
                circle.setPie( true );
                m_earthRoot.addChild( circle );
            }
        }

        private void ribbonButton56_Click(object sender, EventArgs e)
        {
            m_earthRoot.removeChild( circle );
            circle = null;
        }
    }
}

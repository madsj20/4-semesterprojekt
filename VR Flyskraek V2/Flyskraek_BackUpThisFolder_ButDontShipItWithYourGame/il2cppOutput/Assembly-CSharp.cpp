#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<GameEventListener>
struct List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Component,UnityEngine.Object>
struct UnityEvent_2_t79833CED6563B86749DE624232DD5D9E55DF88EA;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// GameEventListener[]
struct GameEventListenerU5BU5D_tE572B2ED4ADDC724337C3CE2D97E55541202904C;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// DigitalRuby.RainMaker.BaseRainScript
struct BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ButtonEvents
struct ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CubeColorTest
struct CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6;
// CustomGameEvent
struct CustomGameEvent_t4BE8E840254FF4F10DA0A9CA9D1CD46A291FF962;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Fade
struct Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D;
// GameEvent
struct GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91;
// GameEventListener
struct GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HMDInfoManger
struct HMDInfoManger_t6E45A4DD361A4205507E5B4A56F0577AAC1BC009;
// Hand
struct Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1;
// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C;
// Highlights
struct Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// Intro
struct Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LightToggle
struct LightToggle_t6C44FD5A0C01E78EF6E2458C0D28CA50BE51896F;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// DigitalRuby.RainMaker.LoopingAudioSource
struct LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3;
// MaskSpringVisualiser
struct MaskSpringVisualiser_t687DC5E75F30129A34472848B630D288226E0F9D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PhysicsButton
struct PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// DigitalRuby.RainMaker.RainCollision
struct RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3;
// DigitalRuby.RainMaker.RainScript
struct RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8;
// DigitalRuby.RainMaker.RainScript2D
struct RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WindZone
struct WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Fade/<FadeIn>d__2
struct U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132;
// Intro/<NextScene>d__4
struct U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1CB96331DDC4B41AA1890584AB0353D64BCB787A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5CA0BEF50CDB56C4E2EBEC765358CEEA8D93C7;
IL2CPP_EXTERN_C String_t* _stringLiteral399F1275E9B02D0A1F1ED0E64CE3DCFF4512204F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2;
IL2CPP_EXTERN_C String_t* _stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2;
IL2CPP_EXTERN_C String_t* _stringLiteral63500432B9A638691D365650A3E4A27428AABA0C;
IL2CPP_EXTERN_C String_t* _stringLiteral880726C662703809411B4F6D3B1B9B38ED6FAAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A4F613F59985DC28F058D808CD3BBF2478DD5F;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCB7D1D4CC3D2855C6FBE8498CE25DBA79B71FC;
IL2CPP_EXTERN_C String_t* _stringLiteralCF488641CAD07C1D27544BE04B2265864B03D100;
IL2CPP_EXTERN_C String_t* _stringLiteralDC48A9BAD431C38087A695F1F5738DD85AEA830B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF0FB763F1C000D946F9FF7623AC58CCCE5836CB;
IL2CPP_EXTERN_C String_t* _stringLiteralF4EB07FC09225A4CF2829A9AF89D3CB519192B84;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CubeColorTest_Toggle_m708DDCAE67297974C15D223C1345E79D2FC4902C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6706B41ECEDD738A671EE6BE51649B546F0F5678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mDB76FFAAFCACA5F6B0AFA326A4BA25FB4A2266F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEEF37D39B024319CA187B47B744C8FE368F5C576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA386C4FF862EA8016C0CF2342C9B5DED57213A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC8198924AA24D9E5F98E2AD13B13B7A764941036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_resetPosition_mAF5DCFB3DD220CC83DFC416C0213E3F699330655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__2_System_Collections_IEnumerator_Reset_mBD2A9F6BE111BB7C7AF6C7FCD60B831F2D0F0549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNextSceneU3Ed__4_System_Collections_IEnumerator_Reset_m65CAE21537FC6F69023BE29746E9011C1C78B498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m4B979A52248A01FCACC5FBBDDAB99ECFC18DF3CD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<GameEventListener>
struct List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameEventListenerU5BU5D_tE572B2ED4ADDC724337C3CE2D97E55541202904C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameEventListenerU5BU5D_tE572B2ED4ADDC724337C3CE2D97E55541202904C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// DigitalRuby.RainMaker.LoopingAudioSource
struct LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3  : public RuntimeObject
{
	// UnityEngine.AudioSource DigitalRuby.RainMaker.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.RainMaker.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Fade/<FadeIn>d__2
struct U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132  : public RuntimeObject
{
	// System.Int32 Fade/<FadeIn>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fade/<FadeIn>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fade Fade/<FadeIn>d__2::<>4__this
	Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* ___U3CU3E4__this_2;
	// UnityEngine.CanvasGroup Fade/<FadeIn>d__2::<canvasGroup>5__2
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___U3CcanvasGroupU3E5__2_3;
};

// Intro/<NextScene>d__4
struct U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19  : public RuntimeObject
{
	// System.Int32 Intro/<NextScene>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Intro/<NextScene>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Intro Intro/<NextScene>d__4::<>4__this
	Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* ___U3CU3E4__this_2;
	// System.Int32 Intro/<NextScene>d__4::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.Component,UnityEngine.Object>
struct UnityEvent_2_t79833CED6563B86749DE624232DD5D9E55DF88EA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.SoftJointLimit
struct SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 
{
	// System.Single UnityEngine.SoftJointLimit::m_Limit
	float ___m_Limit_0;
	// System.Single UnityEngine.SoftJointLimit::m_Bounciness
	float ___m_Bounciness_1;
	// System.Single UnityEngine.SoftJointLimit::m_ContactDistance
	float ___m_ContactDistance_2;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/ShapeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/ShapeModule
struct ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// CustomGameEvent
struct CustomGameEvent_t4BE8E840254FF4F10DA0A9CA9D1CD46A291FF962  : public UnityEvent_2_t79833CED6563B86749DE624232DD5D9E55DF88EA
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 
{
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_MeshIndexSet
	bool ___m_MeshIndexSet_10;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_pinvoke
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshaled_com
{
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_MeshIndexSet_10;
	int32_t ___m_ApplyShapeToPosition_11;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GameEvent
struct GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<GameEventListener> GameEvent::listeners
	List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* ___listeners_4;
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.WindZone
struct WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// DigitalRuby.RainMaker.BaseRainScript
struct BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera DigitalRuby.RainMaker.BaseRainScript::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_4;
	// System.Boolean DigitalRuby.RainMaker.BaseRainScript::FollowCamera
	bool ___FollowCamera_5;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundLight
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___RainSoundLight_6;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundMedium
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___RainSoundMedium_7;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundHeavy
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___RainSoundHeavy_8;
	// UnityEngine.Audio.AudioMixerGroup DigitalRuby.RainMaker.BaseRainScript::RainSoundAudioMixer
	AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___RainSoundAudioMixer_9;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::RainIntensity
	float ___RainIntensity_10;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainFallParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___RainFallParticleSystem_11;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainExplosionParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___RainExplosionParticleSystem_12;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainMistParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___RainMistParticleSystem_13;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::RainMistThreshold
	float ___RainMistThreshold_14;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::WindSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___WindSound_15;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::WindSoundVolumeModifier
	float ___WindSoundVolumeModifier_16;
	// UnityEngine.WindZone DigitalRuby.RainMaker.BaseRainScript::WindZone
	WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* ___WindZone_17;
	// UnityEngine.Vector3 DigitalRuby.RainMaker.BaseRainScript::WindSpeedRange
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WindSpeedRange_18;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.BaseRainScript::WindChangeInterval
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___WindChangeInterval_19;
	// System.Boolean DigitalRuby.RainMaker.BaseRainScript::EnableWind
	bool ___EnableWind_20;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainLight
	LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* ___audioSourceRainLight_21;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainMedium
	LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* ___audioSourceRainMedium_22;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainHeavy
	LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* ___audioSourceRainHeavy_23;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainCurrent
	LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* ___audioSourceRainCurrent_24;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceWind
	LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* ___audioSourceWind_25;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___rainMaterial_26;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainExplosionMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___rainExplosionMaterial_27;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainMistMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___rainMistMaterial_28;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::lastRainIntensityValue
	float ___lastRainIntensityValue_29;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::nextWindTime
	float ___nextWindTime_30;
};

// ButtonEvents
struct ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ButtonEvents::image
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___image_4;
	// UnityEngine.GameObject ButtonEvents::BadWeather
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BadWeather_5;
	// UnityEngine.Material ButtonEvents::BadSky
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___BadSky_6;
	// UnityEngine.Material ButtonEvents::GoodSky
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GoodSky_7;
};

// CubeColorTest
struct CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference CubeColorTest::toggleReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___toggleReference_4;
	// UnityEngine.InputSystem.InputActionReference CubeColorTest::colorReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___colorReference_5;
	// UnityEngine.MeshRenderer CubeColorTest::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_6;
};

// Fade
struct Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameEventListener
struct GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameEvent GameEventListener::GameEvent
	GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* ___GameEvent_4;
	// UnityEngine.Events.UnityEvent GameEventListener::Response
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___Response_5;
};

// HMDInfoManger
struct HMDInfoManger_t6E45A4DD361A4205507E5B4A56F0577AAC1BC009  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Hand
struct Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Hand::animationSpeed
	float ___animationSpeed_4;
	// UnityEngine.Animator Hand::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// System.Single Hand::gripTarget
	float ___gripTarget_6;
	// System.Single Hand::triggerTarget
	float ___triggerTarget_7;
	// System.Single Hand::gripCurrent
	float ___gripCurrent_8;
	// System.Single Hand::triggerCurrent
	float ___triggerCurrent_9;
	// System.String Hand::animatorGripParam
	String_t* ___animatorGripParam_10;
	// System.String Hand::animatorTriggerParam
	String_t* ___animatorTriggerParam_11;
	// UnityEngine.GameObject Hand::followObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followObject_12;
	// System.Single Hand::followSpeed
	float ___followSpeed_13;
	// System.Single Hand::rotateSpeed
	float ___rotateSpeed_14;
	// UnityEngine.Vector3 Hand::positionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionOffset_15;
	// UnityEngine.Vector3 Hand::rotationOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationOffset_16;
	// UnityEngine.Transform Hand::followTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTarget_17;
	// UnityEngine.Rigidbody Hand::body
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___body_18;
};

// HandController
struct HandController_tD866B993094B1833037D30396BB39F6C15DDC10C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController HandController::controller
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___controller_4;
	// Hand HandController::hand
	Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* ___hand_5;
};

// Highlights
struct Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Highlights::maxDistance
	float ___maxDistance_4;
	// UnityEngine.Color Highlights::highlightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___highlightColor_5;
	// UnityEngine.GameObject[] Highlights::highlightObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___highlightObjects_6;
	// UnityEngine.Transform Highlights::lastHitObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lastHitObject_7;
	// UnityEngine.Material Highlights::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// UnityEngine.GameObject Highlights::image
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___image_9;
};

// Intro
struct Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Intro::waitTime
	int32_t ___waitTime_4;
	// TMPro.TMP_Text Intro::introText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___introText_5;
};

// LightToggle
struct LightToggle_t6C44FD5A0C01E78EF6E2458C0D28CA50BE51896F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material LightToggle::offMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___offMaterial_4;
	// UnityEngine.Material LightToggle::onMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___onMaterial_5;
	// UnityEngine.GameObject LightToggle::overheadLight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___overheadLight_6;
	// UnityEngine.GameObject LightToggle::overheadLightGlass
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___overheadLightGlass_7;
	// System.Boolean LightToggle::isActive
	bool ___isActive_8;
};

// MaskSpringVisualiser
struct MaskSpringVisualiser_t687DC5E75F30129A34472848B630D288226E0F9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MaskSpringVisualiser::origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___origin_4;
	// UnityEngine.Transform MaskSpringVisualiser::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// UnityEngine.LineRenderer MaskSpringVisualiser::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_6;
};

// PhysicsButton
struct PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PhysicsButton::threshold
	float ___threshold_4;
	// System.Single PhysicsButton::deadZone
	float ___deadZone_5;
	// UnityEngine.Events.UnityEvent PhysicsButton::onPressed
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPressed_6;
	// UnityEngine.Events.UnityEvent PhysicsButton::onReleased
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onReleased_7;
	// System.Boolean PhysicsButton::isPressed
	bool ___isPressed_8;
	// UnityEngine.Vector3 PhysicsButton::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_9;
	// UnityEngine.ConfigurableJoint PhysicsButton::joint
	ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* ___joint_10;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerController::resetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___resetTransform_4;
	// UnityEngine.GameObject PlayerController::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// UnityEngine.Camera PlayerController::playerHead
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerHead_6;
	// UnityEngine.InputSystem.InputActionReference PlayerController::resetPositionReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___resetPositionReference_7;
};

// DigitalRuby.RainMaker.RainCollision
struct RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> DigitalRuby.RainMaker.RainCollision::collisionEvents
	List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents_5;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.RainCollision::RainExplosion
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___RainExplosion_6;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.RainCollision::RainParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___RainParticleSystem_7;
};

struct RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_StaticFields
{
	// UnityEngine.Color32 DigitalRuby.RainMaker.RainCollision::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_24;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_37;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_38;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// DigitalRuby.RainMaker.RainScript
struct RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8  : public BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1
{
	// System.Single DigitalRuby.RainMaker.RainScript::RainHeight
	float ___RainHeight_31;
	// System.Single DigitalRuby.RainMaker.RainScript::RainForwardOffset
	float ___RainForwardOffset_32;
	// System.Single DigitalRuby.RainMaker.RainScript::RainMistHeight
	float ___RainMistHeight_33;
};

// DigitalRuby.RainMaker.RainScript2D
struct RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13  : public BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1
{
	// System.Single DigitalRuby.RainMaker.RainScript2D::cameraMultiplier
	float ___cameraMultiplier_32;
	// UnityEngine.Bounds DigitalRuby.RainMaker.RainScript2D::visibleBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___visibleBounds_33;
	// System.Single DigitalRuby.RainMaker.RainScript2D::yOffset
	float ___yOffset_34;
	// System.Single DigitalRuby.RainMaker.RainScript2D::visibleWorldWidth
	float ___visibleWorldWidth_35;
	// System.Single DigitalRuby.RainMaker.RainScript2D::initialEmissionRain
	float ___initialEmissionRain_36;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSpeedRain
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSpeedRain_37;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSizeRain
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSizeRain_38;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSpeedMist
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSpeedMist_39;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSizeMist
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSizeMist_40;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSpeedExplosion
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSpeedExplosion_41;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.RainScript2D::initialStartSizeExplosion
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSizeExplosion_42;
	// UnityEngine.ParticleSystem/Particle[] DigitalRuby.RainMaker.RainScript2D::particles
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles_43;
	// System.Single DigitalRuby.RainMaker.RainScript2D::RainHeightMultiplier
	float ___RainHeightMultiplier_44;
	// System.Single DigitalRuby.RainMaker.RainScript2D::RainWidthMultiplier
	float ___RainWidthMultiplier_45;
	// UnityEngine.LayerMask DigitalRuby.RainMaker.RainScript2D::CollisionMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___CollisionMask_46;
	// System.Single DigitalRuby.RainMaker.RainScript2D::CollisionLifeTimeRain
	float ___CollisionLifeTimeRain_47;
	// System.Single DigitalRuby.RainMaker.RainScript2D::RainMistCollisionMultiplier
	float ___RainMistCollisionMultiplier_48;
};

struct RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_StaticFields
{
	// UnityEngine.Color32 DigitalRuby.RainMaker.RainScript2D::explosionColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___explosionColor_31;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7  : public RuntimeArray
{
	ALIGN_FIELD (8) Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D m_Items[1];

	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_gshared (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_gshared (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Hand::AnimateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_AnimateHand_mE6F1ECCB9FC50C6BD4E416B4432B7B6014F4D848 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) ;
// System.Void Hand::PhysicsMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_PhysicsMove_mE15CA8677C49F24127AC2A091A2DC42733B5058E (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.ActionBasedController>()
inline ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_selectAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void Hand::SetGrip(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_activateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// System.Void Hand::SetTrigger(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void CubeColorTest::UpdateColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_UpdateColor_m2B3C8BBA56CD9B61F93DB3040CDCABF79737EFE2 (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GameEventListener>::get_Item(System.Int32)
inline GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* List_1_get_Item_mC8198924AA24D9E5F98E2AD13B13B7A764941036 (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* (*) (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void GameEventListener::OnEventsRaised(UnityEngine.Component,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEventsRaised_mFD599BAC21E9485A706B00DF9A13B9C4EA994AD7 (GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___sender0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GameEventListener>::get_Count()
inline int32_t List_1_get_Count_mA386C4FF862EA8016C0CF2342C9B5DED57213A2E_inline (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<GameEventListener>::Contains(T)
inline bool List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452 (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<GameEventListener>::Add(T)
inline void List_1_Add_m6706B41ECEDD738A671EE6BE51649B546F0F5678_inline (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<GameEventListener>::Remove(T)
inline bool List_1_Remove_mDB76FFAAFCACA5F6B0AFA326A4BA25FB4A2266F6 (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<GameEventListener>::.ctor()
inline void List_1__ctor_mEEF37D39B024319CA187B47B744C8FE368F5C576 (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Component,UnityEngine.Object>::.ctor()
inline void UnityEvent_2__ctor_m4B979A52248A01FCACC5FBBDDAB99ECFC18DF3CD (UnityEvent_2_t79833CED6563B86749DE624232DD5D9E55DF88EA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t79833CED6563B86749DE624232DD5D9E55DF88EA*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void GameEvent::RegisterListener(GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_RegisterListener_mE8914DB1FFD61FC7DDBCE68BBEE50D5FE2F8291E (GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___listener0, const RuntimeMethod* method) ;
// System.Void GameEvent::UnregisterListener(GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_UnregisterListener_m4F0BA02F94365A69C333B5859C6AC15B7272179C (GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<UnityEngine.GameObject>(T[],T)
inline int32_t Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___array0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared)(___array0, ___value1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void Highlights::UnhighlightObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlights_UnhighlightObject_m29215F6A4A6E4A90D9A45A56F0DAAEE85B33F8E5 (Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, const RuntimeMethod* method) ;
// System.Void Highlights::HighlightObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlights_HighlightObject_m95F88DEF252F3EAD650006B37BE08978BF2EC753 (Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_isDeviceActive_m0C8A5F7EC76EF392020137915E4DD8E75EBDD6B8 (const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fade::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Fade_FadeIn_m6766298FE702914406B1AA49DB3FDC9B49550833 (Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Fade/<FadeIn>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2__ctor_m906DCBA7EA57BF7309823E6363B69AF9491096E4 (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Intro::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Intro_NextScene_m3A7164A5794C59A0F363C2339998932CC11B6372 (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) ;
// System.Void Intro/<NextScene>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextSceneU3Ed__4__ctor_m5AC9D4A78933361A85C5DA5E7E2ED8FB486A280F (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ConfigurableJoint>()
inline ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single PhysicsButton::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PhysicsButton_GetValue_mBFDF14F600CC337F3225B111B54B68FC25CBDA00 (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) ;
// System.Void PhysicsButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton_Pressed_mAE854AE66F324963289A4E0FB2B6FCDB3714E576 (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) ;
// System.Void PhysicsButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton_Released_m18E01692513EDA624AB91A2BCB0BC0C80A7DAA9C (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) ;
// UnityEngine.SoftJointLimit UnityEngine.ConfigurableJoint::get_linearLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 ConfigurableJoint_get_linearLimit_m35456F7AF48ACA69E79D1EFE14578730BAA6A98A (ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SoftJointLimit::get_limit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SoftJointLimit_get_limit_m565D543DC9482F893A8C1F8582B9A06F7E287286 (SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.WindZone::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindZone_get_radius_mCA754177573056EF9C677C83DBD9C2CBD4979516 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WindZone::set_windMain(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindZone_set_windMain_mECB9DF2D5BAB9FD545891C3409B36CC57605F2DF (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WindZone::set_windTurbulence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindZone_set_windTurbulence_m61C6D929BE93A628E05A3C6C3557FF660D58231B (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.WindZone::get_windMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0 (WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m2665DF0EAFCBF66BCFB90A1998BADAD038E58E45 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, float ___targetVolume0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Stop_m02E32099CFA66944960F5F5CB15261D64C481444 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Update_m3B7209F06B2B228C94FDDBC6522E59281DC5EA02 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/EmissionModule::get_rateOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 EmissionModule_get_rateOverTime_m1FCBF31B7620FE289F7623CB2B89AB4D4F985137 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_mode(UnityEngine.ParticleSystemCurveMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MinMaxCurve::set_constantMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioClip,UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource__ctor_m70739E5DB898B4D0456BB12A2A727D6A662B6FA3 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___script0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___mixer2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.BaseRainScript::CheckForRainChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_CheckForRainChange_mE5317F1FC80D6C43599DA16FE497250FA2A04B5B (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.BaseRainScript::UpdateWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_UpdateWind_mA41659544ECB63201BBB6A3FDD491C1DD8EDCB78 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m78D358958BE0CC9674B7371D1DAC93531135D3E2_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AudioSource DigitalRuby.RainMaker.LoopingAudioSource::get_AudioSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::set_TargetVolume(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_mB7E2108798FEBFD47D49006B9A6AD0273EDE0CBF_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single DigitalRuby.RainMaker.LoopingAudioSource::get_TargetVolume()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_mC8FAD031000782FBF9DB6683ED8A63A503CED47F_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3 (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_velocity_m967097D8DE302F1E0F3D6A4821DC072A2887F4F4 (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_startLifetime_mF20C6A49DAC44DDAF6354BD826D02219E119E9E2 (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_startSize_m1830A2D364D8C2FAC2BBED20CE06460D18AD78EA (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startColor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParams_set_startColor_m471D75976D7BC807B4406D964FDD1A71755EBCA1 (EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m5AD1A3F02A19B61E3B0CC738FD498B52D19B65AA (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 ___emitParams0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_mD44421A4CC66ECB3D6FD5D9012FE6131D3DB74B7 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ps0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go1, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___collisionEvents2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
inline ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 (*) (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*, int32_t, const RuntimeMethod*))List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::get_intersection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97 (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.RainCollision::Emit(UnityEngine.ParticleSystem,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision_Emit_m77930BD1CBDC56303E220E4B7F72AE082729E55D (RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
inline void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1 (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*, const RuntimeMethod*))List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_gshared)(__this, method);
}
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/ShapeModule UnityEngine.ParticleSystem::get_shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 ParticleSystem_get_shape_mD7F072CC18587858138AA7B3A882995493AA7C80 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/ShapeModule::set_shapeType(UnityEngine.ParticleSystemShapeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F (ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.BaseRainScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_Start_m8687C15AE3D4E4C290BE64B94686C9E10AE83919 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.BaseRainScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_Update_mE588EF06A0EF3D575F40AB2BB402CE385C58AF63 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.RainScript::UpdateRain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript_UpdateRain_mC8F27ED19ABEBC9F75B7E269D3824A76D43029E2 (RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.BaseRainScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript__ctor_mDF34113D5FA6D3A9AF70649B226BC51B6FEFD422 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeed(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startSize(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m758FB450001D6EA88A3C51FA2E93D98988B7F630 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.RainScript2D::EmitExplosion(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_EmitExplosion_mF622AE9E524EB074CA3E81E8CA28AC066A41F106 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_min_m7BAFB7EDB329CBA896FA096E671D17E498C81A35 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_max_mD846329090A0A151CA139A477B70AD6A76FC1A39 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.RainScript2D::TransformParticleSystem(UnityEngine.ParticleSystem,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_TransformParticleSystem_mCA622E7F4A450D1C75D1B052401E3D749B00AC11 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSpeed1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSize2, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.RainScript2D::CheckForCollisionsRainParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_CheckForCollisionsRainParticles_m539998E873D8F1D2E3ED2FB6F15DACFC6D397104 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) ;
// System.Void DigitalRuby.RainMaker.RainScript2D::CheckForCollisionsMistParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_CheckForCollisionsMistParticles_m4D5BD3DB838149AF935BB7C7789076D5561B6CB2 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m36090778CAC5E93CADAD17A95B7C7028E93CA1BF (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, float* ___angle2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_Start_mF97170CC92093DE16E9DD633908D8FF76D6386DB (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_0);
		// followTarget = followObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___followObject_12;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___followTarget_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followTarget_17), (void*)L_2);
		// body = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___body_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___body_18), (void*)L_3);
		// body.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___body_18;
		NullCheck(L_4);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_4, 1, NULL);
		// body.interpolation = RigidbodyInterpolation.Interpolate;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___body_18;
		NullCheck(L_5);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_5, 1, NULL);
		// body.mass = 20f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___body_18;
		NullCheck(L_6);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_6, (20.0f), NULL);
		// body.position = followTarget.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___body_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___followTarget_17;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_7);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_7, L_9, NULL);
		// body.rotation = followTarget.rotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___body_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___followTarget_17;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		NullCheck(L_10);
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void Hand::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_FixedUpdate_mDE5734168E9833CD0FE927CEFEE557EB31BDC133 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	{
		// AnimateHand();
		Hand_AnimateHand_mE6F1ECCB9FC50C6BD4E416B4432B7B6014F4D848(__this, NULL);
		// PhysicsMove();
		Hand_PhysicsMove_mE15CA8677C49F24127AC2A091A2DC42733B5058E(__this, NULL);
		// }
		return;
	}
}
// System.Void Hand::PhysicsMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_PhysicsMove_mE15CA8677C49F24127AC2A091A2DC42733B5058E (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var positionWithOffset = followTarget.position + positionOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___followTarget_17;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___positionOffset_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var distance = Vector3.Distance(positionWithOffset, transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_6, NULL);
		V_1 = L_7;
		// body.velocity = (positionWithOffset - transform.position).normalized * (followSpeed * distance);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___body_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_5 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_14 = __this->___followSpeed_13;
		float L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		NullCheck(L_8);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_8, L_16, NULL);
		// var rotationWithOffset = followTarget.rotation *Quaternion.Euler(rotationOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___followTarget_17;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___rotationOffset_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_18, L_20, NULL);
		// var q = rotationWithOffset * Quaternion.Inverse(body.rotation);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___body_18;
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_21, L_24, NULL);
		V_2 = L_25;
		// q.ToAngleAxis(out float angle, out Vector3 axis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_2), (&V_3), (&V_4), NULL);
		// if (Mathf.Abs(axis.magnitude) != Mathf.Infinity)
		float L_26;
		L_26 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_27;
		L_27 = fabsf(L_26);
		if ((((float)L_27) == ((float)(std::numeric_limits<float>::infinity()))))
		{
			goto IL_00da;
		}
	}
	{
		// if (angle > 180.0f) { angle -= 360.0f; }
		float L_28 = V_3;
		if ((!(((float)L_28) > ((float)(180.0f)))))
		{
			goto IL_00ba;
		}
	}
	{
		// if (angle > 180.0f) { angle -= 360.0f; }
		float L_29 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_29, (360.0f)));
	}

IL_00ba:
	{
		// body.angularVelocity = axis * (angle * Mathf.Deg2Rad * rotateSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___body_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_4;
		float L_32 = V_3;
		float L_33 = __this->___rotateSpeed_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_32, (0.0174532924f))), L_33)), NULL);
		NullCheck(L_30);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_30, L_34, NULL);
	}

IL_00da:
	{
		// }
		return;
	}
}
// System.Void Hand::SetGrip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// gripTarget = v;
		float L_0 = ___v0;
		__this->___gripTarget_6 = L_0;
		// }
		return;
	}
}
// System.Void Hand::SetTrigger(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// triggerTarget = v;
		float L_0 = ___v0;
		__this->___triggerTarget_7 = L_0;
		// }
		return;
	}
}
// System.Void Hand::AnimateHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_AnimateHand_mE6F1ECCB9FC50C6BD4E416B4432B7B6014F4D848 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	{
		// if(gripCurrent != gripTarget)
		float L_0 = __this->___gripCurrent_8;
		float L_1 = __this->___gripTarget_6;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0048;
		}
	}
	{
		// gripCurrent = Mathf.MoveTowards(gripCurrent, gripTarget, Time.deltaTime * animationSpeed);
		float L_2 = __this->___gripCurrent_8;
		float L_3 = __this->___gripTarget_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = __this->___animationSpeed_4;
		float L_6;
		L_6 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		__this->___gripCurrent_8 = L_6;
		// animator.SetFloat(animatorGripParam, gripCurrent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_5;
		String_t* L_8 = __this->___animatorGripParam_10;
		float L_9 = __this->___gripCurrent_8;
		NullCheck(L_7);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_7, L_8, L_9, NULL);
	}

IL_0048:
	{
		// if (triggerCurrent != triggerTarget)
		float L_10 = __this->___triggerCurrent_9;
		float L_11 = __this->___triggerTarget_7;
		if ((((float)L_10) == ((float)L_11)))
		{
			goto IL_0090;
		}
	}
	{
		// triggerCurrent = Mathf.MoveTowards(triggerCurrent, triggerTarget, Time.deltaTime * animationSpeed);
		float L_12 = __this->___triggerCurrent_9;
		float L_13 = __this->___triggerTarget_7;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_15 = __this->___animationSpeed_4;
		float L_16;
		L_16 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_12, L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		__this->___triggerCurrent_9 = L_16;
		// animator.SetFloat(animatorTriggerParam, triggerCurrent);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___animator_5;
		String_t* L_18 = __this->___animatorTriggerParam_11;
		float L_19 = __this->___triggerCurrent_9;
		NullCheck(L_17);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_17, L_18, L_19, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Hand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand__ctor_m98922058C1A056306D560A36EAEDCE0247110FA8 (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string animatorGripParam = "Grip";
		__this->___animatorGripParam_10 = _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animatorGripParam_10), (void*)_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		// private string animatorTriggerParam = "Trigger";
		__this->___animatorTriggerParam_11 = _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animatorTriggerParam_11), (void*)_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		// [SerializeField] private float followSpeed = 30f;
		__this->___followSpeed_13 = (30.0f);
		// [SerializeField] private float rotateSpeed = 100f;
		__this->___rotateSpeed_14 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HandController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Start_m83BA4ED4B162A79177B32DCFCAC05906D4AD8A94 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<ActionBasedController>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0;
		L_0 = Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2(__this, Component_GetComponent_TisActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68_mEDBB78EACD2B75F6F4F8F67DDB48C086DE383FF2_RuntimeMethod_var);
		__this->___controller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void HandController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController_Update_mD7420626ECC5A2E7D45A63CAC4A2971400371418 (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// hand.SetGrip(controller.selectAction.action.ReadValue<float>());
		Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* L_0 = __this->___hand_5;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_1 = __this->___controller_4;
		NullCheck(L_1);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_2;
		L_2 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_0);
		Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1_inline(L_0, L_4, NULL);
		// hand.SetTrigger(controller.activateAction.action.ReadValue<float>());
		Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* L_5 = __this->___hand_5;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_6 = __this->___controller_4;
		NullCheck(L_6);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_7;
		L_7 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_6, NULL);
		V_0 = L_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_8, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_5);
		Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D_inline(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void HandController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandController__ctor_mC7FBA1DBB0123D91F5AA40872B63ABCFD650884F (HandController_tD866B993094B1833037D30396BB39F6C15DDC10C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents_Start_m66C46A69FF0F4CD51909D80E392D1E3C3BF83397 (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonEvents::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents_Update_mF47583082F16D9EEA71999814E809B0363E075C4 (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonEvents::ShowImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents_ShowImage_m33876F98BECFEF7BA46B72EA8A21F12BCA38A2FF (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___image_4;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ButtonEvents::HideImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents_HideImage_m0412049C056AD37B7AB08317A983CF0D89C6A3AE (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___image_4;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ButtonEvents::StartBadWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents_StartBadWeather_m1D6E6BCD1C6C179E1FC727DEF96965B2261C7EAB (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	{
		// BadWeather.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BadWeather_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// RenderSettings.skybox = BadSky;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___BadSky_6;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_1, NULL);
		// }
		return;
	}
}
// System.Void ButtonEvents::StopBadWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents_StopBadWeather_m38BBC44A21F50A4F5767D805E1C93932750D28B0 (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	{
		// BadWeather.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BadWeather_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// RenderSettings.skybox = GoodSky;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___GoodSky_7;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_1, NULL);
		// }
		return;
	}
}
// System.Void ButtonEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonEvents__ctor_m46C702A51209C1A83E1AE58DA9160CD9C92AEC31 (ButtonEvents_tD3CE19C65AAA6A876A00F045645F2C99A323DAE5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CubeColorTest::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_Awake_m8856134C3768E938342B65CFAE8D65F8547D0618 (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CubeColorTest_Toggle_m708DDCAE67297974C15D223C1345E79D2FC4902C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggleReference.action.started += Toggle;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___toggleReference_4;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)CubeColorTest_Toggle_m708DDCAE67297974C15D223C1345E79D2FC4902C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_1, L_2, NULL);
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void CubeColorTest::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_OnDestroy_mC8B36A622C8B4404EDD7E7EA385D17DF07064620 (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CubeColorTest_Toggle_m708DDCAE67297974C15D223C1345E79D2FC4902C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggleReference.action.started -= Toggle;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___toggleReference_4;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)CubeColorTest_Toggle_m708DDCAE67297974C15D223C1345E79D2FC4902C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void CubeColorTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_Start_m80B782430C05DA37ECA40433E4D67BE35E68A80B (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CubeColorTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_Update_m6CF5896E28AC23C412843311CEAE3C34EA9FE0EB (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float value = colorReference.action.ReadValue<float>();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___colorReference_5;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		V_0 = L_2;
		// UpdateColor(value);
		float L_3 = V_0;
		CubeColorTest_UpdateColor_m2B3C8BBA56CD9B61F93DB3040CDCABF79737EFE2(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void CubeColorTest::Toggle(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_Toggle_m708DDCAE67297974C15D223C1345E79D2FC4902C (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool isActive = !gameObject.activeSelf;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// gameObject.SetActive(isActive);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_3 = V_0;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void CubeColorTest::UpdateColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest_UpdateColor_m2B3C8BBA56CD9B61F93DB3040CDCABF79737EFE2 (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// meshRenderer.material.color = new Color(value, value, value);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_6;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		float L_2 = ___value0;
		float L_3 = ___value0;
		float L_4 = ___value0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void CubeColorTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeColorTest__ctor_m8484FB1C811600B04A2E79DC442D3F9408AEEF60 (CubeColorTest_t43BDF70F2EB26E8C84666E5A646B2C1A54B5B7C6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameEvent::Raise(UnityEngine.Component,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_Raise_mC1BF9DFCCE45AD5E916FC74EA3B493E6EC6E9192 (GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___sender0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA386C4FF862EA8016C0CF2342C9B5DED57213A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC8198924AA24D9E5F98E2AD13B13B7A764941036_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < listeners.Count; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// listeners[i].OnEventsRaised(sender, data);
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_0 = __this->___listeners_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* L_2;
		L_2 = List_1_get_Item_mC8198924AA24D9E5F98E2AD13B13B7A764941036(L_0, L_1, List_1_get_Item_mC8198924AA24D9E5F98E2AD13B13B7A764941036_RuntimeMethod_var);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = ___sender0;
		RuntimeObject* L_4 = ___data1;
		NullCheck(L_2);
		GameEventListener_OnEventsRaised_mFD599BAC21E9485A706B00DF9A13B9C4EA994AD7(L_2, L_3, L_4, NULL);
		// for (int i = 0; i < listeners.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < listeners.Count; i++)
		int32_t L_6 = V_0;
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_7 = __this->___listeners_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mA386C4FF862EA8016C0CF2342C9B5DED57213A2E_inline(L_7, List_1_get_Count_mA386C4FF862EA8016C0CF2342C9B5DED57213A2E_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameEvent::RegisterListener(GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_RegisterListener_mE8914DB1FFD61FC7DDBCE68BBEE50D5FE2F8291E (GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6706B41ECEDD738A671EE6BE51649B546F0F5678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!listeners.Contains(listener))
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_0 = __this->___listeners_4;
		GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452(L_0, L_1, List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// listeners.Add(listener);
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_3 = __this->___listeners_4;
		GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* L_4 = ___listener0;
		NullCheck(L_3);
		List_1_Add_m6706B41ECEDD738A671EE6BE51649B546F0F5678_inline(L_3, L_4, List_1_Add_m6706B41ECEDD738A671EE6BE51649B546F0F5678_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GameEvent::UnregisterListener(GameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent_UnregisterListener_m4F0BA02F94365A69C333B5859C6AC15B7272179C (GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* __this, GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mDB76FFAAFCACA5F6B0AFA326A4BA25FB4A2266F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (listeners.Contains(listener))
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_0 = __this->___listeners_4;
		GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* L_1 = ___listener0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452(L_0, L_1, List_1_Contains_m9D6B84951D41CF0E71FDAE6FC2D8D6A1C5844452_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// listeners.Remove(listener);
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_3 = __this->___listeners_4;
		GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* L_4 = ___listener0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mDB76FFAAFCACA5F6B0AFA326A4BA25FB4A2266F6(L_3, L_4, List_1_Remove_mDB76FFAAFCACA5F6B0AFA326A4BA25FB4A2266F6_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_mD5B3B7C48CD6A1F4D721DB2BBFEA7C1829657360 (GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEEF37D39B024319CA187B47B744C8FE368F5C576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameEventListener> listeners = new List<GameEventListener>();
		List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102* L_0 = (List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102*)il2cpp_codegen_object_new(List_1_tF818709649F5B992FB8C316A03A24E46FE4AB102_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEEF37D39B024319CA187B47B744C8FE368F5C576(L_0, List_1__ctor_mEEF37D39B024319CA187B47B744C8FE368F5C576_RuntimeMethod_var);
		__this->___listeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listeners_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomGameEvent__ctor_mBACB65FFC65FB10124BC0FB0859E6DA99A189B35 (CustomGameEvent_t4BE8E840254FF4F10DA0A9CA9D1CD46A291FF962* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m4B979A52248A01FCACC5FBBDDAB99ECFC18DF3CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m4B979A52248A01FCACC5FBBDDAB99ECFC18DF3CD(__this, UnityEvent_2__ctor_m4B979A52248A01FCACC5FBBDDAB99ECFC18DF3CD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEnable_mFA098E96AD83C72E9474CD5CC6A5E67CD53F58A9 (GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* __this, const RuntimeMethod* method) 
{
	{
		// GameEvent.RegisterListener(this);
		GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* L_0 = __this->___GameEvent_4;
		NullCheck(L_0);
		GameEvent_RegisterListener_mE8914DB1FFD61FC7DDBCE68BBEE50D5FE2F8291E(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void GameEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnDisable_mBA6CF5CE6516AC9BD73F53AF34AFE37D2A1B0B40 (GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* __this, const RuntimeMethod* method) 
{
	{
		// GameEvent.UnregisterListener(this);
		GameEvent_tA29738B67C4763CB067C50D87C18972E0A788F91* L_0 = __this->___GameEvent_4;
		NullCheck(L_0);
		GameEvent_UnregisterListener_m4F0BA02F94365A69C333B5859C6AC15B7272179C(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void GameEventListener::OnEventsRaised(UnityEngine.Component,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener_OnEventsRaised_mFD599BAC21E9485A706B00DF9A13B9C4EA994AD7 (GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___sender0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	{
		// Response.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___Response_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener__ctor_mC01EED675CE386CC492A3CAEDEA2C893CBAF80DD (GameEventListener_t92092F8B455753280DE7844A8893BD477DDA9F13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Highlights::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlights_Update_m48EBBB2020149AD8A4D8AAFDD6F972E843294ECC (Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		float L_4 = __this->___maxDistance_4;
		bool L_5;
		L_5 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0093;
		}
	}
	{
		// if (highlightObjects != null && System.Array.IndexOf(highlightObjects, hit.collider.gameObject) != -1)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___highlightObjects_6;
		if (!L_6)
		{
			goto IL_00b4;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___highlightObjects_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		int32_t L_10;
		L_10 = Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB(L_7, L_9, Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00b4;
		}
	}
	{
		// if (lastHitObject != null && lastHitObject != hit.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___lastHitObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___lastHitObject_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		// UnhighlightObject(lastHitObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___lastHitObject_7;
		Highlights_UnhighlightObject_m29215F6A4A6E4A90D9A45A56F0DAAEE85B33F8E5(__this, L_16, NULL);
	}

IL_0078:
	{
		// HighlightObject(hit.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		Highlights_HighlightObject_m95F88DEF252F3EAD650006B37BE08978BF2EC753(__this, L_17, NULL);
		// lastHitObject = hit.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		__this->___lastHitObject_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastHitObject_7), (void*)L_18);
		return;
	}

IL_0093:
	{
		// if (lastHitObject != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___lastHitObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		// UnhighlightObject(lastHitObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___lastHitObject_7;
		Highlights_UnhighlightObject_m29215F6A4A6E4A90D9A45A56F0DAAEE85B33F8E5(__this, L_21, NULL);
		// lastHitObject = null;
		__this->___lastHitObject_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastHitObject_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void Highlights::HighlightObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlights_HighlightObject_m95F88DEF252F3EAD650006B37BE08978BF2EC753 (Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	{
		// MeshRenderer renderer = obj.gameObject.GetComponent<MeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_1, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		V_0 = L_2;
		// if (renderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		// renderer.material.color = highlightColor;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___highlightColor_5;
		NullCheck(L_6);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_6, L_7, NULL);
		// if (renderer.material.color == highlightColor)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = V_0;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_8, NULL);
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___highlightColor_5;
		bool L_12;
		L_12 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		// image.GetComponent<SpriteRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___image_9;
		NullCheck(L_13);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14;
		L_14 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_13, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_14);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_14, (bool)1, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Highlights::UnhighlightObject(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlights_UnhighlightObject_m29215F6A4A6E4A90D9A45A56F0DAAEE85B33F8E5 (Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_0 = NULL;
	{
		// MeshRenderer renderer = obj.gameObject.GetComponent<MeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_1, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		V_0 = L_2;
		// if (renderer != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// renderer.material = material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___material_8;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_6, NULL);
		// image.GetComponent<SpriteRenderer>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___image_9;
		NullCheck(L_7);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8;
		L_8 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_7, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		NullCheck(L_8);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)0, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Highlights::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlights__ctor_m3BBC8309C0B9D9284111AC7F252E667782ED9E46 (Highlights_tCC8845C7EA179979AF28217C61072CACFEA31A7F* __this, const RuntimeMethod* method) 
{
	{
		// public float maxDistance = 10f; // the maximum distance at which objects can be highlighted
		__this->___maxDistance_4 = (10.0f);
		// public Color highlightColor = Color.yellow; // the color to use when highlighting an object
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		__this->___highlightColor_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HMDInfoManger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMDInfoManger_Start_m2365C7483A93F02C62EFBF03A4A2F4EB9477C4DE (HMDInfoManger_t6E45A4DD361A4205507E5B4A56F0577AAC1BC009* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CB96331DDC4B41AA1890584AB0353D64BCB787A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63500432B9A638691D365650A3E4A27428AABA0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral880726C662703809411B4F6D3B1B9B38ED6FAAE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCB7D1D4CC3D2855C6FBE8498CE25DBA79B71FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC48A9BAD431C38087A695F1F5738DD85AEA830B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF0FB763F1C000D946F9FF7623AC58CCCE5836CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4EB07FC09225A4CF2829A9AF89D3CB519192B84);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("is device active" + XRSettings.isDeviceActive);
		bool L_0;
		L_0 = XRSettings_get_isDeviceActive_m0C8A5F7EC76EF392020137915E4DD8E75EBDD6B8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCCCB7D1D4CC3D2855C6FBE8498CE25DBA79B71FC, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// Debug.Log("loaded device name" + XRSettings.loadedDeviceName);
		String_t* L_3;
		L_3 = XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243(NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF4EB07FC09225A4CF2829A9AF89D3CB519192B84, L_3, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// if (!XRSettings.isDeviceActive)
		bool L_5;
		L_5 = XRSettings_get_isDeviceActive_m0C8A5F7EC76EF392020137915E4DD8E75EBDD6B8(NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.Log("no headset pluged");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDC48A9BAD431C38087A695F1F5738DD85AEA830B, NULL);
		return;
	}

IL_0042:
	{
		// else if (XRSettings.isDeviceActive && (XRSettings.loadedDeviceName== "MOCK HMD" || XRSettings.loadedDeviceName == "MockHMDDisplay"))
		bool L_6;
		L_6 = XRSettings_get_isDeviceActive_m0C8A5F7EC76EF392020137915E4DD8E75EBDD6B8(NULL);
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_7;
		L_7 = XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243(NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral1CB96331DDC4B41AA1890584AB0353D64BCB787A, NULL);
		if (L_8)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_9;
		L_9 = XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243(NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralDF0FB763F1C000D946F9FF7623AC58CCCE5836CB, NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}

IL_006b:
	{
		// Debug.Log("Using Mock HMD");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral880726C662703809411B4F6D3B1B9B38ED6FAAE0, NULL);
		return;
	}

IL_0076:
	{
		// Debug.Log("we have a headset" + XRSettings.loadedDeviceName);
		String_t* L_11;
		L_11 = XRSettings_get_loadedDeviceName_mAEB3908916B98A9E8CF2FD8754B5AAB096245243(NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral63500432B9A638691D365650A3E4A27428AABA0C, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// }
		return;
	}
}
// System.Void HMDInfoManger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMDInfoManger_Update_mA2DAF0F4FA60D00BAF60E58795D695B2A66D8B9F (HMDInfoManger_t6E45A4DD361A4205507E5B4A56F0577AAC1BC009* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HMDInfoManger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMDInfoManger__ctor_m0A47794B39E8B67669CDB6605566EB64BA712B93 (HMDInfoManger_t6E45A4DD361A4205507E5B4A56F0577AAC1BC009* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_Start_m8CBCBF378DDED06FC5C8997B695D1C97D9A3F7FD (Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeIn());
		RuntimeObject* L_0;
		L_0 = Fade_FadeIn_m6766298FE702914406B1AA49DB3FDC9B49550833(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Fade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_Update_m8008A94A56BD02EE725B3D28DCA21BF6BF5DC17E (Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Fade::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Fade_FadeIn_m6766298FE702914406B1AA49DB3FDC9B49550833 (Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* L_0 = (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132*)il2cpp_codegen_object_new(U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInU3Ed__2__ctor_m906DCBA7EA57BF7309823E6363B69AF9491096E4(L_0, 0, NULL);
		U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Fade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade__ctor_m3B25DDD079B7BA6C55A8EF77DCC22CF01807150F (Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fade/<FadeIn>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2__ctor_m906DCBA7EA57BF7309823E6363B69AF9491096E4 (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fade/<FadeIn>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2_System_IDisposable_Dispose_m14CBCF6DCA75B1B0A529CE8EB7E3A1BF84C7079E (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fade/<FadeIn>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__2_MoveNext_mB0FCE80AE94964593DCB329CBEA39A4612F887BE (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0088;
			}
			case 3:
			{
				goto IL_00bd;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// CanvasGroup canvasGroup = GetComponent<CanvasGroup>();
		Fade_t1C31228A52DABC10B264747DEA5B13823B837F4D* L_4 = V_1;
		NullCheck(L_4);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_5;
		L_5 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(L_4, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___U3CcanvasGroupU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcanvasGroupU3E5__2_3), (void*)L_5);
		goto IL_008f;
	}

IL_005b:
	{
		// canvasGroup.alpha -= Time.deltaTime / 2;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___U3CcanvasGroupU3E5__2_3;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_7 = L_6;
		NullCheck(L_7);
		float L_8;
		L_8 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_7);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_7, ((float)il2cpp_codegen_subtract(L_8, ((float)(L_9/(2.0f))))), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0088:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008f:
	{
		// while (canvasGroup.alpha > 0)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10 = __this->___U3CcanvasGroupU3E5__2_3;
		NullCheck(L_10);
		float L_11;
		L_11 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_10, NULL);
		if ((((float)L_11) > ((float)(0.0f))))
		{
			goto IL_005b;
		}
	}
	{
		// canvasGroup.interactable = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_12 = __this->___U3CcanvasGroupU3E5__2_3;
		NullCheck(L_12);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_12, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00bd:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Fade/<FadeIn>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB37BF7EFF0C7852DF3B9EFB5031BD303A9105882 (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fade/<FadeIn>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__2_System_Collections_IEnumerator_Reset_mBD2A9F6BE111BB7C7AF6C7FCD60B831F2D0F0549 (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__2_System_Collections_IEnumerator_Reset_mBD2A9F6BE111BB7C7AF6C7FCD60B831F2D0F0549_RuntimeMethod_var)));
	}
}
// System.Object Fade/<FadeIn>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__2_System_Collections_IEnumerator_get_Current_m6CF101CFF4D18CFFDB24E9995F84BF16B81AFEFF (U3CFadeInU3Ed__2_tA6C60DA3460A5E9E84576C382699966574607132* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Intro::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro_Start_mED069CCBF90D9C9297AB1A2950428FA6B84A8A64 (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A4F613F59985DC28F058D808CD3BBF2478DD5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// introText.text = "Entering plane\n" + waitTime;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___introText_5;
		int32_t* L_1 = (&__this->___waitTime_4);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC8A4F613F59985DC28F058D808CD3BBF2478DD5F, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// StartCoroutine(NextScene());
		RuntimeObject* L_4;
		L_4 = Intro_NextScene_m3A7164A5794C59A0F363C2339998932CC11B6372(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Intro::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro_Update_m05AD393689ADBC5D1EEE010ECC64CFB1AEF36C00 (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Intro::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Intro_NextScene_m3A7164A5794C59A0F363C2339998932CC11B6372 (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* L_0 = (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19*)il2cpp_codegen_object_new(U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNextSceneU3Ed__4__ctor_m5AC9D4A78933361A85C5DA5E7E2ED8FB486A280F(L_0, 0, NULL);
		U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Intro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intro__ctor_m7D4DB3A66688C059CF001AE68699BE1E51CAE3DE (Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* __this, const RuntimeMethod* method) 
{
	{
		// public int waitTime = 5;
		__this->___waitTime_4 = 5;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Intro/<NextScene>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextSceneU3Ed__4__ctor_m5AC9D4A78933361A85C5DA5E7E2ED8FB486A280F (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Intro/<NextScene>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextSceneU3Ed__4_System_IDisposable_Dispose_mD48A1F8F66E3348C21D3D6D69F0C532F372CFD3C (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Intro/<NextScene>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNextSceneU3Ed__4_MoveNext_mD95A4B8EF751AE5B5BC7CB8533A7D2CD1FE59446 (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8A4F613F59985DC28F058D808CD3BBF2478DD5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = waitTime; i >= 0; i--)
		Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___waitTime_4;
		__this->___U3CiU3E5__2_3 = L_5;
		goto IL_008a;
	}

IL_002c:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// introText.text = "Entering plane\n" + waitTime;
		Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* L_7 = V_1;
		NullCheck(L_7);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = L_7->___introText_5;
		Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* L_9 = V_1;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___waitTime_4);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC8A4F613F59985DC28F058D808CD3BBF2478DD5F, L_11, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_12);
		// waitTime--;
		Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* L_13 = V_1;
		Intro_t05C18BE84E0B8B84BBC9A7EC09D28573F3DDA938* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___waitTime_4;
		NullCheck(L_13);
		L_13->___waitTime_4 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		// for (int i = waitTime; i >= 0; i--)
		int32_t L_16 = __this->___U3CiU3E5__2_3;
		V_2 = L_16;
		int32_t L_17 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_008a:
	{
		// for (int i = waitTime; i >= 0; i--)
		int32_t L_18 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// SceneManager.LoadScene("Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Intro/<NextScene>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNextSceneU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2A8065A755720FE02F59E9A3447D2D15F1C9BD8D (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Intro/<NextScene>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNextSceneU3Ed__4_System_Collections_IEnumerator_Reset_m65CAE21537FC6F69023BE29746E9011C1C78B498 (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNextSceneU3Ed__4_System_Collections_IEnumerator_Reset_m65CAE21537FC6F69023BE29746E9011C1C78B498_RuntimeMethod_var)));
	}
}
// System.Object Intro/<NextScene>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNextSceneU3Ed__4_System_Collections_IEnumerator_get_Current_mB6AD0E4ADCF79B3E3B04EDC2E855E549145519DF (U3CNextSceneU3Ed__4_t7600138E3BBE0738D2BABCFFD1AE7EBBDE2D4E19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LightToggle::ToggleLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggle_ToggleLight_mF4BD1547BB8E75C56A384185929D6570F67B5EF4 (LightToggle_t6C44FD5A0C01E78EF6E2458C0D28CA50BE51896F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isActive = !isActive;
		bool L_0 = __this->___isActive_8;
		__this->___isActive_8 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// overheadLight.GetComponent<Light>().enabled = isActive;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___overheadLight_6;
		NullCheck(L_1);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_1, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		bool L_3 = __this->___isActive_8;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, L_3, NULL);
		// if (isActive)
		bool L_4 = __this->___isActive_8;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// overheadLightGlass.GetComponent<MeshRenderer>().material = onMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___overheadLightGlass_7;
		NullCheck(L_5);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6;
		L_6 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_5, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___onMaterial_5;
		NullCheck(L_6);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_6, L_7, NULL);
		return;
	}

IL_0044:
	{
		// overheadLightGlass.GetComponent<MeshRenderer>().material = offMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___overheadLightGlass_7;
		NullCheck(L_8);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9;
		L_9 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_8, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___offMaterial_4;
		NullCheck(L_9);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void LightToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightToggle__ctor_m3962F236C8AAC9650ABC953B44751475AE22924C (LightToggle_t6C44FD5A0C01E78EF6E2458C0D28CA50BE51896F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MaskSpringVisualiser::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskSpringVisualiser_Update_m6F206C27472015BFE8F68681371EBF368CC8F8AE (MaskSpringVisualiser_t687DC5E75F30129A34472848B630D288226E0F9D* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.SetPosition(0, origin.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___origin_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_2, NULL);
		// lineRenderer.SetPosition(1, new Vector3(target.position.x, target.position.y, target.position.z));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lineRenderer_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___target_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___target_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_3, 1, L_13, NULL);
		// }
		return;
	}
}
// System.Void MaskSpringVisualiser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskSpringVisualiser__ctor_mB3A998A3CBEEA95D9C79EB640BBD73DC56B769B1 (MaskSpringVisualiser_t687DC5E75F30129A34472848B630D288226E0F9D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PhysicsButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton_Start_mD7FF728688E94350441F3C4DF550E1B3B75FBC7F (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startPos = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___startPos_9 = L_1;
		// joint = GetComponent<ConfigurableJoint>();
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_2;
		L_2 = Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1(__this, Component_GetComponent_TisConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77_m464A180C3A0EA1842D8405966A33A053F90575F1_RuntimeMethod_var);
		__this->___joint_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joint_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void PhysicsButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton_Update_m6E8CFA7843AA63E629BACBBC6E37D9E6D5A47DAD (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) 
{
	{
		// if (!isPressed && GetValue() + threshold >= 1)
		bool L_0 = __this->___isPressed_8;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1;
		L_1 = PhysicsButton_GetValue_mBFDF14F600CC337F3225B111B54B68FC25CBDA00(__this, NULL);
		float L_2 = __this->___threshold_4;
		if ((!(((float)((float)il2cpp_codegen_add(L_1, L_2))) >= ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// Pressed();
		PhysicsButton_Pressed_mAE854AE66F324963289A4E0FB2B6FCDB3714E576(__this, NULL);
	}

IL_0022:
	{
		// if (isPressed && GetValue() - threshold <= 0)
		bool L_3 = __this->___isPressed_8;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		float L_4;
		L_4 = PhysicsButton_GetValue_mBFDF14F600CC337F3225B111B54B68FC25CBDA00(__this, NULL);
		float L_5 = __this->___threshold_4;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_4, L_5))) <= ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		// Released();
		PhysicsButton_Released_m18E01692513EDA624AB91A2BCB0BC0C80A7DAA9C(__this, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Single PhysicsButton::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PhysicsButton_GetValue_mBFDF14F600CC337F3225B111B54B68FC25CBDA00 (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var value = Vector3.Distance(startPos, transform.localPosition) / joint.linearLimit.limit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___startPos_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_2, NULL);
		ConfigurableJoint_t8B33AB5A6B8D52493F14C4B8DBDF78A1C94ECB77* L_4 = __this->___joint_10;
		NullCheck(L_4);
		SoftJointLimit_tEAB388A040A03F05AEB70399B32F24A1B07A79E5 L_5;
		L_5 = ConfigurableJoint_get_linearLimit_m35456F7AF48ACA69E79D1EFE14578730BAA6A98A(L_4, NULL);
		V_1 = L_5;
		float L_6;
		L_6 = SoftJointLimit_get_limit_m565D543DC9482F893A8C1F8582B9A06F7E287286((&V_1), NULL);
		V_0 = ((float)(L_3/L_6));
		// if(Mathf.Abs(value) < deadZone)
		float L_7 = V_0;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = __this->___deadZone_5;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_003f;
		}
	}
	{
		// value = 0;
		V_0 = (0.0f);
	}

IL_003f:
	{
		// return Mathf.Clamp(value, -1f, 1f);
		float L_10 = V_0;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (-1.0f), (1.0f), NULL);
		return L_11;
	}
}
// System.Void PhysicsButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton_Pressed_mAE854AE66F324963289A4E0FB2B6FCDB3714E576 (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPressed = true;
		__this->___isPressed_8 = (bool)1;
		// onPressed.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onPressed_6;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// Debug.Log("Pressed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2, NULL);
		// }
		return;
	}
}
// System.Void PhysicsButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton_Released_m18E01692513EDA624AB91A2BCB0BC0C80A7DAA9C (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPressed = false;
		__this->___isPressed_8 = (bool)0;
		// onReleased.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onReleased_7;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// Debug.Log("Released");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral50BC41E913A943E8EC5EEEC79CBE71F84999B3C2, NULL);
		// }
		return;
	}
}
// System.Void PhysicsButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsButton__ctor_m0AF74E2760D4D820B3D6AC03D96C384EC90FEBBC (PhysicsButton_t60279AD088319D80BFC1505BD2DF24719A81AA3F* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float threshold = 0.1f;
		__this->___threshold_4 = (0.100000001f);
		// [SerializeField] private float deadZone = 0.025f;
		__this->___deadZone_5 = (0.0250000004f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_resetPosition_mAF5DCFB3DD220CC83DFC416C0213E3F699330655_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// resetPositionReference.action.started += resetPosition;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___resetPositionReference_7;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)PlayerController_resetPosition_mAF5DCFB3DD220CC83DFC416C0213E3F699330655_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDestroy_mBACF79169C488FF036B4FFA236852D6605281EFF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_resetPosition_mAF5DCFB3DD220CC83DFC416C0213E3F699330655_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// resetPositionReference.action.started -= resetPosition;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___resetPositionReference_7;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)PlayerController_resetPosition_mAF5DCFB3DD220CC83DFC416C0213E3F699330655_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF488641CAD07C1D27544BE04B2265864B03D100);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("resetPosition", 0.5f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralCF488641CAD07C1D27544BE04B2265864B03D100, (0.5f), NULL);
		// }
		return;
	}
}
// System.Void PlayerController::resetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_resetPosition_mD02735A2318EA4963D63AD8FC107FB8D5FBDD13B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var rotationAngleY = resetTransform.rotation.eulerAngles.y - playerHead.transform.rotation.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___resetTransform_4;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_3 = L_2.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___playerHead_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		V_2 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_8 = L_7.___y_3;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_8));
		// player.transform.Rotate(0, rotationAngleY, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___player_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		float L_11 = V_0;
		NullCheck(L_10);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_10, (0.0f), L_11, (0.0f), NULL);
		// var distanceDiff = resetTransform.position - playerHead.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___resetTransform_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___playerHead_6;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_16, NULL);
		V_1 = L_17;
		// player.transform.position += distanceDiff;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___player_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_22, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_23, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::resetPosition(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_resetPosition_mAF5DCFB3DD220CC83DFC416C0213E3F699330655 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var rotationAngleY = resetTransform.rotation.eulerAngles.y - playerHead.transform.rotation.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___resetTransform_4;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_3 = L_2.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___playerHead_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		V_2 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		float L_8 = L_7.___y_3;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_8));
		// player.transform.Rotate(0, rotationAngleY, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___player_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		float L_11 = V_0;
		NullCheck(L_10);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_10, (0.0f), L_11, (0.0f), NULL);
		// var distanceDiff = resetTransform.position - playerHead.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___resetTransform_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___playerHead_6;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_16, NULL);
		V_1 = L_17;
		// player.transform.position += distanceDiff;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___player_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_22, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_23, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRuby.RainMaker.BaseRainScript::UpdateWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_UpdateWind_mA41659544ECB63201BBB6A3FDD491C1DD8EDCB78 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B11_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_2 = NULL;
	{
		// if (EnableWind && WindZone != null && WindSpeedRange.y > 1.0f)
		bool L_0 = __this->___EnableWind_20;
		if (!L_0)
		{
			goto IL_01c7;
		}
	}
	{
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_1 = __this->___WindZone_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_01c7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___WindSpeedRange_18);
		float L_4 = L_3->___y_3;
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_01c7;
		}
	}
	{
		// WindZone.gameObject.SetActive(true);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_5 = __this->___WindZone_17;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// if (FollowCamera)
		bool L_7 = __this->___FollowCamera_5;
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// WindZone.transform.position = Camera.transform.position;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_8 = __this->___WindZone_17;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___Camera_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
	}

IL_006a:
	{
		// if (!Camera.orthographic)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___Camera_4;
		NullCheck(L_13);
		bool L_14;
		L_14 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_13, NULL);
		if (L_14)
		{
			goto IL_009c;
		}
	}
	{
		// WindZone.transform.Translate(0.0f, WindZone.radius, 0.0f);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_15 = __this->___WindZone_17;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_17 = __this->___WindZone_17;
		NullCheck(L_17);
		float L_18;
		L_18 = WindZone_get_radius_mCA754177573056EF9C677C83DBD9C2CBD4979516(L_17, NULL);
		NullCheck(L_16);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_16, (0.0f), L_18, (0.0f), NULL);
	}

IL_009c:
	{
		// if (nextWindTime < Time.time)
		float L_19 = __this->___nextWindTime_30;
		float L_20;
		L_20 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_01f1;
		}
	}
	{
		// WindZone.windMain = UnityEngine.Random.Range(WindSpeedRange.x, WindSpeedRange.y);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_21 = __this->___WindZone_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___WindSpeedRange_18);
		float L_23 = L_22->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___WindSpeedRange_18);
		float L_25 = L_24->___y_3;
		float L_26;
		L_26 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_23, L_25, NULL);
		NullCheck(L_21);
		WindZone_set_windMain_mECB9DF2D5BAB9FD545891C3409B36CC57605F2DF(L_21, L_26, NULL);
		// WindZone.windTurbulence = UnityEngine.Random.Range(WindSpeedRange.x, WindSpeedRange.y);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_27 = __this->___WindZone_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___WindSpeedRange_18);
		float L_29 = L_28->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&__this->___WindSpeedRange_18);
		float L_31 = L_30->___y_3;
		float L_32;
		L_32 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_29, L_31, NULL);
		NullCheck(L_27);
		WindZone_set_windTurbulence_m61C6D929BE93A628E05A3C6C3557FF660D58231B(L_27, L_32, NULL);
		// if (Camera.orthographic)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = __this->___Camera_4;
		NullCheck(L_33);
		bool L_34;
		L_34 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_33, NULL);
		if (!L_34)
		{
			goto IL_013d;
		}
	}
	{
		// int val = UnityEngine.Random.Range(0, 2);
		int32_t L_35;
		L_35 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_0 = L_35;
		// WindZone.transform.rotation = Quaternion.Euler(0.0f, (val == 0 ? 90.0f : -90.0f), 0.0f);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_36 = __this->___WindZone_17;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		int32_t L_38 = V_0;
		G_B10_0 = (0.0f);
		G_B10_1 = L_37;
		if (!L_38)
		{
			G_B11_0 = (0.0f);
			G_B11_1 = L_37;
			goto IL_0127;
		}
	}
	{
		G_B12_0 = (-90.0f);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_012c;
	}

IL_0127:
	{
		G_B12_0 = (90.0f);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_012c:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(G_B12_1, G_B12_0, (0.0f), NULL);
		NullCheck(G_B12_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(G_B12_2, L_39, NULL);
		goto IL_0175;
	}

IL_013d:
	{
		// WindZone.transform.rotation = Quaternion.Euler(UnityEngine.Random.Range(-30.0f, 30.0f), UnityEngine.Random.Range(0.0f, 360.0f), 0.0f);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_40 = __this->___WindZone_17;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		float L_42;
		L_42 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-30.0f), (30.0f), NULL);
		float L_43;
		L_43 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_42, L_43, (0.0f), NULL);
		NullCheck(L_41);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_41, L_44, NULL);
	}

IL_0175:
	{
		// nextWindTime = Time.time + UnityEngine.Random.Range(WindChangeInterval.x, WindChangeInterval.y);
		float L_45;
		L_45 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___WindChangeInterval_19);
		float L_47 = L_46->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (&__this->___WindChangeInterval_19);
		float L_49 = L_48->___y_1;
		float L_50;
		L_50 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_47, L_49, NULL);
		__this->___nextWindTime_30 = ((float)il2cpp_codegen_add(L_45, L_50));
		// audioSourceWind.Play((WindZone.windMain / WindSpeedRange.z) * WindSoundVolumeModifier);
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_51 = __this->___audioSourceWind_25;
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_52 = __this->___WindZone_17;
		NullCheck(L_52);
		float L_53;
		L_53 = WindZone_get_windMain_m49480166CDE759C98498B951148535FCCED788C0(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->___WindSpeedRange_18);
		float L_55 = L_54->___z_4;
		float L_56 = __this->___WindSoundVolumeModifier_16;
		NullCheck(L_51);
		LoopingAudioSource_Play_m2665DF0EAFCBF66BCFB90A1998BADAD038E58E45(L_51, ((float)il2cpp_codegen_multiply(((float)(L_53/L_55)), L_56)), NULL);
		goto IL_01f1;
	}

IL_01c7:
	{
		// if (WindZone != null)
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_57 = __this->___WindZone_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_57, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_58)
		{
			goto IL_01e6;
		}
	}
	{
		// WindZone.gameObject.SetActive(false);
		WindZone_t7946C428D1DA3C255DCDC832A39B871EDC1315A7* L_59 = __this->___WindZone_17;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
	}

IL_01e6:
	{
		// audioSourceWind.Stop();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_61 = __this->___audioSourceWind_25;
		NullCheck(L_61);
		LoopingAudioSource_Stop_m02E32099CFA66944960F5F5CB15261D64C481444(L_61, NULL);
	}

IL_01f1:
	{
		// audioSourceWind.Update();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_62 = __this->___audioSourceWind_25;
		NullCheck(L_62);
		LoopingAudioSource_Update_m3B7209F06B2B228C94FDDBC6522E59281DC5EA02(L_62, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.BaseRainScript::CheckForRainChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_CheckForRainChange_mE5317F1FC80D6C43599DA16FE497250FA2A04B5B (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* V_2 = NULL;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	float V_6 = 0.0f;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if (lastRainIntensityValue != RainIntensity)
		float L_0 = __this->___lastRainIntensityValue_29;
		float L_1 = __this->___RainIntensity_10;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_022b;
		}
	}
	{
		// lastRainIntensityValue = RainIntensity;
		float L_2 = __this->___RainIntensity_10;
		__this->___lastRainIntensityValue_29 = L_2;
		// if (RainIntensity <= 0.01f)
		float L_3 = __this->___RainIntensity_10;
		if ((!(((float)L_3) <= ((float)(0.00999999978f)))))
		{
			goto IL_00a2;
		}
	}
	{
		// if (audioSourceRainCurrent != null)
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_4 = __this->___audioSourceRainCurrent_24;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// audioSourceRainCurrent.Stop();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_5 = __this->___audioSourceRainCurrent_24;
		NullCheck(L_5);
		LoopingAudioSource_Stop_m02E32099CFA66944960F5F5CB15261D64C481444(L_5, NULL);
		// audioSourceRainCurrent = null;
		__this->___audioSourceRainCurrent_24 = (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSourceRainCurrent_24), (void*)(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)NULL);
	}

IL_0044:
	{
		// if (RainFallParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->___RainFallParticleSystem_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainFallParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___RainFallParticleSystem_11;
		NullCheck(L_8);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_9;
		L_9 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_8, NULL);
		V_0 = L_9;
		// e.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_0), (bool)0, NULL);
		// RainFallParticleSystem.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->___RainFallParticleSystem_11;
		NullCheck(L_10);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_10, NULL);
	}

IL_0071:
	{
		// if (RainMistParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_022b;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainMistParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = __this->___RainMistParticleSystem_13;
		NullCheck(L_13);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_14;
		L_14 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_13, NULL);
		V_1 = L_14;
		// e.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_1), (bool)0, NULL);
		// RainMistParticleSystem.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->___RainMistParticleSystem_13;
		NullCheck(L_15);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_15, NULL);
		return;
	}

IL_00a2:
	{
		// if (RainIntensity >= 0.67f)
		float L_16 = __this->___RainIntensity_10;
		if ((!(((float)L_16) >= ((float)(0.670000017f)))))
		{
			goto IL_00b8;
		}
	}
	{
		// newSource = audioSourceRainHeavy;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_17 = __this->___audioSourceRainHeavy_23;
		V_2 = L_17;
		goto IL_00d5;
	}

IL_00b8:
	{
		// else if (RainIntensity >= 0.33f)
		float L_18 = __this->___RainIntensity_10;
		if ((!(((float)L_18) >= ((float)(0.330000013f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// newSource = audioSourceRainMedium;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_19 = __this->___audioSourceRainMedium_22;
		V_2 = L_19;
		goto IL_00d5;
	}

IL_00ce:
	{
		// newSource = audioSourceRainLight;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_20 = __this->___audioSourceRainLight_21;
		V_2 = L_20;
	}

IL_00d5:
	{
		// if (audioSourceRainCurrent != newSource)
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_21 = __this->___audioSourceRainCurrent_24;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_22 = V_2;
		if ((((RuntimeObject*)(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)L_21) == ((RuntimeObject*)(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)L_22)))
		{
			goto IL_0108;
		}
	}
	{
		// if (audioSourceRainCurrent != null)
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_23 = __this->___audioSourceRainCurrent_24;
		if (!L_23)
		{
			goto IL_00f1;
		}
	}
	{
		// audioSourceRainCurrent.Stop();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_24 = __this->___audioSourceRainCurrent_24;
		NullCheck(L_24);
		LoopingAudioSource_Stop_m02E32099CFA66944960F5F5CB15261D64C481444(L_24, NULL);
	}

IL_00f1:
	{
		// audioSourceRainCurrent = newSource;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_25 = V_2;
		__this->___audioSourceRainCurrent_24 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSourceRainCurrent_24), (void*)L_25);
		// audioSourceRainCurrent.Play(1.0f);
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_26 = __this->___audioSourceRainCurrent_24;
		NullCheck(L_26);
		LoopingAudioSource_Play_m2665DF0EAFCBF66BCFB90A1998BADAD038E58E45(L_26, (1.0f), NULL);
	}

IL_0108:
	{
		// if (RainFallParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_27 = __this->___RainFallParticleSystem_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_018a;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainFallParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_29 = __this->___RainFallParticleSystem_11;
		NullCheck(L_29);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_30;
		L_30 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_29, NULL);
		V_3 = L_30;
		// e.enabled = RainFallParticleSystem.GetComponent<Renderer>().enabled = true;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_31 = __this->___RainFallParticleSystem_11;
		NullCheck(L_31);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_32;
		L_32 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_31, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		int32_t L_33 = 1;
		V_5 = (bool)L_33;
		NullCheck(L_32);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_32, (bool)L_33, NULL);
		bool L_34 = V_5;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_3), L_34, NULL);
		// if (!RainFallParticleSystem.isPlaying)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_35 = __this->___RainFallParticleSystem_11;
		NullCheck(L_35);
		bool L_36;
		L_36 = ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B(L_35, NULL);
		if (L_36)
		{
			goto IL_0157;
		}
	}
	{
		// RainFallParticleSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_37 = __this->___RainFallParticleSystem_11;
		NullCheck(L_37);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_37, NULL);
	}

IL_0157:
	{
		// ParticleSystem.MinMaxCurve rate = e.rateOverTime;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_38;
		L_38 = EmissionModule_get_rateOverTime_m1FCBF31B7620FE289F7623CB2B89AB4D4F985137((&V_3), NULL);
		V_4 = L_38;
		// rate.mode = ParticleSystemCurveMode.Constant;
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_4), 0, NULL);
		// rate.constantMin = rate.constantMax = RainFallEmissionRate();
		float L_39;
		L_39 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single DigitalRuby.RainMaker.BaseRainScript::RainFallEmissionRate() */, __this);
		float L_40 = L_39;
		V_6 = L_40;
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_4), L_40, NULL);
		float L_41 = V_6;
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_4), L_41, NULL);
		// e.rateOverTime = rate;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_42 = V_4;
		EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20((&V_3), L_42, NULL);
	}

IL_018a:
	{
		// if (RainMistParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_43 = __this->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_44)
		{
			goto IL_022b;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainMistParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_45 = __this->___RainMistParticleSystem_13;
		NullCheck(L_45);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_46;
		L_46 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_45, NULL);
		V_7 = L_46;
		// e.enabled = RainMistParticleSystem.GetComponent<Renderer>().enabled = true;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_47 = __this->___RainMistParticleSystem_13;
		NullCheck(L_47);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_48;
		L_48 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_47, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		int32_t L_49 = 1;
		V_5 = (bool)L_49;
		NullCheck(L_48);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_48, (bool)L_49, NULL);
		bool L_50 = V_5;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_7), L_50, NULL);
		// if (!RainMistParticleSystem.isPlaying)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_51 = __this->___RainMistParticleSystem_13;
		NullCheck(L_51);
		bool L_52;
		L_52 = ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B(L_51, NULL);
		if (L_52)
		{
			goto IL_01dd;
		}
	}
	{
		// RainMistParticleSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_53 = __this->___RainMistParticleSystem_13;
		NullCheck(L_53);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_53, NULL);
	}

IL_01dd:
	{
		// if (RainIntensity < RainMistThreshold)
		float L_54 = __this->___RainIntensity_10;
		float L_55 = __this->___RainMistThreshold_14;
		if ((!(((float)L_54) < ((float)L_55))))
		{
			goto IL_01f4;
		}
	}
	{
		// emissionRate = 0.0f;
		V_8 = (0.0f);
		goto IL_01fc;
	}

IL_01f4:
	{
		// emissionRate = MistEmissionRate();
		float L_56;
		L_56 = VirtualFuncInvoker0< float >::Invoke(7 /* System.Single DigitalRuby.RainMaker.BaseRainScript::MistEmissionRate() */, __this);
		V_8 = L_56;
	}

IL_01fc:
	{
		// ParticleSystem.MinMaxCurve rate = e.rateOverTime;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_57;
		L_57 = EmissionModule_get_rateOverTime_m1FCBF31B7620FE289F7623CB2B89AB4D4F985137((&V_7), NULL);
		V_9 = L_57;
		// rate.mode = ParticleSystemCurveMode.Constant;
		MinMaxCurve_set_mode_m6870C4CA0FE7AF1029F45040B827C9F0A6A80A86((&V_9), 0, NULL);
		// rate.constantMin = rate.constantMax = emissionRate;
		float L_58 = V_8;
		float L_59 = L_58;
		V_6 = L_59;
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_9), L_59, NULL);
		float L_60 = V_6;
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_9), L_60, NULL);
		// e.rateOverTime = rate;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_61 = V_9;
		EmissionModule_set_rateOverTime_m71BF3C0A80EA572CD87EFF5944E8FA680F51DC20((&V_7), L_61, NULL);
	}

IL_022b:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.BaseRainScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_Start_m8687C15AE3D4E4C290BE64B94686C9E10AE83919 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5CA0BEF50CDB56C4E2EBEC765358CEEA8D93C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral399F1275E9B02D0A1F1ED0E64CE3DCFF4512204F);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_3 = NULL;
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_5 = NULL;
	{
		// if (Camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___Camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___Camera_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Camera_4), (void*)L_2);
	}

IL_0019:
	{
		// audioSourceRainLight = new LoopingAudioSource(this, RainSoundLight, RainSoundAudioMixer);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = __this->___RainSoundLight_6;
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_4 = __this->___RainSoundAudioMixer_9;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_5 = (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)il2cpp_codegen_object_new(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LoopingAudioSource__ctor_m70739E5DB898B4D0456BB12A2A727D6A662B6FA3(L_5, __this, L_3, L_4, NULL);
		__this->___audioSourceRainLight_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSourceRainLight_21), (void*)L_5);
		// audioSourceRainMedium = new LoopingAudioSource(this, RainSoundMedium, RainSoundAudioMixer);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___RainSoundMedium_7;
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_7 = __this->___RainSoundAudioMixer_9;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_8 = (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)il2cpp_codegen_object_new(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LoopingAudioSource__ctor_m70739E5DB898B4D0456BB12A2A727D6A662B6FA3(L_8, __this, L_6, L_7, NULL);
		__this->___audioSourceRainMedium_22 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSourceRainMedium_22), (void*)L_8);
		// audioSourceRainHeavy = new LoopingAudioSource(this, RainSoundHeavy, RainSoundAudioMixer);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___RainSoundHeavy_8;
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_10 = __this->___RainSoundAudioMixer_9;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_11 = (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)il2cpp_codegen_object_new(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LoopingAudioSource__ctor_m70739E5DB898B4D0456BB12A2A727D6A662B6FA3(L_11, __this, L_9, L_10, NULL);
		__this->___audioSourceRainHeavy_23 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSourceRainHeavy_23), (void*)L_11);
		// audioSourceWind = new LoopingAudioSource(this, WindSound, RainSoundAudioMixer);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___WindSound_15;
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_13 = __this->___RainSoundAudioMixer_9;
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_14 = (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3*)il2cpp_codegen_object_new(LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		LoopingAudioSource__ctor_m70739E5DB898B4D0456BB12A2A727D6A662B6FA3(L_14, __this, L_12, L_13, NULL);
		__this->___audioSourceWind_25 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSourceWind_25), (void*)L_14);
		// if (RainFallParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->___RainFallParticleSystem_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00db;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainFallParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = __this->___RainFallParticleSystem_11;
		NullCheck(L_17);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_18;
		L_18 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_17, NULL);
		V_0 = L_18;
		// e.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_0), (bool)0, NULL);
		// Renderer rainRenderer = RainFallParticleSystem.GetComponent<Renderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_19 = __this->___RainFallParticleSystem_11;
		NullCheck(L_19);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20;
		L_20 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_19, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_20;
		// rainRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21 = V_1;
		NullCheck(L_21);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_21, (bool)0, NULL);
		// rainMaterial = new Material(rainRenderer.material);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22 = V_1;
		NullCheck(L_22);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23;
		L_23 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_22, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_24, L_23, NULL);
		__this->___rainMaterial_26 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rainMaterial_26), (void*)L_24);
		// rainMaterial.EnableKeyword("SOFTPARTICLES_OFF");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___rainMaterial_26;
		NullCheck(L_25);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_25, _stringLiteral399F1275E9B02D0A1F1ED0E64CE3DCFF4512204F, NULL);
		// rainRenderer.material = rainMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___rainMaterial_26;
		NullCheck(L_26);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_26, L_27, NULL);
	}

IL_00db:
	{
		// if (RainExplosionParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_28 = __this->___RainExplosionParticleSystem_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_0136;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainExplosionParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_30 = __this->___RainExplosionParticleSystem_12;
		NullCheck(L_30);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_31;
		L_31 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_30, NULL);
		V_2 = L_31;
		// e.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_2), (bool)0, NULL);
		// Renderer rainRenderer = RainExplosionParticleSystem.GetComponent<Renderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_32 = __this->___RainExplosionParticleSystem_12;
		NullCheck(L_32);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33;
		L_33 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_32, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_3 = L_33;
		// rainExplosionMaterial = new Material(rainRenderer.material);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34 = V_3;
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_34, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_36, L_35, NULL);
		__this->___rainExplosionMaterial_27 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rainExplosionMaterial_27), (void*)L_36);
		// rainExplosionMaterial.EnableKeyword("SOFTPARTICLES_OFF");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___rainExplosionMaterial_27;
		NullCheck(L_37);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_37, _stringLiteral399F1275E9B02D0A1F1ED0E64CE3DCFF4512204F, NULL);
		// rainRenderer.material = rainExplosionMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___rainExplosionMaterial_27;
		NullCheck(L_38);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_38, L_39, NULL);
	}

IL_0136:
	{
		// if (RainMistParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_40 = __this->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_01b7;
		}
	}
	{
		// ParticleSystem.EmissionModule e = RainMistParticleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_42 = __this->___RainMistParticleSystem_13;
		NullCheck(L_42);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_43;
		L_43 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_42, NULL);
		V_4 = L_43;
		// e.enabled = false;
		EmissionModule_set_enabled_mC82B6915ED485AB8DB54DFA6599C9C973BB5D867((&V_4), (bool)0, NULL);
		// Renderer rainRenderer = RainMistParticleSystem.GetComponent<Renderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_44 = __this->___RainMistParticleSystem_13;
		NullCheck(L_44);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_45;
		L_45 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_44, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_5 = L_45;
		// rainRenderer.enabled = false;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_46 = V_5;
		NullCheck(L_46);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_46, (bool)0, NULL);
		// rainMistMaterial = new Material(rainRenderer.material);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_47 = V_5;
		NullCheck(L_47);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48;
		L_48 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_47, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_49, L_48, NULL);
		__this->___rainMistMaterial_28 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rainMistMaterial_28), (void*)L_49);
		// if (UseRainMistSoftParticles)
		bool L_50;
		L_50 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean DigitalRuby.RainMaker.BaseRainScript::get_UseRainMistSoftParticles() */, __this);
		if (!L_50)
		{
			goto IL_019a;
		}
	}
	{
		// rainMistMaterial.EnableKeyword("SOFTPARTICLES_ON");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = __this->___rainMistMaterial_28;
		NullCheck(L_51);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_51, _stringLiteral2A5CA0BEF50CDB56C4E2EBEC765358CEEA8D93C7, NULL);
		goto IL_01aa;
	}

IL_019a:
	{
		// rainMistMaterial.EnableKeyword("SOFTPARTICLES_OFF");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___rainMistMaterial_28;
		NullCheck(L_52);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_52, _stringLiteral399F1275E9B02D0A1F1ED0E64CE3DCFF4512204F, NULL);
	}

IL_01aa:
	{
		// rainRenderer.material = rainMistMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_53 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = __this->___rainMistMaterial_28;
		NullCheck(L_53);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_53, L_54, NULL);
	}

IL_01b7:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.BaseRainScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript_Update_mE588EF06A0EF3D575F40AB2BB402CE385C58AF63 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	{
		// CheckForRainChange();
		BaseRainScript_CheckForRainChange_mE5317F1FC80D6C43599DA16FE497250FA2A04B5B(__this, NULL);
		// UpdateWind();
		BaseRainScript_UpdateWind_mA41659544ECB63201BBB6A3FDD491C1DD8EDCB78(__this, NULL);
		// audioSourceRainLight.Update();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_0 = __this->___audioSourceRainLight_21;
		NullCheck(L_0);
		LoopingAudioSource_Update_m3B7209F06B2B228C94FDDBC6522E59281DC5EA02(L_0, NULL);
		// audioSourceRainMedium.Update();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_1 = __this->___audioSourceRainMedium_22;
		NullCheck(L_1);
		LoopingAudioSource_Update_m3B7209F06B2B228C94FDDBC6522E59281DC5EA02(L_1, NULL);
		// audioSourceRainHeavy.Update();
		LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* L_2 = __this->___audioSourceRainHeavy_23;
		NullCheck(L_2);
		LoopingAudioSource_Update_m3B7209F06B2B228C94FDDBC6522E59281DC5EA02(L_2, NULL);
		// }
		return;
	}
}
// System.Single DigitalRuby.RainMaker.BaseRainScript::RainFallEmissionRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseRainScript_RainFallEmissionRate_m6425004A3236A7BA58CAE25AD592A7D97C7948B2 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return (RainFallParticleSystem.main.maxParticles / RainFallParticleSystem.main.startLifetime.constant) * RainIntensity;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___RainFallParticleSystem_11;
		NullCheck(L_0);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_1;
		L_1 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_0), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___RainFallParticleSystem_11;
		NullCheck(L_3);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_4;
		L_4 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_3, NULL);
		V_0 = L_4;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_5;
		L_5 = MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654((&V_0), NULL);
		V_1 = L_5;
		float L_6;
		L_6 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_1), NULL);
		float L_7 = __this->___RainIntensity_10;
		return ((float)il2cpp_codegen_multiply(((float)(((float)L_2)/L_6)), L_7));
	}
}
// System.Single DigitalRuby.RainMaker.BaseRainScript::MistEmissionRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseRainScript_MistEmissionRate_mF8FA9D9880ED829F5D7C61291AE929954A3AD311 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return (RainMistParticleSystem.main.maxParticles / RainMistParticleSystem.main.startLifetime.constant) * RainIntensity * RainIntensity;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___RainMistParticleSystem_13;
		NullCheck(L_0);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_1;
		L_1 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_0), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___RainMistParticleSystem_13;
		NullCheck(L_3);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_4;
		L_4 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_3, NULL);
		V_0 = L_4;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_5;
		L_5 = MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654((&V_0), NULL);
		V_1 = L_5;
		float L_6;
		L_6 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_1), NULL);
		float L_7 = __this->___RainIntensity_10;
		float L_8 = __this->___RainIntensity_10;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(((float)L_2)/L_6)), L_7)), L_8));
	}
}
// System.Boolean DigitalRuby.RainMaker.BaseRainScript::get_UseRainMistSoftParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseRainScript_get_UseRainMistSoftParticles_mC2CF7D770D915A63B20D69265EC27FA1E3F34E53 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void DigitalRuby.RainMaker.BaseRainScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRainScript__ctor_mDF34113D5FA6D3A9AF70649B226BC51B6FEFD422 (BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1* __this, const RuntimeMethod* method) 
{
	{
		// public bool FollowCamera = true;
		__this->___FollowCamera_5 = (bool)1;
		// public float RainMistThreshold = 0.5f;
		__this->___RainMistThreshold_14 = (0.5f);
		// public float WindSoundVolumeModifier = 0.5f;
		__this->___WindSoundVolumeModifier_16 = (0.5f);
		// public Vector3 WindSpeedRange = new Vector3(50.0f, 500.0f, 500.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (50.0f), (500.0f), (500.0f), /*hidden argument*/NULL);
		__this->___WindSpeedRange_18 = L_0;
		// public Vector2 WindChangeInterval = new Vector2(5.0f, 30.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (5.0f), (30.0f), /*hidden argument*/NULL);
		__this->___WindChangeInterval_19 = L_1;
		// public bool EnableWind = true;
		__this->___EnableWind_20 = (bool)1;
		// private float lastRainIntensityValue = -1.0f;
		__this->___lastRainIntensityValue_29 = (-1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AudioSource DigitalRuby.RainMaker.LoopingAudioSource::get_AudioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___U3CAudioSourceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m78D358958BE0CC9674B7371D1DAC93531135D3E2 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___value0;
		__this->___U3CAudioSourceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioSourceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Single DigitalRuby.RainMaker.LoopingAudioSource::get_TargetVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_mC8FAD031000782FBF9DB6683ED8A63A503CED47F (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = __this->___U3CTargetVolumeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::set_TargetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_mB7E2108798FEBFD47D49006B9A6AD0273EDE0CBF (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = ___value0;
		__this->___U3CTargetVolumeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioClip,UnityEngine.Audio.AudioMixerGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource__ctor_m70739E5DB898B4D0456BB12A2A727D6A662B6FA3 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___script0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___mixer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LoopingAudioSource(MonoBehaviour script, AudioClip clip, AudioMixerGroup mixer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AudioSource = script.gameObject.AddComponent<AudioSource>();
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___script0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_1, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		LoopingAudioSource_set_AudioSource_m78D358958BE0CC9674B7371D1DAC93531135D3E2_inline(__this, L_2, NULL);
		// if (mixer != null)
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_3 = ___mixer2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// AudioSource.outputAudioMixerGroup = mixer;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_6 = ___mixer2;
		NullCheck(L_5);
		AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF(L_5, L_6, NULL);
	}

IL_002c:
	{
		// AudioSource.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_7);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_7, (bool)1, NULL);
		// AudioSource.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___clip1;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_9, NULL);
		// AudioSource.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_10);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_10, (bool)0, NULL);
		// AudioSource.volume = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, (0.0f), NULL);
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12;
		L_12 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_12);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_12, NULL);
		// TargetVolume = 1.0f;
		LoopingAudioSource_set_TargetVolume_mB7E2108798FEBFD47D49006B9A6AD0273EDE0CBF_inline(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Play(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Play_m2665DF0EAFCBF66BCFB90A1998BADAD038E58E45 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, float ___targetVolume0, const RuntimeMethod* method) 
{
	{
		// if (!AudioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// AudioSource.volume = 0.0f;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_2);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_2, (0.0f), NULL);
		// AudioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_0028:
	{
		// TargetVolume = targetVolume;
		float L_4 = ___targetVolume0;
		LoopingAudioSource_set_TargetVolume_mB7E2108798FEBFD47D49006B9A6AD0273EDE0CBF_inline(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Stop_m02E32099CFA66944960F5F5CB15261D64C481444 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) 
{
	{
		// TargetVolume = 0.0f;
		LoopingAudioSource_set_TargetVolume_mB7E2108798FEBFD47D49006B9A6AD0273EDE0CBF_inline(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoopingAudioSource_Update_m3B7209F06B2B228C94FDDBC6522E59281DC5EA02 (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (AudioSource.isPlaying && (AudioSource.volume = Mathf.Lerp(AudioSource.volume, TargetVolume, Time.deltaTime)) == 0.0f)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_3, NULL);
		float L_5;
		L_5 = LoopingAudioSource_get_TargetVolume_mC8FAD031000782FBF9DB6683ED8A63A503CED47F_inline(__this, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_7;
		L_7 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_4, L_5, L_6, NULL);
		float L_8 = L_7;
		V_0 = L_8;
		NullCheck(L_2);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_2, L_8, NULL);
		float L_9 = V_0;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// AudioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline(__this, NULL);
		NullCheck(L_10);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_10, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRuby.RainMaker.RainCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision_Start_m0ED3FA833DD2C7AE60F96A84C9CDAC788AC2EB9E (RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainCollision::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision_Update_mFB16DE326A7EEEEF3DE3DEC68D6DF488EA0686C5 (RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainCollision::Emit(UnityEngine.ParticleSystem,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision_Emit_m77930BD1CBDC56303E220E4B7F72AE082729E55D (RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int count = UnityEngine.Random.Range(2, 5);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(2, 5, NULL);
		V_0 = L_0;
		goto IL_00a0;
	}

IL_000d:
	{
		// float yVelocity = UnityEngine.Random.Range(1.0f, 3.0f);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (3.0f), NULL);
		V_1 = L_1;
		// float zVelocity = UnityEngine.Random.Range(-2.0f, 2.0f);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-2.0f), (2.0f), NULL);
		V_2 = L_2;
		// float xVelocity = UnityEngine.Random.Range(-2.0f, 2.0f);
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-2.0f), (2.0f), NULL);
		V_3 = L_3;
		// float size = UnityEngine.Random.Range(0.05f, 0.1f);
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0500000007f), (0.100000001f), NULL);
		V_4 = L_4;
		// ParticleSystem.EmitParams param = new ParticleSystem.EmitParams();
		il2cpp_codegen_initobj((&V_5), sizeof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0));
		// param.position = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_5);
		EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3((&V_5), L_6, NULL);
		// param.velocity = new Vector3(xVelocity, yVelocity, zVelocity);
		float L_7 = V_3;
		float L_8 = V_1;
		float L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		EmitParams_set_velocity_m967097D8DE302F1E0F3D6A4821DC072A2887F4F4((&V_5), L_10, NULL);
		// param.startLifetime = lifetime;
		EmitParams_set_startLifetime_mF20C6A49DAC44DDAF6354BD826D02219E119E9E2((&V_5), (0.75f), NULL);
		// param.startSize = size;
		float L_11 = V_4;
		EmitParams_set_startSize_m1830A2D364D8C2FAC2BBED20CE06460D18AD78EA((&V_5), L_11, NULL);
		// param.startColor = color;
		il2cpp_codegen_runtime_class_init_inline(RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_il2cpp_TypeInfo_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12 = ((RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_StaticFields*)il2cpp_codegen_static_fields_for(RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_il2cpp_TypeInfo_var))->___color_4;
		EmitParams_set_startColor_m471D75976D7BC807B4406D964FDD1A71755EBCA1((&V_5), L_12, NULL);
		// p.Emit(param, 1);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = ___p0;
		EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 L_14 = V_5;
		NullCheck(L_13);
		ParticleSystem_Emit_m5AD1A3F02A19B61E3B0CC738FD498B52D19B65AA(L_13, L_14, 1, NULL);
		// count--;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_00a0:
	{
		// while (count != 0)
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainCollision::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision_OnParticleCollision_m6BBBEE55CAD303E7FC6A08511832C5F650BA00EA (RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (RainExplosion != null && RainParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___RainExplosion_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___RainParticleSystem_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// int count = RainParticleSystem.GetCollisionEvents(obj, collisionEvents);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___RainParticleSystem_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___obj0;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_6 = __this->___collisionEvents_5;
		int32_t L_7;
		L_7 = ParticlePhysicsExtensions_GetCollisionEvents_mD44421A4CC66ECB3D6FD5D9012FE6131D3DB74B7(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_005a;
	}

IL_0033:
	{
		// ParticleCollisionEvent evt = collisionEvents[i];
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_8 = __this->___collisionEvents_5;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_10;
		L_10 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_8, L_9, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		V_2 = L_10;
		// Vector3 pos = evt.intersection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ParticleCollisionEvent_get_intersection_m5CD7C517228E7D6148DEA4ED0500533C146DEC97((&V_2), NULL);
		V_3 = L_11;
		// Emit(RainExplosion, ref pos);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = __this->___RainExplosion_6;
		RainCollision_Emit_m77930BD1CBDC56303E220E4B7F72AE082729E55D(__this, L_12, (&V_3), NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0033;
		}
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision__ctor_m5C8560B6BAF26D67CE366929B2189B53DCF19979 (RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<ParticleCollisionEvent> collisionEvents = new List<ParticleCollisionEvent>();
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_0 = (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*)il2cpp_codegen_object_new(List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1(L_0, List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		__this->___collisionEvents_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collisionEvents_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainCollision::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainCollision__cctor_m55AC4F38C37E71FC0BB19C7F60472A5E6FB323AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Color32 color = new Color32(255, 255, 255, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		((RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_StaticFields*)il2cpp_codegen_static_fields_for(RainCollision_t6D26F4758F1C2864C4A2C28F38D588F8284483B3_il2cpp_TypeInfo_var))->___color_4 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRuby.RainMaker.RainScript::UpdateRain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript_UpdateRain_mC8F27ED19ABEBC9F75B7E269D3824A76D43029E2 (RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (RainFallParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0184;
		}
	}
	{
		// if (FollowCamera)
		bool L_2 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___FollowCamera_5;
		if (!L_2)
		{
			goto IL_0106;
		}
	}
	{
		// var s = RainFallParticleSystem.shape;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_3);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_4;
		L_4 = ParticleSystem_get_shape_mD7F072CC18587858138AA7B3A882995493AA7C80(L_3, NULL);
		V_0 = L_4;
		// s.shapeType = ParticleSystemShapeType.ConeVolume;
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_0), 8, NULL);
		// RainFallParticleSystem.transform.position = Camera.transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___Camera_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// RainFallParticleSystem.transform.Translate(0.0f, RainHeight, RainForwardOffset);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		float L_12 = __this->___RainHeight_31;
		float L_13 = __this->___RainForwardOffset_32;
		NullCheck(L_11);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_11, (0.0f), L_12, L_13, NULL);
		// RainFallParticleSystem.transform.rotation = Quaternion.Euler(0.0f, Camera.transform.rotation.eulerAngles.y, 0.0f);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___Camera_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		V_1 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_20 = L_19.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_20, (0.0f), NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_21, NULL);
		// if (RainMistParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0184;
		}
	}
	{
		// var s2 = RainMistParticleSystem.shape;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_24);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_25;
		L_25 = ParticleSystem_get_shape_mD7F072CC18587858138AA7B3A882995493AA7C80(L_24, NULL);
		V_2 = L_25;
		// s2.shapeType = ParticleSystemShapeType.Hemisphere;
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_2), 2, NULL);
		// Vector3 pos = Camera.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___Camera_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		V_3 = L_28;
		// pos.y += RainMistHeight;
		float* L_29 = (&(&V_3)->___y_3);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		float L_32 = __this->___RainMistHeight_33;
		*((float*)L_30) = (float)((float)il2cpp_codegen_add(L_31, L_32));
		// RainMistParticleSystem.transform.position = pos;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_33 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_3;
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_35, NULL);
		return;
	}

IL_0106:
	{
		// var s = RainFallParticleSystem.shape;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_36 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_36);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_37;
		L_37 = ParticleSystem_get_shape_mD7F072CC18587858138AA7B3A882995493AA7C80(L_36, NULL);
		V_4 = L_37;
		// s.shapeType = ParticleSystemShapeType.Box;
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_4), 5, NULL);
		// if (RainMistParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_38 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_0184;
		}
	}
	{
		// var s2 = RainMistParticleSystem.shape;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_40 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_40);
		ShapeModule_tAA38A0C5305DF2F9D96F89D4B8F762E2D034D8B2 L_41;
		L_41 = ParticleSystem_get_shape_mD7F072CC18587858138AA7B3A882995493AA7C80(L_40, NULL);
		V_5 = L_41;
		// s2.shapeType = ParticleSystemShapeType.Box;
		ShapeModule_set_shapeType_m4B5D1EA91037AD7065FE1D23652D919FED4D6D7F((&V_5), 5, NULL);
		// Vector3 pos = RainFallParticleSystem.transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_42 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		V_6 = L_44;
		// pos.y += RainMistHeight;
		float* L_45 = (&(&V_6)->___y_3);
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		float L_48 = __this->___RainMistHeight_33;
		*((float*)L_46) = (float)((float)il2cpp_codegen_add(L_47, L_48));
		// pos.y -= RainHeight;
		float* L_49 = (&(&V_6)->___y_3);
		float* L_50 = L_49;
		float L_51 = *((float*)L_50);
		float L_52 = __this->___RainHeight_31;
		*((float*)L_50) = (float)((float)il2cpp_codegen_subtract(L_51, L_52));
		// RainMistParticleSystem.transform.position = pos;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_53 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_6;
		NullCheck(L_54);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_54, L_55, NULL);
	}

IL_0184:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript_Start_m0CA9E19727CEB42CBC22F00292BE841FE4FF8C5C (RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		BaseRainScript_Start_m8687C15AE3D4E4C290BE64B94686C9E10AE83919(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript_Update_m83DF982F04CDCEF51F07D745E03473E438FFBF45 (RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		BaseRainScript_Update_mE588EF06A0EF3D575F40AB2BB402CE385C58AF63(__this, NULL);
		// UpdateRain();
		RainScript_UpdateRain_mC8F27ED19ABEBC9F75B7E269D3824A76D43029E2(__this, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript__ctor_m904ED00F45D16299FFAC4A0259CF01F6DF3934D1 (RainScript_t1C2051AFE89507A3361183B0950D42E894F5AFB8* __this, const RuntimeMethod* method) 
{
	{
		// public float RainHeight = 25.0f;
		__this->___RainHeight_31 = (25.0f);
		// public float RainForwardOffset = -7.0f;
		__this->___RainForwardOffset_32 = (-7.0f);
		// public float RainMistHeight = 3.0f;
		__this->___RainMistHeight_33 = (3.0f);
		BaseRainScript__ctor_mDF34113D5FA6D3A9AF70649B226BC51B6FEFD422(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DigitalRuby.RainMaker.RainScript2D::EmitExplosion(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_EmitExplosion_mF622AE9E524EB074CA3E81E8CA28AC066A41F106 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int count = UnityEngine.Random.Range(2, 5);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(2, 5, NULL);
		V_0 = L_0;
		goto IL_00ba;
	}

IL_000d:
	{
		// float xVelocity = UnityEngine.Random.Range(-2.0f, 2.0f) * cameraMultiplier;
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-2.0f), (2.0f), NULL);
		float L_2 = __this->___cameraMultiplier_32;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float yVelocity = UnityEngine.Random.Range(1.0f, 3.0f) * cameraMultiplier;
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (3.0f), NULL);
		float L_4 = __this->___cameraMultiplier_32;
		V_2 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// float lifetime = UnityEngine.Random.Range(0.1f, 0.2f);
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.100000001f), (0.200000003f), NULL);
		V_3 = L_5;
		// float size = UnityEngine.Random.Range(0.05f, 0.1f) * cameraMultiplier;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0500000007f), (0.100000001f), NULL);
		float L_7 = __this->___cameraMultiplier_32;
		V_4 = ((float)il2cpp_codegen_multiply(L_6, L_7));
		// ParticleSystem.EmitParams param = new ParticleSystem.EmitParams();
		il2cpp_codegen_initobj((&V_5), sizeof(EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0));
		// param.position = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8);
		EmitParams_set_position_mF08E5334FDB60090C038498B6749CE742D9FE0E3((&V_5), L_9, NULL);
		// param.velocity = new Vector3(xVelocity, yVelocity, 0.0f);
		float L_10 = V_1;
		float L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_10, L_11, (0.0f), /*hidden argument*/NULL);
		EmitParams_set_velocity_m967097D8DE302F1E0F3D6A4821DC072A2887F4F4((&V_5), L_12, NULL);
		// param.startLifetime = lifetime;
		float L_13 = V_3;
		EmitParams_set_startLifetime_mF20C6A49DAC44DDAF6354BD826D02219E119E9E2((&V_5), L_13, NULL);
		// param.startSize = size;
		float L_14 = V_4;
		EmitParams_set_startSize_m1830A2D364D8C2FAC2BBED20CE06460D18AD78EA((&V_5), L_14, NULL);
		// param.startColor = explosionColor;
		il2cpp_codegen_runtime_class_init_inline(RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_il2cpp_TypeInfo_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15 = ((RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_StaticFields*)il2cpp_codegen_static_fields_for(RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_il2cpp_TypeInfo_var))->___explosionColor_31;
		EmitParams_set_startColor_m471D75976D7BC807B4406D964FDD1A71755EBCA1((&V_5), L_15, NULL);
		// RainExplosionParticleSystem.Emit(param, 1);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0 L_17 = V_5;
		NullCheck(L_16);
		ParticleSystem_Emit_m5AD1A3F02A19B61E3B0CC738FD498B52D19B65AA(L_16, L_17, 1, NULL);
		// count--;
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_00ba:
	{
		// while (count != 0)
		int32_t L_19 = V_0;
		if (L_19)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::TransformParticleSystem(UnityEngine.ParticleSystem,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_TransformParticleSystem_mCA622E7F4A450D1C75D1B052401E3D749B00AC11 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSpeed1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialStartSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (p == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (FollowCamera)
		bool L_2 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___FollowCamera_5;
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// p.transform.position = new Vector3(Camera.transform.position.x, visibleBounds.max.y + yOffset, p.transform.position.z);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = ___p0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___Camera_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_9 = (&__this->___visibleBounds_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = __this->___yOffset_34;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = ___p0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_8, ((float)il2cpp_codegen_add(L_11, L_12)), L_16, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_17, NULL);
		goto IL_00a7;
	}

IL_0060:
	{
		// p.transform.position = new Vector3(p.transform.position.x, visibleBounds.max.y + yOffset, p.transform.position.z);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18 = ___p0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = ___p0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_24 = (&__this->___visibleBounds_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_24, NULL);
		float L_26 = L_25.___y_3;
		float L_27 = __this->___yOffset_34;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_28 = ___p0;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		float L_31 = L_30.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), L_23, ((float)il2cpp_codegen_add(L_26, L_27)), L_31, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_32, NULL);
	}

IL_00a7:
	{
		// p.transform.localScale = new Vector3(visibleWorldWidth * RainWidthMultiplier, 1.0f, 1.0f);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_33 = ___p0;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		float L_35 = __this->___visibleWorldWidth_35;
		float L_36 = __this->___RainWidthMultiplier_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)il2cpp_codegen_multiply(L_35, L_36)), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_37, NULL);
		// var m = p.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_38 = ___p0;
		NullCheck(L_38);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_39;
		L_39 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_38, NULL);
		V_0 = L_39;
		// var speed = m.startSpeed;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_40;
		L_40 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_0), NULL);
		V_1 = L_40;
		// var size = m.startSize;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_41;
		L_41 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_0), NULL);
		V_2 = L_41;
		// speed.constantMin = initialStartSpeed.x * cameraMultiplier;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___initialStartSpeed1;
		float L_43 = L_42.___x_0;
		float L_44 = __this->___cameraMultiplier_32;
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_1), ((float)il2cpp_codegen_multiply(L_43, L_44)), NULL);
		// speed.constantMax = initialStartSpeed.y * cameraMultiplier;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = ___initialStartSpeed1;
		float L_46 = L_45.___y_1;
		float L_47 = __this->___cameraMultiplier_32;
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_1), ((float)il2cpp_codegen_multiply(L_46, L_47)), NULL);
		// size.constantMin = initialStartSize.x * cameraMultiplier;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___initialStartSize2;
		float L_49 = L_48.___x_0;
		float L_50 = __this->___cameraMultiplier_32;
		MinMaxCurve_set_constantMin_mBF7CF2A9F167AD06C327EE6EA37BA427E1CE548C((&V_2), ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		// size.constantMax = initialStartSize.y * cameraMultiplier;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = ___initialStartSize2;
		float L_52 = L_51.___y_1;
		float L_53 = __this->___cameraMultiplier_32;
		MinMaxCurve_set_constantMax_mDB7B011E5B1EA76429B2A1FFDE6C06E82D290DC1((&V_2), ((float)il2cpp_codegen_multiply(L_52, L_53)), NULL);
		// m.startSpeed = speed;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_54 = V_1;
		MainModule_set_startSpeed_mE6041E4BA54F01117AF6B81B1E53C5C9C669AC75((&V_0), L_54, NULL);
		// m.startSize = size;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_55 = V_2;
		MainModule_set_startSize_m44C3A39EAF1AE9A526A126D93160128223BE827B((&V_0), L_55, NULL);
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::CheckForCollisionsRainParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_CheckForCollisionsRainParticles_m539998E873D8F1D2E3ED2FB6F15DACFC6D397104 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// int count = 0;
		V_0 = 0;
		// bool changes = false;
		V_1 = (bool)0;
		// if (CollisionMask != 0)
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___CollisionMask_46;
		int32_t L_1;
		L_1 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0174;
		}
	}
	{
		// count = RainFallParticleSystem.GetParticles(particles);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_3 = __this->___particles_43;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F(L_2, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_016d;
	}

IL_002d:
	{
		// Vector3 pos = particles[i].position + RainFallParticleSystem.transform.position;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_5 = __this->___particles_43;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_10, NULL);
		V_4 = L_11;
		// hit = Physics2D.Raycast(pos, particles[i].velocity.normalized, particles[i].velocity.magnitude * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_14 = __this->___particles_43;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), NULL);
		V_5 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_17, NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_19 = __this->___particles_43;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		V_5 = L_21;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_5), NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_24;
		L_24 = Physics2D_Raycast_m758FB450001D6EA88A3C51FA2E93D98988B7F630(L_13, L_18, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		V_2 = L_24;
		// if (hit.collider != null && ((1 << hit.collider.gameObject.layer) & CollisionMask) != 0)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_25;
		L_25 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0169;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_27;
		L_27 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_2), NULL);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_28, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_30 = __this->___CollisionMask_46;
		int32_t L_31;
		L_31 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_30, NULL);
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_29&((int32_t)31)))))&L_31)))
		{
			goto IL_0169;
		}
	}
	{
		// if (CollisionLifeTimeRain == 0.0f)
		float L_32 = __this->___CollisionLifeTimeRain_47;
		if ((!(((float)L_32) == ((float)(0.0f)))))
		{
			goto IL_00ff;
		}
	}
	{
		// particles[i].remainingLifetime = 0.0f;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_33 = __this->___particles_43;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018(((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), (0.0f), NULL);
		goto IL_0167;
	}

IL_00ff:
	{
		// particles[i].remainingLifetime = Mathf.Min(particles[i].remainingLifetime, UnityEngine.Random.Range(CollisionLifeTimeRain * 0.5f, CollisionLifeTimeRain * 2.0f));
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_35 = __this->___particles_43;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_37 = __this->___particles_43;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		float L_39;
		L_39 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), NULL);
		float L_40 = __this->___CollisionLifeTimeRain_47;
		float L_41 = __this->___CollisionLifeTimeRain_47;
		float L_42;
		L_42 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_multiply(L_40, (0.5f))), ((float)il2cpp_codegen_multiply(L_41, (2.0f))), NULL);
		float L_43;
		L_43 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_39, L_42, NULL);
		Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), L_43, NULL);
		// pos += (particles[i].velocity * Time.deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_4;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_45 = __this->___particles_43;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), NULL);
		float L_48;
		L_48 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_47, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_49, NULL);
		V_4 = L_50;
	}

IL_0167:
	{
		// changes = true;
		V_1 = (bool)1;
	}

IL_0169:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_016d:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_52 = V_3;
		int32_t L_53 = V_0;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_002d;
		}
	}

IL_0174:
	{
		// if (RainExplosionParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_54 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_01f1;
		}
	}
	{
		// if (count == 0)
		int32_t L_56 = V_0;
		if (L_56)
		{
			goto IL_0197;
		}
	}
	{
		// count = RainFallParticleSystem.GetParticles(particles);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_57 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_58 = __this->___particles_43;
		NullCheck(L_57);
		int32_t L_59;
		L_59 = ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F(L_57, L_58, NULL);
		V_0 = L_59;
	}

IL_0197:
	{
		// for (int i = 0; i < count; i++)
		V_6 = 0;
		goto IL_01ec;
	}

IL_019c:
	{
		// if (particles[i].remainingLifetime < 0.24f)
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_60 = __this->___particles_43;
		int32_t L_61 = V_6;
		NullCheck(L_60);
		float L_62;
		L_62 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9(((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61))), NULL);
		if ((!(((float)L_62) < ((float)(0.239999995f)))))
		{
			goto IL_01e6;
		}
	}
	{
		// Vector3 pos = particles[i].position + RainFallParticleSystem.transform.position;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_63 = __this->___particles_43;
		int32_t L_64 = V_6;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_66 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_68, NULL);
		V_7 = L_69;
		// EmitExplosion(ref pos);
		RainScript2D_EmitExplosion_mF622AE9E524EB074CA3E81E8CA28AC066A41F106(__this, (&V_7), NULL);
	}

IL_01e6:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_70 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01ec:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_71 = V_6;
		int32_t L_72 = V_0;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_019c;
		}
	}

IL_01f1:
	{
		// if (changes)
		bool L_73 = V_1;
		if (!L_73)
		{
			goto IL_0206;
		}
	}
	{
		// RainFallParticleSystem.SetParticles(particles, count);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_74 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_75 = __this->___particles_43;
		int32_t L_76 = V_0;
		NullCheck(L_74);
		ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592(L_74, L_75, L_76, NULL);
	}

IL_0206:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::CheckForCollisionsMistParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_CheckForCollisionsMistParticles_m4D5BD3DB838149AF935BB7C7789076D5561B6CB2 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (RainMistParticleSystem == null || CollisionMask == 0)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = __this->___CollisionMask_46;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_2, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// int count = RainMistParticleSystem.GetParticles(particles);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_5 = __this->___particles_43;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F(L_4, L_5, NULL);
		V_0 = L_6;
		// bool changes = false;
		V_1 = (bool)0;
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_00e9;
	}

IL_0037:
	{
		// Vector3 pos = particles[i].position + RainMistParticleSystem.transform.position;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_7 = __this->___particles_43;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_12, NULL);
		// hit = Physics2D.Raycast(pos, particles[i].velocity.normalized, particles[i].velocity.magnitude* Time.deltaTime, CollisionMask);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_15 = __this->___particles_43;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), NULL);
		V_4 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_20 = __this->___particles_43;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), NULL);
		V_4 = L_22;
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = __this->___CollisionMask_46;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_27;
		L_27 = Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F(L_14, L_19, ((float)il2cpp_codegen_multiply(L_23, L_24)), L_26, NULL);
		V_2 = L_27;
		// if (hit.collider != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_28;
		L_28 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00e5;
		}
	}
	{
		// particles[i].velocity *= RainMistCollisionMultiplier;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_30 = __this->___particles_43;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(L_32, NULL);
		float L_34 = __this->___RainMistCollisionMultiplier_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B(L_32, L_35, NULL);
		// changes = true;
		V_1 = (bool)1;
	}

IL_00e5:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00e9:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0037;
		}
	}
	{
		// if (changes)
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0105;
		}
	}
	{
		// RainMistParticleSystem.SetParticles(particles, count);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_40 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_41 = __this->___particles_43;
		int32_t L_42 = V_0;
		NullCheck(L_40);
		ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592(L_40, L_41, L_42, NULL);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_Start_mAC6B71E67E342520A17C733859F4CF03783A8953 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// base.Start();
		BaseRainScript_Start_m8687C15AE3D4E4C290BE64B94686C9E10AE83919(__this, NULL);
		// initialEmissionRain = RainFallParticleSystem.emission.rateOverTime.constant;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_0);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_1;
		L_1 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_0, NULL);
		V_0 = L_1;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_2;
		L_2 = EmissionModule_get_rateOverTime_m1FCBF31B7620FE289F7623CB2B89AB4D4F985137((&V_0), NULL);
		V_1 = L_2;
		float L_3;
		L_3 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_1), NULL);
		__this->___initialEmissionRain_36 = L_3;
		// initialStartSpeedRain = new Vector2(RainFallParticleSystem.main.startSpeed.constantMin, RainFallParticleSystem.main.startSpeed.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_4);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_5;
		L_5 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_4, NULL);
		V_2 = L_5;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_6;
		L_6 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_2), NULL);
		V_1 = L_6;
		float L_7;
		L_7 = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_8);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_9;
		L_9 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_8, NULL);
		V_2 = L_9;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_10;
		L_10 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_2), NULL);
		V_1 = L_10;
		float L_11;
		L_11 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_7, L_11, /*hidden argument*/NULL);
		__this->___initialStartSpeedRain_37 = L_12;
		// initialStartSizeRain = new Vector2(RainFallParticleSystem.main.startSize.constantMin, RainFallParticleSystem.main.startSize.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_13);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_14;
		L_14 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_13, NULL);
		V_2 = L_14;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_15;
		L_15 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_2), NULL);
		V_1 = L_15;
		float L_16;
		L_16 = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		NullCheck(L_17);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_18;
		L_18 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_17, NULL);
		V_2 = L_18;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_19;
		L_19 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_2), NULL);
		V_1 = L_19;
		float L_20;
		L_20 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_16, L_20, /*hidden argument*/NULL);
		__this->___initialStartSizeRain_38 = L_21;
		// if (RainMistParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_013c;
		}
	}
	{
		// initialStartSpeedMist = new Vector2(RainMistParticleSystem.main.startSpeed.constantMin, RainMistParticleSystem.main.startSpeed.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_24);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_25;
		L_25 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_24, NULL);
		V_2 = L_25;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_26;
		L_26 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_2), NULL);
		V_1 = L_26;
		float L_27;
		L_27 = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_28 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_28);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_29;
		L_29 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_28, NULL);
		V_2 = L_29;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_30;
		L_30 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_2), NULL);
		V_1 = L_30;
		float L_31;
		L_31 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), L_27, L_31, /*hidden argument*/NULL);
		__this->___initialStartSpeedMist_39 = L_32;
		// initialStartSizeMist = new Vector2(RainMistParticleSystem.main.startSize.constantMin, RainMistParticleSystem.main.startSize.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_33 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_33);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_34;
		L_34 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_33, NULL);
		V_2 = L_34;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_35;
		L_35 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_2), NULL);
		V_1 = L_35;
		float L_36;
		L_36 = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_37 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		NullCheck(L_37);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_38;
		L_38 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_37, NULL);
		V_2 = L_38;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_39;
		L_39 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_2), NULL);
		V_1 = L_39;
		float L_40;
		L_40 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), L_36, L_40, /*hidden argument*/NULL);
		__this->___initialStartSizeMist_40 = L_41;
	}

IL_013c:
	{
		// if (RainExplosionParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_42 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_01cf;
		}
	}
	{
		// initialStartSpeedExplosion = new Vector2(RainExplosionParticleSystem.main.startSpeed.constantMin, RainExplosionParticleSystem.main.startSpeed.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_44 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		NullCheck(L_44);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_45;
		L_45 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_44, NULL);
		V_2 = L_45;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_2), NULL);
		V_1 = L_46;
		float L_47;
		L_47 = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_48 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		NullCheck(L_48);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_49;
		L_49 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_48, NULL);
		V_2 = L_49;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_50;
		L_50 = MainModule_get_startSpeed_m2F9A0CF5D05AA3522424EAD30CF226F0CDF8382B((&V_2), NULL);
		V_1 = L_50;
		float L_51;
		L_51 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), L_47, L_51, /*hidden argument*/NULL);
		__this->___initialStartSpeedExplosion_41 = L_52;
		// initialStartSizeExplosion = new Vector2(RainExplosionParticleSystem.main.startSize.constantMin, RainExplosionParticleSystem.main.startSize.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_53 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		NullCheck(L_53);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_54;
		L_54 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_53, NULL);
		V_2 = L_54;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_55;
		L_55 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_2), NULL);
		V_1 = L_55;
		float L_56;
		L_56 = MinMaxCurve_get_constantMin_mB39AF05209B993DC31AB4247D9BE8D4F80E5D710((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_57 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		NullCheck(L_57);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_58;
		L_58 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_57, NULL);
		V_2 = L_58;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = MainModule_get_startSize_m7D92E17A7D36FB18A9D3ADA54D2D1DEDE89601FC((&V_2), NULL);
		V_1 = L_59;
		float L_60;
		L_60 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), L_56, L_60, /*hidden argument*/NULL);
		__this->___initialStartSizeExplosion_42 = L_61;
	}

IL_01cf:
	{
		// }
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D_Update_mFBA340A29A023F1F547E771CC085F3FBF40503E9 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		BaseRainScript_Update_mE588EF06A0EF3D575F40AB2BB402CE385C58AF63(__this, NULL);
		// cameraMultiplier = (Camera.orthographicSize * 0.25f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___Camera_4;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		__this->___cameraMultiplier_32 = ((float)il2cpp_codegen_multiply(L_1, (0.25f)));
		// visibleBounds.min = Camera.main.ViewportToWorldPoint(Vector3.zero);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2 = (&__this->___visibleBounds_33);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_3, L_4, NULL);
		Bounds_set_min_m7BAFB7EDB329CBA896FA096E671D17E498C81A35(L_2, L_5, NULL);
		// visibleBounds.max = Camera.main.ViewportToWorldPoint(Vector3.one);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6 = (&__this->___visibleBounds_33);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_7, L_8, NULL);
		Bounds_set_max_mD846329090A0A151CA139A477B70AD6A76FC1A39(L_6, L_9, NULL);
		// visibleWorldWidth = visibleBounds.size.x;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_10 = (&__this->___visibleBounds_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_10, NULL);
		float L_12 = L_11.___x_2;
		__this->___visibleWorldWidth_35 = L_12;
		// yOffset = (visibleBounds.max.y - visibleBounds.min.y) * RainHeightMultiplier;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_13 = (&__this->___visibleBounds_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_13, NULL);
		float L_15 = L_14.___y_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = (&__this->___visibleBounds_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_16, NULL);
		float L_18 = L_17.___y_3;
		float L_19 = __this->___RainHeightMultiplier_44;
		__this->___yOffset_34 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_15, L_18)), L_19));
		// TransformParticleSystem(RainFallParticleSystem, initialStartSpeedRain, initialStartSizeRain);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainFallParticleSystem_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___initialStartSpeedRain_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = __this->___initialStartSizeRain_38;
		RainScript2D_TransformParticleSystem_mCA622E7F4A450D1C75D1B052401E3D749B00AC11(__this, L_20, L_21, L_22, NULL);
		// TransformParticleSystem(RainMistParticleSystem, initialStartSpeedMist, initialStartSizeMist);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainMistParticleSystem_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___initialStartSpeedMist_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = __this->___initialStartSizeMist_40;
		RainScript2D_TransformParticleSystem_mCA622E7F4A450D1C75D1B052401E3D749B00AC11(__this, L_23, L_24, L_25, NULL);
		// TransformParticleSystem(RainExplosionParticleSystem, initialStartSpeedExplosion, initialStartSizeExplosion);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_26 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainExplosionParticleSystem_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___initialStartSpeedExplosion_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___initialStartSizeExplosion_42;
		RainScript2D_TransformParticleSystem_mCA622E7F4A450D1C75D1B052401E3D749B00AC11(__this, L_26, L_27, L_28, NULL);
		// CheckForCollisionsRainParticles();
		RainScript2D_CheckForCollisionsRainParticles_m539998E873D8F1D2E3ED2FB6F15DACFC6D397104(__this, NULL);
		// CheckForCollisionsMistParticles();
		RainScript2D_CheckForCollisionsMistParticles_m4D5BD3DB838149AF935BB7C7789076D5561B6CB2(__this, NULL);
		// }
		return;
	}
}
// System.Single DigitalRuby.RainMaker.RainScript2D::RainFallEmissionRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RainScript2D_RainFallEmissionRate_m62AE412DFEA8BB0BFC08D27ACA83761F4DFB74E0 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	{
		// return initialEmissionRain * RainIntensity;
		float L_0 = __this->___initialEmissionRain_36;
		float L_1 = ((BaseRainScript_t43C8F5745AA28031F26D4308772C747552EEB5F1*)__this)->___RainIntensity_10;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Boolean DigitalRuby.RainMaker.RainScript2D::get_UseRainMistSoftParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RainScript2D_get_UseRainMistSoftParticles_mB3B399F4961D21506DEF9A09833B2DA3CC941924 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D__ctor_m27142636A537D5322DD2773E52474BF24E169D81 (RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float cameraMultiplier = 1.0f;
		__this->___cameraMultiplier_32 = (1.0f);
		// private readonly ParticleSystem.Particle[] particles = new ParticleSystem.Particle[2048];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_0 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)SZArrayNew(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		__this->___particles_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_43), (void*)L_0);
		// public float RainHeightMultiplier = 0.15f;
		__this->___RainHeightMultiplier_44 = (0.150000006f);
		// public float RainWidthMultiplier = 1.5f;
		__this->___RainWidthMultiplier_45 = (1.5f);
		// public LayerMask CollisionMask = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___CollisionMask_46 = L_1;
		// public float CollisionLifeTimeRain = 0.02f;
		__this->___CollisionLifeTimeRain_47 = (0.0199999996f);
		// public float RainMistCollisionMultiplier = 0.75f;
		__this->___RainMistCollisionMultiplier_48 = (0.75f);
		BaseRainScript__ctor_mDF34113D5FA6D3A9AF70649B226BC51B6FEFD422(__this, NULL);
		return;
	}
}
// System.Void DigitalRuby.RainMaker.RainScript2D::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RainScript2D__cctor_m266418890BBE84173070244DBF98212F6DD97BAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Color32 explosionColor = new Color32(255, 255, 255, 255);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_0), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		((RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_StaticFields*)il2cpp_codegen_static_fields_for(RainScript2D_tC39A097BFC087B774BA4E2E599258E0138E0DE13_il2cpp_TypeInfo_var))->___explosionColor_31 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___axis1;
		float* L_2 = ___angle0;
		Quaternion_Internal_ToAxisAngleRad_m36090778CAC5E93CADAD17A95B7C7028E93CA1BF(L_0, L_1, L_2, NULL);
		float* L_3 = ___angle0;
		float* L_4 = ___angle0;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SelectAction_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetGrip_m3696EA53C1FCF4B36ACCBA9D647167FA4813B8F1_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// gripTarget = v;
		float L_0 = ___v0;
		__this->___gripTarget_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ActivateAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_ActivateAction_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hand_SetTrigger_m4C9AE4BA5A37823DA8E5259F03C56627AF30250D_inline (Hand_t68D826D6A2994AEFBCC1627833F8CA60C8A4A7B1* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// triggerTarget = v;
		float L_0 = ___v0;
		__this->___triggerTarget_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_AudioSource_m78D358958BE0CC9674B7371D1DAC93531135D3E2_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___value0;
		__this->___U3CAudioSourceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAudioSourceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* LoopingAudioSource_get_AudioSource_m7065C418300FE55E18B4CC7F94DD0B104B10049E_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) 
{
	{
		// public AudioSource AudioSource { get; private set; }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___U3CAudioSourceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoopingAudioSource_set_TargetVolume_mB7E2108798FEBFD47D49006B9A6AD0273EDE0CBF_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = ___value0;
		__this->___U3CTargetVolumeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float LoopingAudioSource_get_TargetVolume_mC8FAD031000782FBF9DB6683ED8A63A503CED47F_inline (LoopingAudioSource_t593236BEF016409EB88E2917607D650FCC3A9AF3* __this, const RuntimeMethod* method) 
{
	{
		// public float TargetVolume { get; private set; }
		float L_0 = __this->___U3CTargetVolumeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
